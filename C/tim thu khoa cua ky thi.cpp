//Cho danh sách thí sinh g?m các thông tin: Mã thí sinh: là m?t s? nguyên, t? d?ng tang, tính t? 1; Tên thí sinh, ngày sinh, di?m môn 1, di?m môn 2, di?m môn 3. Hãy tìm th? khoa trong danh sách dó. N?u có nhi?u thí sinh có di?m b?ng nhau và d?u cao nh?t thì in ra t?t c? thí sinh dó theo mã tang d?n.
//
//Input:
//
//Dòng d?u ch?a s? thí sinh. M?i thí sinh vi?t trên 3 dòng: Dòng 1: Tên thí sinh, Dòng 2: Ngày sinh, Dòng 3,4,5: 3 di?m thi tuong ?ng. Các di?m thi d?u d?m b?o h?p l? (t? 0 d?n 10).
//
//Output: In ra các th? khoa c?a k? thi, m?i thí sinh 1 dòng, g?m mã, tên, ngày sinh và t?ng di?m. Chú ý: n?u có nhi?u thí sinh b?ng di?m nhau và cao nh?t thì in ra t?t c? thí sinh dó theo th? t? mã thí sinh tang d?n.

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

