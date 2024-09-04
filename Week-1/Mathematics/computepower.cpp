// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;

// Naive iterative solution to calculate pow(x, n)
long power(int x, unsigned n)
{
	// Initialize result to 1
	long long pow = 1;

	// Multiply x for n times
	for (int i = 0; i < n; i++) {
		pow = pow * x;
	}

	return pow;
}

// Driver code
int main(void)
{

	int x = 2;
	unsigned n = 3;

	// Function call
	int result = power(x, n);
	cout << result << endl;

	return 0;
}

/* Function to calculate x raised to the power y in
* O(logn)*/
// int power(int x, unsigned int y)
// {
// 	int temp;
// 	if (y == 0)
// 		return 1;
// 	temp = power(x, y / 2);
// 	if (y % 2 == 0)
// 		return temp * temp;
// 	else
// 		return x * temp * temp;
// }

// int main()
// {
//     int x = 2;
//     unsigned int y = 3;
 
//     // Function call
//     cout << power(x, y);
//     return 0;
// }
