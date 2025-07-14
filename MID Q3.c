// C++ program to find the sum of the
// series 1 + 1/3 + 1/5 + ...

#include <stdio.h>

#include <math.h>


// Function to find the sum of the
// given series
void printSumSeries(int N)
{
	// Initialise the sum to 0
	float sum = 0;

	for (int i = 1; i <= N; i=i+2) {
		sum += 1.0 / (pow(i,i));
	}

	// Print the final sum
	printf("%f",sum);
}

// Driver Code
int main()
{
	int N = 5;

	printSumSeries(N);
	return 0;
}
