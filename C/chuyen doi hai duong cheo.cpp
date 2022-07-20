#include<stdio.h> 
int main() { 
	int n; scanf("%d", &n); 
	int i,j; 
	int a[n][n]; 
	for(i=0;i<n;i++) { 
		for (j=0;j<n;j++) { 
			scanf("%d", &a[i][j]); 
		} 
	} 
	j=n-1; 
	for(i=0;i<n;i++) { 
		int Temp=a[i][i]; 
		a[i][i]=a[i][j]; 
		a[i][j]=Temp; 
		j--;
	} 
	for(i=0;i<n;i++) { 
		for(j=0;j<n;j++) { 
			printf("%d ", a[i][j]); 
		} 
		printf("\n"); 
	} 
}
