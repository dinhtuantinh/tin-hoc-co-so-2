#include<bits/stdc++.h>
using namespace std;

int n, k;
int a[100], s;
int dem=0;
bool visited[100];
bool ok=false;

void Try(int sum, int dem){
	if(ok) return;
	if(dem==k){
		ok=true;
		return;
	}
	for(int i=0; i<n; i++){
		if(!visited[i]){
			visited[i]=true;
			if(sum==s){
				Try(0, dem+1);
				return;
			}
			if(sum>s) return;
			else Try(sum+s, dem);
		}
		visited[i]=false;
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		s=0;
		ok=false;
		for(int i=0; i<n; i++){
			cin>>a[i];
			visited[i]=false;
			s+=a[i];
		}
		if(s%k!=0) cout<<0;
		else{
			s/=k;
			Try(0, 0);
			if(ok) cout<<1;
			else cout<<0;
		}
		cout<<endl;
	}
	return 0;
}

