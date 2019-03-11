#include <iostream>

using namespace std;

int main() {
	
	int cuk,ucz,dla,reszta;
	
	cout << "Ilosc uczniow w klasie";
	cin >> ucz;
	
	cout << "Ilosc cukierkow kupionych przez mame";
	cin >> cuk;
	
	dla = cuk/(ucz -1);
	
	reszta = cuk - ((ucz - 1)*dla);
	
	cout << "Kazdy dostanie po " << dla << " cukierkow." << endl;
	
	cout << "Dla Jasia pozostanie " << reszta << " cukierkow." << endl;
	
	return 0;
}
