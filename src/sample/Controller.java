package sample;

import com.jfoenix.controls.JFXTextArea;
import javafx.beans.value.ChangeListener;
import javafx.beans.value.ObservableValue;
import javafx.collections.FXCollections;
import javafx.collections.ObservableList;
import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.fxml.Initializable;
import javafx.scene.control.TableColumn;
import javafx.scene.control.TableView;
import javafx.scene.control.cell.PropertyValueFactory;
import javafx.scene.text.Font;
import javafx.scene.text.FontPosture;

import java.io.*;
import java.net.URL;
import java.util.ResourceBundle;

import static sample.Functions.*;

public class Controller implements Initializable {
    ObservableList<Symbole> symb = FXCollections.observableArrayList();
    ObservableList<Liste> lis = FXCollections.observableArrayList();

    @FXML
    private JFXTextArea textArea;
    @FXML
    private JFXTextArea textError;

    @FXML
    private JFXTextArea lineNo;
    @FXML
    private TableView<Symbole> symbole;

    @FXML
    private TableColumn<Symbole, String> enc;

    @FXML
    private TableColumn<Symbole, String> nom;

    @FXML
    private TableColumn<Symbole, String> code;

    @FXML
    private TableColumn<Symbole, String> type;

    @FXML
    private TableColumn<Symbole, String> conste;

    @FXML
    private TableColumn<Symbole, String> taille;

    @FXML
    private TableView<Liste> liste;

    @FXML
    private TableColumn<Liste, String> nomL;

    @FXML
    private TableColumn<Liste, String> tailleL;

    @FXML
    private TableColumn<Liste, String> positionL;

    @Override
    public void initialize(URL url, ResourceBundle resourceBundle) {
        textArea.setStyle("-fx-border-color:white; -fx-border-radius:5px; -fx-border-width:2px; -fx-control-inner-background:#575757; -fx-highlight-fill: #575757;-fx-font-family: Consolas;-fx-font-size:12px; -fx -fx-highlight-text-fill: #FFFFFF; -fx-text-fill: #ffffff; ");
        textError.setStyle(" -fx-border-color:white; -fx-border-radius:5px; -fx-border-width:2px; -fx-control-inner-background:#474747; -fx-highlight-fill: #474747;-fx-font-family: Consolas; -fx-font-size:12px; -fx -fx-highlight-text-fill: #FFFFFF; -fx-text-fill: #ffffff; ");
        lineNo.setStyle("-fx-border-color:white;-fx-border-radius:5px;-fx-border-width:2px;-fx-control-inner-background:#474747; -fx-highlight-fill: #474747;-fx-font-family: Consolas;-fx-font-size:12px; -fx -fx-highlight-text-fill: #FFFFFF; -fx-text-fill: #ffffff; ");
        lineNo.setText("1");
        initCol();


        textArea.scrollTopProperty().addListener(new ChangeListener<Number>() {
            @Override
            public void changed(ObservableValue<? extends Number> observableValue, Number number, Number t1) {
                lineNo.scrollTopProperty().set((double) t1);
            }
        });
        textArea.textProperty().addListener((observable, oldValue, newValue) -> {
            String line;
            if (NumberOfLines(oldValue) != NumberOfLines(newValue)) {
                line = "1";
                for (int i = 2; i <= NumberOfLines(newValue) + 1; i++) {
                    line = line + "\n" + i;
                }
                lineNo.setText(line);
            }
        });
    }

    ;

    public int NumberOfLines(String Text) {
        int lineCount = 0;

        for (int i = 0; i < Text.length(); ++i) {
            if (Text.charAt(i) == '\n') {
                ++lineCount;
            }
        }
        return lineCount;
    }

    private void initCol() {

        enc.setCellValueFactory(new PropertyValueFactory<>("Enc"));
        nom.setCellValueFactory(new PropertyValueFactory<>("Nom"));
        code.setCellValueFactory(new PropertyValueFactory<>("Code"));
        type.setCellValueFactory(new PropertyValueFactory<>("Type"));
        conste.setCellValueFactory(new PropertyValueFactory<>("Const"));
        taille.setCellValueFactory(new PropertyValueFactory<>("Taille"));


        nomL.setCellValueFactory(new PropertyValueFactory<>("Nom"));
        tailleL.setCellValueFactory(new PropertyValueFactory<>("Taille"));
        positionL.setCellValueFactory(new PropertyValueFactory<>("Position"));

    }

    @FXML
    void Compile(ActionEvent event) throws IOException {
        String s = textArea.getText();
        File f  = new File("Test.txt");
        f.createNewFile();
        FileWriter omout = new FileWriter(f);
        omout.write(s);
        omout.close();
        try {
            Functions.exec();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    @FXML
    void displayRes(ActionEvent event) {
        BufferedReader bf;
        try {
            symbole.getItems().clear();
            liste.getItems().clear();
            String string="";
            textError.clear();
            bf = new BufferedReader(new FileReader("Result.txt"));
            for (String str : Erreurs(bf)) {
                System.out.println(str);
                string=string+"*"+str+"\n";
            }
            textError.setText(string);
            symb=getTableDesSymboles(bf);
            for (Symbole s : symb)
            {
                symbole.getItems().add(s);}
            lis=getTableDesListes(bf);
            for (Liste l : lis) {
                System.out.println(l);
                liste.getItems().add(l);
            }
            bf.close();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}