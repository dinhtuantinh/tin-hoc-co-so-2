#include<stdio.h> 
#include<math.h> 
#include<string.h> 
#include<stdlib.h> 
struct sinhvien{ 
	char ten[50]; 
	int can, co; 
}; 
typedef struct sinhvien poke; 
void nhap(poke *x) { 
	gets(x->ten); 
	scanf("%d%d", &x->can, &x->co); 
} 
int tienhoa(poke *x) { 
	int dem=0; 
	while((x->co) >= (x->can)){ 
		dem++; 
		x->co-=x->can; 
		x->co+=2; 
	} 
	return dem; 
} 
int main() { 
	int n; scanf("%d", &n); 
	poke a[100]; 
	int sum=0, max=0, index, k; 
	for (int i=1; i<=n; i++) { 
		getchar(); 
		nhap(&a[i]); 
		k=tienhoa(&a[i]); 
		sum+=k; 
		if (max < k) { 
			max=k; 
			index=i; 
		} 
	} 
	printf("%d\n%s", sum, a[index].ten); 
}

