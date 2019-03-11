#include <iostream> 
#include <cmath>

using namespace std;

int main() 
{
	float tablica[5];
	int i = 0;
	int m;
	float sr = 0;
	int position;
	
	for(i; i <= 4 ; i++) 
	{
		cout << "Podaj liczbe: ";
		cin >> tablica[i];		
	} 
	
	for(i = 0; i <= 4 ; i++) 
	{	
		sr += tablica[i];
		cout << "Srednia dodawanie: " << sr << endl;		
	}
	
	sr = sr/5;
	
	cout << "Srednia wynosi: " << sr << endl; 
	
	m = abs(sr - tablica[0]);
	
	for(i = 1; i <= 4 ; i++) 
	{	
			
		if (m >= (abs(sr - tablica[i])))
		{
			position = i;
			m = abs(sr - tablica[i]);	
		} 
					
	}
	
	cout << "Liczba najblizej sredniej: " << tablica[position] << endl;
	
	return 0;
}
