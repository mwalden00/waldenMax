#include <stdio.h>
#include <stdlib.h>

#problem 1
int multiples35() {
	int sum = 0;
	int x;
	for (x = 3; x < 1000; x++) {
		if (x % 3 == 0 || x % 5 == 0) {
			sum += x;
		}
	}
	return sum;
}

#problem 5
int smallestMult() {
	int n;
	for (n = 20; 0 == 0; n++) {
		int y;
		for (y = 1; y < 21; y++) {
			if (n % y != 0) break;
			if (y == 20) return n;
		}
	}
}

#problem 6
int SumSquareDiff() {
	int n;
	int sumSq = 0;
	int sqSum = 0;
	for (n = 1; n < 101; n++) {
		sumSq += n;
		sqSum += n * n;
	}
	sumSq = sumSq * sumSq;
	return sumSq - sqSum;
}

int main() {

	printf("%i\n%i\n%i\n", multiples35(), smallestMult(), SumSquareDiff());

	return 0;
}
