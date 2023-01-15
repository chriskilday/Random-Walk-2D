/* Random_Walk.c

Chris Kilday
*/

#include <stdio.h>
#include <math.h>

#define p_r 0.5			// probability of stepping right
#define p_l (1 - p_r)		// probability of stepping left

double probability(int n, int N);
double probability_range(int nl, int nu, int N);

void* part_a();
void* part_b();
void* part_c();

long factorial(int);

int main(int argc, char* argv[]) {
	part_a();
	part_b();
	part_c();

	return 0;
}

void* part_a() {
	double x = probability_range(6,8,10);

	printf("Part a):\n\t%f%%\n\n", x*100);

	return 0;
}

void* part_b() {
	double x = probability_range(180,240,300);

	printf("Part b):\n\t%f%%\n\n", x*100);

	return 0;
}

void* part_c() {
	printf("Part c):\n");

	return 0;
}

// n!
long factorial(int n) {
	int prod = 1;

	int i;
	for (i = 2; i <= n; i++) {
		prod *= i;
	}

	return prod;
}
	
double probability(int n, int N) {
	return (factorial(N) * pow(p_r, n) * pow(p_l, N-n)) / (factorial(n) * factorial(N-n));
}

double probability_range(int nl, int nu, int N) {
	double sum = 0;

	int i;
	for (i = nl; i < nu; i++) {
		sum += probability(i, N);
	}

	return sum;
}
