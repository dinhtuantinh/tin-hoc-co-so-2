#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n, k;
		cin>>n>>k;
		int a[k+1];
		int b[101]={0};
		for(int i=1;i<=k;i++){
			cin>>a[i];
		}
		for(int i=1;i<=k;i++){
			b[a[i]]=1;
		}
		int i=k;
		while(a[i]==n-k+i&&i>0){
			i--;
		}
		if(i>0){
			a[i]+=1;
			for(int j=i+1;j<=k;j++){
				a[j]= a[j-1]+1;
			}
			for(int j=1;j<=k;j++){
				b[a[j]]=0;
			}
			int c=0;
			for(int j=1;j<40;j++){
				if(b[j]==1){
					c++;
				}
			}
			cout<<c;
		}
		else{
			cout<<k;
		}
		cout<<endl;
	}
	return 0;
}

