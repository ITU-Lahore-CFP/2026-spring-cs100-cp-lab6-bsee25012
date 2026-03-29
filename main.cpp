#include "functions.h"


int main() {
   
	cout << "Press '1' to find the sum of squares of first n natural numbers"<< endl;
	cout << "Press '2' to find the factorial of n" << endl;
	int choice;
	cin >> choice;



	if (choice == 1) {

		int n;
		cout << "Enter the value of n: ";
		cin >> n;
		cout << "The sum of squares of first " << n << " natural numbers is: " << sumOfSquares(n) << endl;
	}


	if (choice == 2) {

		int n;
		cout << "Enter the value of n: ";
		cin >> n;
		cout << "The factorial of " << n << " is: " << findFactorial(n) << endl;

	}

	else if (choice == 0 || choice > 2)	 {
		cout << "Invalid choice. Please enter either '1' or '2'." << endl;
	}

}