#include<stdio.h> 
int main(){ 
	int n; scanf("%d",&n); 
	int a[101],b[101]; 
	for(int i=0;i<n;i++){ 
		scanf("%d%d",&a[i],&b[i]); 
	} 
	long min1=1000001,min2=1000001; 
	for(int i=0;i<n;i++){ 
		if(min1>a[i])min1=a[i]; 
	} 
	for(int i=0;i<n;i++){ 
		if(min2>b[i])min2=b[i]; 
	} 
	printf("%ld",min1*min2); 
}
