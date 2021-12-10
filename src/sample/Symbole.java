package sample;

import javafx.beans.property.SimpleStringProperty;

public class Symbole {
//	String Enc,Nom,Code,Type,Const,Taille;
	private final SimpleStringProperty Enc,Nom,Code,Type,Const,Taille;
	public Symbole(String Enc, String Nom, String Code, String Type, String Const, String Taille) {
		this.Enc = new SimpleStringProperty(Enc) ;
		this.Nom = new SimpleStringProperty(Nom) ;
		this.Code = new SimpleStringProperty(Code) ;
		this.Type = new SimpleStringProperty(Type) ;
		this.Const = new SimpleStringProperty(Const) ;
		this.Taille = new SimpleStringProperty(Taille) ;
	}

	@Override
	public String toString() {
		return "Symbole [Enc=" + Enc + ", Nom=" + Nom + ", Code=" + Code + ", Type=" + Type + ", Const=" + Const
				+ ", Taille=" + Taille + "]";
	}

	public String getEnc() {
		return Enc.get();
	}

	public SimpleStringProperty encProperty() {
		return Enc;
	}

	public void setEnc(String enc) {
		this.Enc.set(enc);
	}

	public String getNom() {
		return Nom.get();
	}

	public SimpleStringProperty nomProperty() {
		return Nom;
	}

	public void setNom(String nom) {
		this.Nom.set(nom);
	}

	public String getCode() {
		return Code.get();
	}

	public SimpleStringProperty codeProperty() {
		return Code;
	}

	public void setCode(String code) {
		this.Code.set(code);
	}

	public String getType() {
		return Type.get();
	}

	public SimpleStringProperty typeProperty() {
		return Type;
	}

	public void setType(String type) {
		this.Type.set(type);
	}

	public String getConst() {
		return Const.get();
	}

	public SimpleStringProperty constProperty() {
		return Const;
	}

	public void setConst(String aConst) {
		this.Const.set(aConst);
	}

	public String getTaille() {
		return Taille.get();
	}

	public SimpleStringProperty tailleProperty() {
		return Taille;
	}

	public void setTaille(String taille) {
		this.Taille.set(taille);
	}
}
