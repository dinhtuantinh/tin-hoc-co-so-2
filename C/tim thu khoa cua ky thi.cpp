//Cho danh s�ch th� sinh g?m c�c th�ng tin: M� th� sinh: l� m?t s? nguy�n, t? d?ng tang, t�nh t? 1; T�n th� sinh, ng�y sinh, di?m m�n 1, di?m m�n 2, di?m m�n 3. H�y t�m th? khoa trong danh s�ch d�. N?u c� nhi?u th� sinh c� di?m b?ng nhau v� d?u cao nh?t th� in ra t?t c? th� sinh d� theo m� tang d?n.
//
//Input:
//
//D�ng d?u ch?a s? th� sinh. M?i th� sinh vi?t tr�n 3 d�ng: D�ng 1: T�n th� sinh, D�ng 2: Ng�y sinh, D�ng 3,4,5: 3 di?m thi tuong ?ng. C�c di?m thi d?u d?m b?o h?p l? (t? 0 d?n 10).
//
//Output: In ra c�c th? khoa c?a k? thi, m?i th� sinh 1 d�ng, g?m m�, t�n, ng�y sinh v� t?ng di?m. Ch� �: n?u c� nhi?u th� sinh b?ng di?m nhau v� cao nh?t th� in ra t?t c? th� sinh d� theo th? t? m� th� sinh tang d?n.

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
	float k=0; 
	for (int i=0; i<n; i++){ 
		scanf ("\n"); a[i].MSV=i+1; 
		gets (a[i].ten); 
		gets (a[i].ngaysinh); 
		scanf ("%f%f%f", &a[i].diem1, &a[i].diem2, &a[i].diem3); 
		a[i].tong=a[i].diem1+a[i].diem2+a[i].diem3; 
		if (a[i].tong>k) k=a[i].tong; 
	} 
	for (int i=0; i<n; i++){ 
		if (a[i].tong==k) printf ("%d %s %s %.1f\n", a[i].MSV, a[i].ten, a[i].ngaysinh, a[i].tong); 
	} 
	return 0; 
}

