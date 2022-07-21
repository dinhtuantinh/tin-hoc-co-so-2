//H�y s?p x?p danh s�ch c�c m?t h�ng theo l?i nhu?n gi?m d?n. M?i m?t h�ng g?m c�c th�ng tin: M� m?t h�ng (l� m?t s? nguy�n, t? d?ng tang, t�nh t? 1); T�n m?t h�ng, nh�m h�ng: l� c�c x�u k� t?; Gi� mua, gi� b�n: l� c�c s? th?c (kh�ng qu� 9 ch? s?)
//
//Input:
//
//D�ng d?u ch?a s? m?t h�ng. M?i m?t h�ng vi?t tr�n 4 d�ng: D�ng 1: T�n m?t h�ng. D�ng 2: Nh�m h�ng. D�ng 3: Gi� mua. D�ng 4: Gi� b�n
//
//Output: Ghi ra danh s�ch m?t h�ng d� s?p x?p theo l?i nhu?n gi?m d?n (l?i nhu?n t�nh b?ng gi� b�n tr? di gi� mua). M?i m?t h�ng vi?t tr�n m?t d�ng g?m: m�, t�n, nh�m h�ng v� l?i nhu?n. C�c th�ng tin c�ch nhau d�ng 1 kho?ng tr?ng. L?i nhu?n vi?t v?i 2 ch?  s? sau d?u ph?y. 


#include <stdio.h> 
#include <math.h> 
#include <string.h> 
struct DSMatHang{ 
int stt; 
char ten[10005]; 
char nhomhang[10005]; 
float gianhap, giaban, lai; 
}; 
int main (){ 
	int n; scanf ("%d\n", &n); 
	struct DSMatHang a[n]; 
	for (int i=0; i<n; i++){ 
		scanf ("\n"); 
		a[i].stt=i+1; 
		gets (a[i].ten);
		gets (a[i].nhomhang); 
		scanf ("%f%f", &a[i].gianhap, &a[i].giaban); 
		a[i].lai=a[i].giaban-a[i].gianhap; 
	} 
	for (int i=0; i<n; i++){ 
		for (int j=0; j<n; j++){ 
			struct DSMatHang C=a[i]; 
			if (a[j].lai<a[i].lai){ 
				a[i]=a[j]; 
				a[j]=C; 
			} 
		} 
	} 
	for (int i=0; i<n; i++){ 
		printf ("%d %s %s %.2f\n", a[i].stt, a[i].ten, a[i].nhomhang, a[i].lai); 
	} 
	return 0; 
}

