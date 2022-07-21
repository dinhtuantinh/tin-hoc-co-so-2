#include<stdio.h> 
int main(){ 
	int t; 
	int n,count,temp,p,i; 
	scanf("%d",&t); 
	while(t--){ 
		count = 0; 
		scanf("%d %d",&n,&p); i = 1; 
		while(p*i<=n){ 
			temp = p*i; 
			while(temp%p==0){ 
				temp/=p; 
				count++; 
			} 
			++i; 
		} 
		printf("%d\n",count); 
	} 
	return 0; 
}

