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

	}

	//Gettermethoden:
	double gethoehe();
	double getbreite();

};

