//H�y s?p x?p danh s�ch th� sinh theo t?ng di?m gi?m d?n.
//
//M?i th� sinh g?m c�c th�ng tin:
//
//M� th� sinh: l� m?t s? nguy�n, t? d?ng tang. T�nh t? 1.
//T�n th� sinh, ng�y sinh
//�i?m m�n 1, di?m m�n 2, di?m m�n 3
//Input:
//
//D�ng d?u ch?a s? th� sinh. M?i th� sinh vi?t tr�n 3 d�ng:
//
//D�ng 1: T�n th� sinh
//D�ng 2: Ng�y sinh
//D�ng 3,4,5: 3 di?m thi tuong ?ng. C�c di?m thi d?u d?m b?o h?p l? (t? 0 d?n 10).
//Output:
//
//In ra danh s�ch th� sinh d� s?p x?p theo t?ng di?m gi?m d?n. N?u 2 th� sinh b?ng di?m nhau th� th� sinh n�o xu?t hi?n tru?c s? vi?t tru?c.  M?i th� sinh vi?t tr�n m?t d�ng g?m: m�, t�n, ng�y sinh v� t?ng di?m. C�c th�ng tin c�ch nhau d�ng 1 kho?ng tr?ng.  �i?m t?ng du?c l�m tr�n d?n 1 s? sau d?u ph?y.



#include <stdio.h> 
#include <math.h> 
#include <string.h> 
struct DSSinhVien { 
int MSV; 
char ten[10005]; 
char ngaysinh[105]; 
float diem1, diem2, diem3, tong; 
}; 
int main (){ 
	int n; scanf ("%d\n", &n); 
	struct DSSinhVien a[n]; 
	for (int i=0; i<n; i++){ 
		scanf ("\n"); 
		a[i].MSV=i+1; 
		gets (a[i].ten); 
		gets (a[i].ngaysinh); 
		scanf ("%f%f%f", &a[i].diem1, &a[i].diem2, &a[i].diem3); 
		a[i].tong=a[i].diem1+a[i].diem2+a[i].diem3; 
	} 
	for (int i=0; i<n; i++){ 
		for (int j=i+1; j<n; j++){ 
			struct DSSinhVien C=a[i]; 
			if (a[i].tong<a[j].tong){ 
				a[i]=a[j]; 
				a[j]=C; 
			} 
		} 
	} 
	for (int i=0; i<n; i++){ 
		printf ("%d %s %s %.1f\n", a[i].MSV, a[i].ten, a[i].ngaysinh, a[i].tong); 
	} 
}

