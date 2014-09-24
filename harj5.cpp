/*		Valtteri Louhelainen

Kirjoita ohjelma, joka pyyt‰‰ k‰ytt‰j‰lt‰ kaksi kokonaislukua.

Ohjelma tulostaa tekstin BINGO, mik‰li luvut ovat samoja.

Muussa tapauksessa ohjelma tulostaa tekstin BONGO.*/

#include <iostream>
using namespace std;
void main()
{
	int luku1;
	int luku2;
	cout << "Anna luku 1: ";
	cin >> luku1;
	cout << "Anna luku 2: ";
	cin >> luku2;
	if (luku1 == luku2)
		cout << "BINGO\n";
	else
		cout << "BONGO\n";
}