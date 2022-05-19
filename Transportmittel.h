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
};

//abgeleitete Klasse Fahrrad:
class Fahrrad : Landtransportmittel
{
private:
	int anzahl_gaenge;

public:
	//Methoden:
	void freihaendig_fahren(string name);
	void schieben(double km);

	//Gettermethode:
	int getanzahl_gaenge();

	//allgemeiner Kontstruktor:
	Fahrrad(double hoehe, double breite, int radzahl, int anzahl_gaenge) : Landtransportmittel(hoehe, breite, radzahl);
};

//abgleitete Klasse Rikscha
class Rikscha : Landtransportmittel
{
private:
	string farbe;

public:
	//Methoden:
	void ziehen(int anzahl_personen);
	void schieben(double km);

	//Gettermethode:
	string getfarbe();

	//allgemeiner Konstruktor:
	Rikscha(double hoehe, double breite, int radzahl, string farbe) : Landtransportmittel(hoehe, breite, radzahl);
};

//abgeleitete Klasse Auto:
class Auto : Landtransportmittel
{
private:
	double spritverbrauch;

public:
	//Methoden:
	void tanken(int liter);
	void fahren(double km);

	//Gettermethode:
	double getspritverbrauch();

	//allgemeiner Konstruktor:
	Auto(double hoehe, double breite, int radzahl, double spritverbrauch) : Landtransportmittel(hoehe, breite, radzahl);
};
