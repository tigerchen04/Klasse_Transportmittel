#pragma once
#include <iostream>
#include <string>

using namespace std;

//Basisklasse:
class Transportmittel
{
private:
	double hoehe;
	double breite;


public:
	//allgemeiner Konstruktor:
	Transportmittel(double h, double b)
	{
		double hoehe = h;
		double breite = b;
	}

	//Methode:
	void bewegen(string richtung);

	//Gettermethoden:
	double gethoehe()
	{
		return hoehe;
	};
	double getbreite()
	{
		return breite;
	};
};

//abgeleitete Klasse Landtransportmittel:
class Landtransportmittel : public Transportmittel
{
private:
	int radzahl;

public:
	//Methoden:
	void fahren(double km);
	void schieben(double km);

	//Gettermethode:
	int getradzahl()
	{
		return radzahl;
	}

	//allgemeiner Konstruktor:
	Landtransportmittel(double h, double b, int r) : Transportmittel(h, b)
	{
		int radzahl = r;
	}
};

//abgeleitete Klasse Wassertransportmittel:
class Wassertransportmittel : public Transportmittel
{
private:
	double bruttoregistertonnen;

public:
	//Methoden:
	void anlegen(string Anlegehafen);
	void ablegen(string Ablegehafen);

	//Gettermethode:
	double getbruttoregistertonnen()
	{
		return bruttoregistertonnen;
	}

	//allgemeiner Kontstruktor:
	Wassertransportmittel(double h, double b, double brt) : Transportmittel(h, b)
	{
		double bruttoregistertonnen = brt;
	}
};

//abgeleitete Klasse Fahrrad:
class Fahrrad : public Landtransportmittel
{
private:
	int anzahl_gaenge;

public:
	//Methoden:
	void freihaendig_fahren(string name);
	void schieben(double km);

	//Gettermethode:
	int getanzahl_gaenge()
	{
		return anzahl_gaenge;
	}

	//allgemeiner Kontstruktor:
	Fahrrad(double h, double b, int r, int anz_g) : Landtransportmittel(h, b, r)
	{
		int anzahl_gaenge = anz_g;
	}
};

//abgleitete Klasse Rikscha
class Rikscha : public Landtransportmittel
{
private:
	string farbe;

public:
	//Methoden:
	void ziehen(int anzahl_personen);
	void schieben(double km);

	//Gettermethode:
	string getfarbe()
	{
		return farbe;
	}

	//allgemeiner Konstruktor:
	Rikscha(double h, double b, int r, string f) : Landtransportmittel(h, b, r)
	{
		string farbe = f;
	}
};

//abgeleitete Klasse Auto:
class Auto : public Landtransportmittel
{
private:
	double spritverbrauch;

public:
	//Methoden:
	void tanken(int liter);
	void fahren(double km);

	//Gettermethode:
	double getspritverbrauch()
	{
		return spritverbrauch;
	}

	//allgemeiner Konstruktor:
	Auto(double h, double b, int r, double s_v) : Landtransportmittel(h, b, r)
	{
		double spritverbrauch = s_v;
	}
};
