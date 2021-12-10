package sample;
import javafx.beans.Observable;
import javafx.collections.FXCollections;
import javafx.collections.ObservableList;

import java.awt.BorderLayout;
import java.awt.event.MouseAdapter;
import java.awt.event.MouseEvent;
import java.io.BufferedReader;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;
import java.util.ArrayList;


public class Functions {
//	public static void main(String[] args) throws IOException {
//		JFrame f = new JFrame();
//		f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
//		f.setBounds(100, 100, 450, 300);
//		JPanel contentPane = new JPanel();
//		contentPane.setBorder(new EmptyBorder(5, 5, 5, 5));
//		contentPane.setLayout(new BorderLayout(0, 0));
//		f.setContentPane(contentPane);
//
//		JButton btnExec = new JButton("Exec");
//		btnExec.addMouseListener(new MouseAdapter() {
//			@Override
//			public void mouseClicked(MouseEvent arg0) {
//				try {
//					exec();
//				} catch (IOException e) {
//					// TODO Auto-generated catch block
//					e.printStackTrace();
//				}
//			}
//		});
//		contentPane.add(btnExec, BorderLayout.WEST);
//
//		JButton btnComp = new JButton("Comp");
//		btnComp.addMouseListener(new MouseAdapter() {
//			@Override
//			public void mouseClicked(MouseEvent arg0) {
//				BufferedReader bf;
//				try {
//					bf = new BufferedReader(new FileReader("Result.txt"));
////					for(String str : Erreurs(bf))
//						System.out.println(str);
//					for(Symbole s: getTableDesSymboles(bf))
//						System.out.println(s);
//					for(Liste l: getTableDesListes(bf))
//						System.out.println(l);
//				} catch (FileNotFoundException e) {
//					// TODO Auto-generated catch block
//					e.printStackTrace();
//				}
//			}
//		});
//		contentPane.add(btnComp, BorderLayout.EAST);
//		f.setVisible(true);
//	}
	public static File exec() throws IOException {
		ProcessBuilder pb = new ProcessBuilder("cm.bat");
		File f = new File("Result.txt");
		pb.redirectOutput(f);
		Process p= pb.start();
		return f;
	}
	public static ArrayList<String> Erreurs(BufferedReader in){
		ArrayList<String> Res = new ArrayList<String>();
		String s;
		try {
			s = in.readLine();
			s = in.readLine();
		} catch (IOException e1) {
			e1.printStackTrace();
		}
		try {
			while((s = in.readLine()).charAt(0)!='-')
				Res.add(s);
		} catch (IOException e) {
			System.out.println("Erreur here fogh some ghison");
			e.printStackTrace();
		}
		return Res;
	}

	public static  ObservableList<Symbole> getTableDesSymboles(BufferedReader in){
		ObservableList<Symbole> TS = FXCollections.observableArrayList();
		try {
			String s;
			while(!(s=in.readLine()).contains("|")) {	}
			s = in.readLine();
			while(s.charAt(0)=='*') {
				TS.add(getSymbole(s));
				s = in.readLine();
			}
		} catch (IOException e) {
			System.out.println("Some kind of occult error was caught here for some reason ffs");
			e.printStackTrace();
		}
		return TS;
	}
	public static Symbole getSymbole(String str) {
		String Enc="",Nom="",Code="",Type="",Const="",Taille="";
		int i = 0;
		while(i<str.length()) {
			while(str.charAt(i)!='|') {
				Enc+=str.charAt(i);
				i++;
			}
			Enc = rmvSpaces(Enc);
			switch(Enc) {
			case "*+": Enc = "Public"; break;
			case "*-": Enc = "Private"; break;
			case "**": Enc = "Protected"; break;
			}
			i++;
			/////////////////////////////
			while(str.charAt(i)!='|') {
				Nom+=str.charAt(i);
				i++;
			}
			Nom = rmvSpaces(Nom);
			i++;
			/////////////////////////////
			while(str.charAt(i)!='|') {
				Code+=str.charAt(i);
				i++;
			}
			Code = rmvSpaces(Code);
			i++;
			/////////////////////////////
			while(str.charAt(i)!='|') {
				Type+=str.charAt(i);
				i++;
			}
			Type = rmvSpaces(Type);
			i++;
			/////////////////////////////
			while(str.charAt(i)!='|') {
				Const+=str.charAt(i);
				i++;
			}
			Const = rmvSpaces(Const);
			i++;
			switch(Const) {
			case "0": Const = "Variable"; break;
			case "1": Const = "const-init"; break;
			case "2": Const = "const-non-init"; break;
			}
			/////////////////////////////
			while(i<str.length()) {
				Taille+=str.charAt(i);
				i++;
			}
			Taille = rmvSpaces(Taille);
		}
		return new Symbole(Enc,Nom,Code,Type,Const,Taille);
	}
	public static String rmvSpaces(String s) {
		String str="";
		for(int i =0;i<s.length();i++)
			if(s.charAt(i)!=' ')
				str+=s.charAt(i);
		return str;
	}


	public static ObservableList<Liste> getTableDesListes(BufferedReader in){
		ObservableList<Liste> res = FXCollections.observableArrayList();
		String s;
		try {
			s=in.readLine();
			while(!s.contains("Position")) {
				s = in.readLine();}
			    s = in.readLine();
			while((s!=null)&&(s.charAt(0)=='*')) {
				res.add(getListe(s));
				s=in.readLine();
			}
		} catch (IOException e) {
			e.printStackTrace();
		}
		return res;
	}
	public static Liste getListe(String str){
		String Nom="",Taille="",Position="";
		int i = 0;
		while(i<str.length()) {
			while(str.charAt(i)!='|') {
				Nom+=str.charAt(i);
				i++;
			}
			Nom = rmvSpaces(Nom);
			Nom = Nom.substring(1);
			i++;
			while(str.charAt(i)!='|') {
				Taille+=str.charAt(i);
				i++;
			}
			Taille = rmvSpaces(Taille);
			i++;
			while(i<str.length()) {
				Position+=str.charAt(i);
				i++;
			}
			Position = rmvSpaces(Position);
			i++;
		}
		return new Liste(Nom,Taille,Position);
	}
}
