#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;
const long long mod=1e9+7;
long long n,k;
long long Mul(long long a, long long b){
	if(b==0) return 0ll;
	long long tmp = Mul(a,b/2);
	if(b&1) return (tmp*2+a)%mod;
	return tmp*2%mod;
}
long long Pow(long long n, long long k){
	if(k==0) return 1;
	if(k==1) return n%mod;
	long long tmp=Pow(n,k/2);
	long long a=Mul(tmp,tmp);
	if(k&1) return a*n%mod; 
	return a%mod;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		cout<<Pow(n,k)<<endl;
	}
	return 0;
}

