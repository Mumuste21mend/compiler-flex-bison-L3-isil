package sample;

import javafx.beans.property.SimpleStringProperty;

public class Liste {
	private final SimpleStringProperty  Nom,Taille,Position;

	public Liste(String nom, String taille, String position) {
		Nom = new SimpleStringProperty(nom);
		Taille =new SimpleStringProperty( taille);
		Position =new SimpleStringProperty(position) ;
	}

	@Override
	public String toString() {
		return "Liste [Nom=" + Nom + ", Taille=" + Taille + ", Position=" + Position + "]";
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

	public String getTaille() {
		return Taille.get();
	}

	public SimpleStringProperty tailleProperty() {
		return Taille;
	}

	public void setTaille(String taille) {
		this.Taille.set(taille);
	}

	public String getPosition() {
		return Position.get();
	}

	public SimpleStringProperty positionProperty() {
		return Position;
	}

	public void setPosition(String position) {
		this.Position.set(position);
	}
}
