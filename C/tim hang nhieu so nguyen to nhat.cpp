#include<stdio.h> 
#include<math.h> 
int dk(int a) { 
if (a==1) return 0; 
for (int i=2; i<=sqrt(a); i++) { 
if (a%i==0) return 0; 
} 
return 1; 
} 
main() { 
	int n; scanf("%d", &n); 
	int a[n][n], b[n]; 
	int i,j; 
	for (i=0; i<n; i++) { 
		for (j=0; j<n; j++) scanf("%d", &a[i][j]); 
	} 
	int max=0, index; 
	for (i=0; i<n; i++) { 
		b[i]=0; 
		for (j=0; j<n; j++) { 
			if (dk(a[i][j])) b[i]++; 
		} 
		if (max<b[i]) { 
			max=b[i]; 
			index=i; 
		} 
	} 
	printf("%d\n", index+1); 
	for (int j=0; j<n; j++) { 
		if (dk(a[index][j])) printf("%d ", a[index][j]); 
	} 
}
