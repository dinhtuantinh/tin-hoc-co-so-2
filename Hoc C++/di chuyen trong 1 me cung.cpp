#include<bits/stdc++.h>
using namespace std;
int n;
int a[11][11];
vector< string > res;

void Try(int i, int j, string s){
	if(a[1][1] == 0 )
		return;
	if(a[n][n] == 0)
		return;
	if(a[i][j] == 1 && i == n && j == n){
		res.push_back(s);
		return;
	}
	if(i < n && a[i+1][j] == 1)
		Try(i+1, j, s + 'D');
	if(j < n && a[i][j+1] == 1)
		Try(i, j+1, s+'R'); 
}

int main(){
	int t;
	cin>>t;
	while(t--){
		
	
		cin >> n;
		for(int i=1;i<=n;i++)
			for(int j=1;j<=n;j++)
				cin >> a[i][j];
		
		Try(1, 1, "");
		if(res.size() == 0)
			cout << -1;
		sort(res.begin(), res.end());
		for(int i = 0 ; i < res.size() ; i ++ )
			cout << res[i] <<' ';
		cout<<endl;
	}
	return 0;
}
