#include<stdio.h> 
#include<string.h> 
#include<math.h> 
#include<ctype.h> 
#include<stdlib.h> 
int main(){ 
	int t; scanf("%d",&t); 
	for(int x=1;x<=t;x++){ 
		int m,n,i,j,a[50][50]; 
		scanf("%d %d",&m,&n); 
		for(i=0;i<m;i++){ 
			for(j=0;j<n;j++){ 
				scanf("%d",&a[i][j]); 
			} 
		} 
		int res=-1e9,hang,cot,tong; 
		for(i=0;i<m;i++){ 
			tong=0; 
			for(j=0;j<n;j++){ 
				tong=tong+a[i][j]; 
			} 
			if(tong>res){ 
				res=tong; 
				hang=i; 
			} 
		} 
		res=-1e9; 
		for(j=0;j<n;j++){ 
			tong=0; 
			for(i=0;i<m;i++){ 
				if(i!=hang){ 
					tong=tong+a[i][j]; 
				} 
			} 
			if(tong>res){ 
				res=tong; 
				cot=j; 
			} 
		} 
		printf("Test %d:\n",x); 
		for(i=0;i<m;i++){ 
			if(i!=hang){ 
			for(j=0;j<n;j++){ 
				if(j!=cot){ 
					printf("%d ",a[i][j]); 
				} 
			} 
		} 
		printf("\n"); 
		} 
	} 
	return 0; 
}
