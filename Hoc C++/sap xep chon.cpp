//#include<iostream>
//#include<algorithm>
//using namespace std;
//int a[100000];
//int main() {
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> a[i];
//	}
//	int min;
//	for (int i = 0; i < n - 1; i++) {
//		cout<<"Buoc "<<i+1<<": ";
//		min = i;
//		for (int j = i + 1; j < n; j++) {
//			if (a[j] < a[min]) {
//				min=j;
//			}
//		}
//		if(min != i){
//			swap(a[min], a[i]);
//		}
//		for (int i = 0; i < n; i++) {
//			cout << a[i] << " ";
//		}
//		cout<<endl;
//	}
//	return 0;
//}
#include<stdio.h>
int a[100000];
int main(){
	int n;scanf("%d",&n);
	for(int i;i<n;i++){
		scanf("%d",&a[i]);
	}
	int min;
	for(int i=0;i<n-1;i++){
		printf("Buoc %d: ",i+1);
		min=i;
		for(int j=i+1;j<n;j++){
			if(a[j]<a[min]) min=j;
		}
		if(min!=i){
			int tmp=a[i];
			a[i]=a[min];
			a[min]=tmp;
		}
		for(int i=0;i<n;i++){
			printf("%d ",a[i]);
		}
		printf("\n");
	}
}
