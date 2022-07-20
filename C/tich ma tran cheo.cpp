#include<stdio.h> 
main() { 
	int t; scanf("%d", &t); 
	for (int test=1; test<=t; test++) { 
		int n; 
		scanf("%d", &n); 
		int a[n][n], b[n][n]; 
		int i, j, k; 
		for (i=0; i<n; i++) { 
			int dem=1; 
			for (j=0; j<n; j++) { 
				a[i][j]=dem; 
				if (dem==i+1) dem=0; 
				if (dem<i+1 && dem!=0) dem++; 
			} 
		} 
		for (i=0; i<n; i++) { 
			for (j=0; j<n; j++) { 
				b[i][j]=0; 
				for (k=0; k<n; k++) b[i][j]+=a[i][k]*a[j][k]; 
			} 
		} 
		printf("Test %d:\n", test); 
		for (i=0; i<n; i++) { 
			for (j=0; j<n; j++) { 
				printf("%d ", b[i][j]); 
			} 
			printf("\n"); 
		} 
	} 
}
