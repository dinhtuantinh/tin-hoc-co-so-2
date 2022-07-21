#include<stdio.h> 
#include<stdlib.h> 
#include<string.h> 
#include<ctype.h> 
void chuanHoa(char c[]){ 
	c[0]= toupper(c[0]); 
	for(int i=1;i<strlen(c);i++){ 
		c[i]= tolower(c[i]); 
	} 
} 
void chuanHoaHo(char c[]){ 
	for(int i=0;i<strlen(c);i++){ 
		c[i]=toupper(c[i]); 
	} 
} 
int main(){ 
	int t; scanf("%d",&t); 
	getchar(); 
	while(t--){ 
		char c[81],a[40][40]; 
		gets(c); int n=0; 
		char *token= strtok(c," "); 
		while(token!=NULL){ 
			strcpy(a[n],token); 
			token=strtok(NULL," "); 
			n++; 
		} 
		chuanHoaHo(a[0]); 
		for(int i=1;i<n;i++){ 
			chuanHoa(a[i]); 
			printf("%s",a[i]); 
			if(i<n-1) printf(" "); 
		} 
		printf(", %s",a[0]); 
		printf("\n"); 
	} 
}

