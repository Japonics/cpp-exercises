#include <iostream> 

using namespace std;

int main() 
{

int tablica[20];
int m;
int i = 0;
int s = 1;

	for(i; i <= 19 ; i++) 
	{
		
		cout << "Podaj liczbe: ";
		cin >> tablica[i];	
		
	} 
	
	m = tablica[0];
	
	for (s; s<= 19; s++) {
		
		if(m <= tablica[s]) 
		{
			m = tablica[s];
		} 
		
	}
	
	cout << "Najwieksza liczba jest:" << m << endl;
	
	return 0;
}
