#include <stdio.h> 
int min(int a,int b) { 
	int min = a; 
	if(min > b) min = b; 
	return min; 
} 
void printSpiral(int n) { 
	for (int i = 0; i < n; i++) { 
		for (int j = 0; j < n; j++) { 
			int x; 
			x = min(min(i, j), min(n-1-i, n-1-j)); 
			if (i <= j) printf("%d ", (n-2*x)*(n-2*x) - (i-x) - (j-x)); 
			else printf("%d ", (n-2*x-2)*(n-2*x-2) + (i-x) + (j-x)); 
		} 
		printf("\n"); 
	} 
} 
int main() { 
	int t, k, n; scanf("%d", &t); 
	for (k = 1; k <= t; k++) { 
		scanf("%d", &n); 
		printf("Test %d:\n", k); 
		printSpiral(n); 
	} 
	return 0; 
}
