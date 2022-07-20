#include <stdio.h> 
int d = 1,i,j; 
void topright(int a[][100],int c1,int h1,int c2,int h2) { 
	for(i=c1;i<=c2;i++) a[h1][i] = d++; 
	for(i=h1+1;i<=h2;i++) a[i][c2] = d++; 
	if(c2-c1>0 && h2-h1>0) { 
		h1++;c2--; 
		botleft(a,c1,h1,c2,h2); 
	} 
} 
void botleft(int a[][100],int c1,int h1,int c2,int h2) { 
	for(i=c2;i>=c1;i--) a[h2][i] = d++; 
	for(i=h2-1;i>=h1;i--) a[i][c1] = d++; 
	if(c2-c1>0 && h2-h1>0) { 
		h2--;c1++; 
		topright(a,c1,h1,c2,h2); 
	} 
} 
void result(int a[][100],int n) { 
	for(i=0;i<n;i++) { 
		for(j=0;j<n;j++) { printf("%d ",a[i][j]); } 
		printf("\n"); 
	} 
} 	
int main() { 
	int n; scanf("%d",&n); 
	int a[100][100]; 
	topright(a,0,0,n-1,n-1); 
	result(a,n); 
}
