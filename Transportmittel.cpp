#include "Transportmittel.h"
#include <cstring>


void Transportmittel::bewegen(string richtung)
{
	string x = richtung;
	cin >> x;
	if (x == "Norden")
	{
		cout << "T_1 bewegt sich in Richtung " << x << endl;
	}
	else if (x == "Osten")
	{
		cout << "T_1 bewegt sich in Richtung " << x << endl;
	}
	else if (x == "Süden")
	{
		cout << "T_1 bewegt sich in Richtung " << x << endl;
	}
	else if (x == "Westen")
	{
		cout << "T_1 bewegt sich in Rcihtung " << x << endl;
	}
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


void Wassertransportmittel::anlegen(string Anlegehafen)
{
	cin >> Anlegehafen;
}

void Wassertransportmittel::ablegen(string Ablegehafen)
{
	cin >> Ablegehafen;
}


void Fahrrad::freihaendig_fahren(string name)
{
	cin >> name;
}

void Fahrrad::schieben(double km)
{
	cin >> km;
}


void Rikscha::ziehen(int anzahl_personen)
{
	if (anzahl_personen < 0)
	{
		system("cls");
		cout << "Keine zulässige Eingabe\n";
		cout << "anzahl_personen >= 0\n";
		return;
	}
	else
	{
		return;
	}
}
void Rikscha::schieben(double km)
{
	cin >> km;
}


void Auto::tanken(int liter)
{
	if (liter <= 0)
	{
		system("cls");
		cout << "Keine zulässige Eingabe\n";
		cout << "liter > 0\n";
		return;
	}
	else
	{
		return;
	}
}
