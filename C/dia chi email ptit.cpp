#include<stdio.h> 
#include<string.h> 
#include<ctype.h> 
int main(){ 
	char s[101]; 
	gets(s);
	char *p=strtok(s," "); 
	char *tmp=strtok(NULL," "); 
	while(tmp!=NULL){ 
		printf("%c",tolower(p[0])); 
		p=tmp; 
		tmp=strtok(NULL," "); 
	} 
	for(int i=0;i<strlen(p);i++) printf("%c",tolower(p[i])); 
	printf("@ptit.edu.vn"); 
}

