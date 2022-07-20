#include<stdio.h> 
#include<math.h> 
int nguyento(int n){ 
	if(n<2){ 
		return 0; 
	} 
	else{ 
		for(int i=2;i<=sqrt(n);i++){ 
			if(n%i==0){ 
				return 0; 
			} 
		} 
		return 1; 
	} 
} 
int main(){ 
	int n; 
	int sum=0; 
	scanf("%d",&n); 
	int a[n][n]; 
	for(int i=0;i<n;i++){ 
		for(int j=0;j<n;j++){ 
			scanf("%d",&a[i][j]); 
		} 
	} 
	for(int i=0;i<n;i++){ 
		for(int j=0;j<=i;j++){ 
			if(nguyento(a[j][i])==1){ 
				sum+=a[j][i]; 
			} 
		} 
	} 
	printf("%d",sum); 
}
