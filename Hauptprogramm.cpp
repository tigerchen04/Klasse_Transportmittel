#include <iostream>
#include <string>
#include "Transportmittel.h"

using namespace std;

int main()
{
	//Basisklasse testen:
	Transportmittel T_1 = Transportmittel( 1.8, 2.1 );
	cout << "Hoehe des Transportmittels: " << T_1.gethoehe() << "m" << endl;
	cout << "Breite des Transportmittels:" << T_1.getbreite() << "m" << endl;

	//Transportmittel T_1 = T_1.bewegen("Norden");

	//abgeleitete Klassen testen:
	Landtransportmittel L_1 = Landtransportmittel( 1.2, 0.5, 2 );
	L_1.bewegen("Osten");
	L_1.fahren(12);
	L_1.schieben(4);

	cout << "Hoehe von L_1: " << L_1.gethoehe() << "m" << endl;
	cout << "Breite von L_1: " << L_1.getbreite() << "m" << endl;
	cout << "Radzahl von L_1: " << L_1.getradzahl() << endl;


	Wassertransportmittel W_1 = Wassertransportmittel( 3.4, 2.7, 1.04 );
	W_1.bewegen("Norden");
	W_1.anlegen("Hamburg");
	W_1.ablegen("Palma de Mallorca");

	cout << "Hoehe von W_1: " << W_1.gethoehe() << "m" << endl;
	cout << "Breite von W_1: " << W_1.getbreite() << "m" << endl;
	cout << "Bruttoregistertonnen von W_1: " << W_1.getbruttoregistertonnen() << endl;


	Fahrrad F_1 = Fahrrad( 1.2, 0.6, 2, 27 );
	F_1.bewegen("Westen");
	F_1.freihaendig_fahren("cool sein");

	cout << "Hoehe von F_1: " << F_1.gethoehe() << "m" << endl;
	cout << "Breite von F_1: " << F_1.getbreite() << "m" << endl;
	cout << "Anzahl der Gänge von F_1: " << F_1.getanzahl_gaenge() << endl;


	Rikscha R_1 = Rikscha( 2.5, 1.2, 2, "blau" );
	R_1.bewegen("Osten");
	R_1.ziehen(2);

	cout << "Hoehe von R_1: " << R_1.gethoehe() << "m" << endl;
	cout << "Breite von R_1: " << R_1.getbreite() << "m" << endl;
	cout << "Farbe von R_1: " << R_1.getfarbe() << endl;


	Auto A_1 = Auto( 1.7, 2.0, 4, 6 / 100.f );
	A_1.bewegen("Süden");
	A_1.tanken(35);

	cout << "Hoehe von A_1: " << A_1.gethoehe() << "m" << endl;
	cout << "Breite von A_1: " << A_1.getbreite() << "m" << endl;
	cout << "Spritverbrauch A_1: " << A_1.getspritverbrauch() << endl;


};
