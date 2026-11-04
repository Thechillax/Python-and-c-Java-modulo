#include <iostream>
using namespace std;


int CheckInput() {
	int Item;
	cin >> Item;
	return Item;
}

void Python(int A, int B) {
	if (A < 0) {
		cout << "\nPython's Modulo\t" << A - (((A / B) - 1 ) * B);
	}
	else
		cout << "\nPython's Modulo\t" << A % B;

}

void cpp(int A, int B) {
	cout << A % B;
}

int main(){
	int valueA, valueB, choice = 0;
	char language;

	do{
		cout << "\nA mod B";
		cout << "\nPlease enter the value of A and B";
		cout << "\nValue of A\t";
		valueA = CheckInput();
		cout << "\nValue of B\t";
		valueB = CheckInput();
		cout << "\nPlesae enter the language you want to see the module result in(Python[P],Java[J], C or C++)\t";
		cin >> language;
		if (language == 'P' || language == 'p') {
			Python(valueA, valueB);
		}
		else
			cpp(valueA, valueB);

		cout << "\nDo you want to terminate the program? 0 for no, 1 for yes";
		cin >> choice;
	} while (choice == 0);


}
