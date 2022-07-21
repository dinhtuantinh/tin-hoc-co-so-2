#include <stdio.h> 
#include <string.h> 
void chuanhoa(char c[]) { 
	if (c[0]>='a' && c[0]<='z') c[0]=c[0]-32; 
	for (int i=1;i<strlen(c);i++) if (c[i]>='A' && c[i]<='Z') c[i]=c[i]+32; 
} 
int main () { 
	int t; scanf("%d",&t); 
	getchar(); 
	while (t--) { 
		char s[1000]; char a[20][50]; 
		int n=0; gets(s); 
		char *token=strtok(s," "); 
		while (token!=NULL) { 
			strcpy(a[n],token); ++n; 
			token=strtok(NULL," "); 
		} 
		for (int i=0;i<n;i++) { 
			chuanhoa(a[i]); 
			printf("%s",a[i]); 
			if (i!=n-1) printf(" "); 
		} 
		printf("\n"); 
	} 
}

