#include <iostream>
using namespace std;
int main()
{

	int n, suma;
	cout << "Podaj n: ";
	cin >> n;
	suma = 0;

	for (int i = 2; i <= n; i += 2)
	{
		suma += i;
	}

	cout << "Suma parzystych elementow ciagu " << n << "> jest rowna 0 " << suma;


	return 0;
}


