#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;

int main(){int t;cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n],b[n-1];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n-1;i++){
			cin>>b[i];
		}
		for(int i=0;i<n-1;i++){
			
				if(a[i]!=b[i]){
					cout<<i+1; 
					break;
				} 
			
		}
		cout<<endl;
	}
	return 0;
}

