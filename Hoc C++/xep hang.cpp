#include<stdio.h> 
#include<math.h> 
void swap(int *a, int *b) { 
	int tmp; 
	tmp = *a; 
	*a = *b; 
	*b = tmp; 
} 
int main() { 
	int n; scanf("%d", &n); 
	int T[n], D[n]; 
	for(int i = 0; i<n; i++) scanf("%d %d", &T[i], &D[i]); 
	int time = 0; 
	for(int i = 0; i<n-1 ;i++) 
		for(int j = i+1; j<n; j++ ) 
			if(T[j] < T[i]) { 
				swap(&D[i], &D[j]); 
				swap(&T[i], &T[j]); 
			} 
	for(int i = 0; i<n; i++) time = fmax(time, T[i]) + D[i]; 
	printf("%d", time); 
}
