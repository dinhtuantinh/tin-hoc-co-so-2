//Hãy s?p x?p danh sách thí sinh theo t?ng di?m gi?m d?n.
//
//M?i thí sinh g?m các thông tin:
//
//Mã thí sinh: là m?t s? nguyên, t? d?ng tang. Tính t? 1.
//Tên thí sinh, ngày sinh
//Ði?m môn 1, di?m môn 2, di?m môn 3
//Input:
//
//Dòng d?u ch?a s? thí sinh. M?i thí sinh vi?t trên 3 dòng:
//
//Dòng 1: Tên thí sinh
//Dòng 2: Ngày sinh
//Dòng 3,4,5: 3 di?m thi tuong ?ng. Các di?m thi d?u d?m b?o h?p l? (t? 0 d?n 10).
//Output:
//
//In ra danh sách thí sinh dã s?p x?p theo t?ng di?m gi?m d?n. N?u 2 thí sinh b?ng di?m nhau thì thí sinh nào xu?t hi?n tru?c s? vi?t tru?c.  M?i thí sinh vi?t trên m?t dòng g?m: mã, tên, ngày sinh và t?ng di?m. Các thông tin cách nhau dúng 1 kho?ng tr?ng.  Ði?m t?ng du?c làm tròn d?n 1 s? sau d?u ph?y.



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

