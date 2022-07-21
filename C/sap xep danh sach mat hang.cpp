//Hãy s?p x?p danh sách các m?t hàng theo l?i nhu?n gi?m d?n. M?i m?t hàng g?m các thông tin: Mã m?t hàng (là m?t s? nguyên, t? d?ng tang, tính t? 1); Tên m?t hàng, nhóm hàng: là các xâu ký t?; Giá mua, giá bán: là các s? th?c (không quá 9 ch? s?)
//
//Input:
//
//Dòng d?u ch?a s? m?t hàng. M?i m?t hàng vi?t trên 4 dòng: Dòng 1: Tên m?t hàng. Dòng 2: Nhóm hàng. Dòng 3: Giá mua. Dòng 4: Giá bán
//
//Output: Ghi ra danh sách m?t hàng dã s?p x?p theo l?i nhu?n gi?m d?n (l?i nhu?n tính b?ng giá bán tr? di giá mua). M?i m?t hàng vi?t trên m?t dòng g?m: mã, tên, nhóm hàng và l?i nhu?n. Các thông tin cách nhau dúng 1 kho?ng tr?ng. L?i nhu?n vi?t v?i 2 ch?  s? sau d?u ph?y. 


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

