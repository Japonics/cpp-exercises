#include <iostream>
#include <fstream>

using namespace std;

string nazwisko,imie,agree;
int nr_tel;


void wpisuj() {
	
	fstream plik;
	
	plik.open("dane.txt" , ios_base::out | ios::app);
	
	do {
	
	cout << "Podaj imie: "; cin >> imie;
	cout << "Podaj nazwisko: "; cin >> nazwisko;
	cout << "Podaj telefon: "; cin >> nr_tel;
	cout << "Zakoncz wprowadzanie danych (tak/nie): "; cin >> agree;
	
	
	
	plik << imie << endl;
	plik << nazwisko << endl;
	plik << nr_tel << endl;
	
	
	
	} while (agree == "nie");
	
	plik.close();
	plik.clear();
	
	return 0;
}  

void odczytuj() {
	
	fstream plik;
	
	plik.open("dane.txt" , ios_base::in);
	
	if (plik.good() == false) {
		cout << "Plik nie istenieje!" << endl;
		exit(0);
	}
	
	plik.close();
	plik.clear();
	
	return 0;
	
}

int main() {
	
	
	
	return 0;
}
