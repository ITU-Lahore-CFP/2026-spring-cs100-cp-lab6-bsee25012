#include "functions.h"


int sumOfSquares(int n) 
{
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += i * i;
	}
	return sum;
}

int findFactorial(int n)
{

	int factorial = 1;
	if (n <= 1) {
		return factorial;
	}
	
	factorial = n * findFactorial(n - 1);
	return factorial;
}




