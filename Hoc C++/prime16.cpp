#include<bits/stdc++.h>
using namespace std;
long long Snt(long long n){
	if(n<2) return 0;
	for(long long i=2;i*i<=n;i++){
		if(n%i==0) return 0;
		
	}
	return 1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		int dem=0; 
		for(long long i=2;i<=sqrt(n);i++){
			if(Snt(i)==1){
				dem++;
			}
		}
		cout<<dem<<endl;
	}
	return 0;
}


