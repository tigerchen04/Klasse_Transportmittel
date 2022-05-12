#pragma once
#include <iostream>
#include <string>

using namespace std;

//Basisklasse:
class Transportmittel {
private:
	double hoehe;
	double breite;


public:
	//allgemeiner Konstruktor:
	Transportmittel(double hoehe, double breite);

	//Methode:
	void bewegen(string richtung)
	{
		int x;

		//x = "Wert des 
	}

	//Gettermethoden:
	double gethoehe();
	double getbreite();
};

//abgeleitete Klasse Landtransportmittel:
class Landtransportmittel : Transportmittel
{
	private:
		int radzahl;

	public:
		//Methoden:
		void fahren(double km);
		void schieben(double km);

		//Gettermethode:
		int getradzahl();
	
		//allgemeiner Konstruktor:
		Landtransportmittel(double hoehe, double breite, int radzahl) : Transportmittel(hoehe, breite);

};

//abgeleitete Klasse Wassertransportmittel:
class Wassertransportmittel : Transportmittel
{
private:
	double bruttoregistertonnen;

public:
	//Methoden:
	void anlegen(string Anlegehafen);
	void ablegen(string Ablegehafen);

	//Gettermethode:
	double getbruttoregistertonnen();

	//allgemeiner Kontstruktor:
	Wassertransportmittel(double hoehe, double breite, double bruttoregistertonnen) : Transportmittel(hoehe, breite);
}
