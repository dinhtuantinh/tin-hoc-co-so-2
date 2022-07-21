#include <stdio.h> 
#include<string.h> 
int main(){ 
	char s[200]; 
	fflush(stdin); 
	fgets(s, 200, stdin); 
	int i,j,f,x,y; 
	for(i=0;i<strlen(s)-1;i++){ 
		if(s[i] >=65 && s[i]<=90){
			s[i]=s[i]+32;
		}; 
	}; 
	int d,e,h; 
	for(i=0;i<strlen(s)-1;i++){ 
		y=1; 
		if(s[i]==32){
			goto cuong;
		}; 
		if(s[i]!=32 && i==0){
			goto cuog;
		}; 
		if(s[i]!=32 && s[i-1]!=32){
			goto cuong;
		}; 
		cuog: for(j=i;j<strlen(s)-1;j++){ 
			if(j==strlen(s)-2){
				d=j;
				break;
			}; 
			if(s[j]==32){
				d=j-1;
				break;
			}; 
		}; 
		for(j=0;j<i;j++){ 
			if(s[j+d-i+1]!=32){
				goto toi1;
			}; 
			if(s[j]==32){
				goto toi1;
			}; 
			if(j==0 ){
				goto toi;
				}; 
			if(s[j-1]!=32){
				goto toi1;
			}; 
			toi: e=0; for(f=i;f<=d;f++){ 
				if(s[f]==s[f-i+j]){
					e=e+1;
				}; 
			}; 
			if(e==d-i+1){
				goto cuong;
			}; 
			toi1:continue; 
		}; 
		for(f=d+1;f<strlen(s)-1;f++){ 
			h=0; 
			for(j=i;j<=d;j++){ 
				if(s[j]==s[j-i+f]){
					h=h+1;
				}; 
			}; 
			if(h==d-i+1){
				y=y+1;
			}; 
		}; 
		for(j=i;j<=d;j++){ 
			printf("%c",s[j]); 
		}; 
		printf(" %d\n",y); 
		cuong:continue; 
	}; 
}
