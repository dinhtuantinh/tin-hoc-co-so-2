#include<stdio.h> 
#include<math.h> 
void swap(int *a,int *b){ 
	int x=*a; *a=*b; *b=x; 
} 
int main(){ 
	int i,n,a[1000]; scanf("%d",&n); 
	for (i=0;i<n;i++){ scanf("%d",&a[i]); } 
	int min,j,c,buoc=0; 
	for (i=0;i<n-1;i++){ 
		int check=0; 
		min=i; 
		for (j=0;j<n-i-1;j++){ 
			if (a[j]>a[j+1]){ 
				swap (&a[j],&a[j+1]); 
				check++; 
			} 
		} 
		if (check!=0) buoc++; 
		if (check!=0){ 
			printf("Buoc %d: ",buoc); 
			for (c=0;c<n;c++){ 
				printf("%d ",a[c]); 
			} 
			printf("\n"); 
		} 
	} 
	return 0; 
}

