#include<bits/stdc++.h>
#define MAX 20
//Dinh Tuan Tinh
using namespace std;
int n;
int Bool[MAX]={0};
int A[MAX];
void xuat(){
	for(int i=1;i<=n;i++){
		cout<<A[i]<<" ";
	}
	cout<<endl;
}
void Try(int k){
	for(int i=1;i<=n;i++){
		if(!Bool[i]){
			A[k]=i;
			Bool[i]=1;
			if(k==n){
				xuat();
			}	
			else{
				Try(k+1);
			}
			Bool[i]=0;
		}
	}
}
int main(){
	cout<<"Nhap n = ";
	cin>>n;
	cout<<"\nCac hoan vi cua "<<n<<" phan tu la:\n";
	Try(1);
	return 0;
}

