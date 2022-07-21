#include<stdio.h> 
#include<math.h> 
int nt(int n){ 
	for(int i=2;i<=sqrt(n);i++){ 
		if(n%i==0) return 0; 
	} 
	return n>1; 
} 
int chuSoNt(int n){ 
	int tong=0; 
	while(n!=0){ 
		int a=n%10; 
		n/=10; 
		if(!nt(a)){ 
			return 0; 
			break; 
		} 
		tong+=a; 
	} 
	return nt(tong); 
} 
int main(){ 
	int t; 
	scanf("%d",&t); 
	while(t--){ 
		int m,n; 
		scanf("%d %d",&m,&n); 
		int dem=0; 
		for(int i=m;i<=n;i++){ 
			if(chuSoNt(i)&&nt(i)) 
			dem++; 
		} 
		printf("%d\n",dem); 
	} 
}

