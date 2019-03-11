
#include <iostream>
#include <iomanip>

using namespace std;

int main() {

float x;
float y;	
float suma;
float roznica;
float iloczyn;
float iloraz;

cout << fixed << endl;
cout << setprecision(2) << endl;

cout << "Podaj X" << endl;
cin >> x;
cout << "Podaj Y" <<  endl;
cin >> y;

suma = x+y;
roznica = x-y;
iloczyn = x*y;
iloraz = x/y;



cout << "Suma X i Y " << " " << suma << endl;
cout << "Roznica X i Y" << " " << roznica << endl;
cout << "Iloczyn X i Y" << " " << iloczyn << endl;
cout << "Iloraz X i Y" << " " << iloraz << endl;

return 0;

}
