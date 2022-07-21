#include<stdio.h> 
int so2(int n){ 
	int dem=0; 
	while(n > 1){ 
		if(n % 2 == 0){ 
			n/=2; 
			dem++; 
		}
		else{ 
			break; 
		} 
	} 
	return dem; 
} 
int dem(int n){ 
	int i; int dem1=0; 
	for(i=1;i<=n;i++){ 
		dem1=dem1+so2(i); 
	} 
	return dem1; 
} 
int main(){ 
	int n,k; scanf("%d %d",&n,&k); 
	int x = dem(n); 
	if(x >= k){ 
		printf("Yes"); 
	}
	else{ 
		printf("No"); 
	} 
}

