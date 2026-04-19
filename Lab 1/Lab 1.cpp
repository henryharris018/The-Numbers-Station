#include <iostream>
#include <cmath>

using namespace std; 

int main() 
{ 
	int num1; 
	char ch; 

	cout << "Calculator Prime\n"; 

	while (ch == 'y') 
{ 
	cout << "Input problem: "; 
	cin >> num1; 
	cout << num1; 
	cout << "Would you like to continue?: "; 
	cin >> ch; 
} 
	cout << "\nLoop"; 
}