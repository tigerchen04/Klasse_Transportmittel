#include "Transportmittel.h"
#include <cstring>

Transportmittel::Transportmittel(double h, double b)
{
	hoehe = h;
	breite = b;
}

void Transportmittel::bewegen(string richtung)
{
	string x = richtung;

	cout << "Das Transportmittel bewegt sich in Richtung " << x << "." << endl;

	/*if (x == "Norden")
	{
		cout << "Das Transportmittel bewegt sich in Richtung " << x << endl;
	}
	else if (x == "Osten")
	{
		cout << "Das Transportmittel bewegt sich in Richtung " << x << endl;
	}
	else if (x == "Süden")
	{
		cout << "Das Transportmittel bewegt sich in Richtung " << x << endl;
	}
	else if (x == "Westen")
	{
		cout << "Das Transportmittel bewegt sich in Richtung " << x << endl;
	}*/
}

double Transportmittel::gethoehe()
{
	return hoehe;
}

double Transportmittel::getbreite()
{
	return breite;
}


void Landtransportmittel::fahren(double km)
{
	if (km <= 0)
	{
		system("cls");
		cout << "Keine zulässige Eingabe\n";
		cout << "km > 0\n";
		return;
	}
	else
	{
		return;
	}
}

void Landtransportmittel::schieben(double km)
{
	if (km <= 0)
	{
		system("cls");
		cout << "Keine zulässige Eingabe\n";
		cout << "km > 0\n";
		return;
	}
	else
	{
		return;
	}
}

int Landtransportmittel::getradzahl()
{
	return radzahl;
}

Landtransportmittel::Landtransportmittel(double h, double b, int r) : Transportmittel(h, b)
{
	radzahl = r;
}


void Wassertransportmittel::anlegen(string Anlegehafen)
{
	cout << "Anlegen in " << Anlegehafen << endl;
}

void Wassertransportmittel::ablegen(string Ablegehafen)
{
	cout << "Ablegen von " << Ablegehafen << endl;
}

double Wassertransportmittel::getbruttoregistertonnen()
{
	return bruttoregistertonnen;
}

Wassertransportmittel::Wassertransportmittel(double h, double b, double brt) : Transportmittel(h, b)
{
	bruttoregistertonnen = brt;
}


void Fahrrad::freihaendig_fahren(string name)
{
	cout << name << " fährt freihändig." << endl;
}

void Fahrrad::schieben(double m)
{
	cout << "Das Fahrrad wurde " << m << "m weit geschoben." << endl;
}

int Fahrrad::getanzahl_gaenge()
{
	return anzahl_gaenge;
}

Fahrrad::Fahrrad(double h, double b, int r, int anz_g) : Landtransportmittel(h, b, r)
{
	anzahl_gaenge = anz_g;
}


void Rikscha::ziehen(int anzahl_personen)
{
	if (anzahl_personen < 0)
	{
		throw invalid_argument("Keine zulässige Eingabe! \n Hinweis: Anzahl der Personen > 0\n");
	}

	cout << "In der Rikscha wurden " << anzahl_personen << " Personen gezogen." << endl;
}
void Rikscha::schieben(double m)
{
	cout << "Die Rikscha wurde " << m << "m weit geschoben." << endl;
}

string Rikscha::getfarbe()
{
	return farbe;
}

Rikscha::Rikscha(double h, double b, int r, string f) : Landtransportmittel(h, b, r)
{
	farbe = f;
}


void Auto::tanken(int liter)
{
	if (liter <= 0)
	{
		throw invalid_argument("Keine zulässige Eingabe! \n Hinweis: Liter > O\n");
	}
}

void Auto::fahren(double km)
{
	cout << "Das Auto ist " << km << "km weit gefahren." << endl;
}

double Auto::getspritverbrauch()
{
	return spritverbrauch;
}

Auto::Auto(double h, double b, int r, double s_v) : Landtransportmittel (h, b, r)
{
	spritverbrauch = s_v;
}
