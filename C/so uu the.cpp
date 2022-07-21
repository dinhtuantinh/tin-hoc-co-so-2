#include<stdio.h> 
#include<string.h> 
int kiemTra(char c[]){ 
	int str=strlen(c); 
	for(int i=0;i<str;i++){ 
		if(c[i]>='A'&&c[i]<='z')return 0; 
	} 
	return 1; 
} 
int soChuSo(char c[]){ 
	int str=strlen(c); 
	int even=0,odd=0; 
	for(int i=0;i<str;i++){ 
		if((c[i]-'0')%2==0)even++; 
		else odd++; 
	} 
	if((even>odd&&even%2==0)||(odd>even&&odd%2!=0))return 1; 
	return 0; 
} 
int main(){ 
	int t; scanf("%d",&t); 
	while(t>0){ 
		char c[1005]; scanf("%s",c); 
		if(kiemTra(c)==0)printf("INVALID\n"); 
		else if(soChuSo(c))printf("YES\n"); 
		else printf("NO\n"); 
		t--; 
	} 
	return 0; 
}

