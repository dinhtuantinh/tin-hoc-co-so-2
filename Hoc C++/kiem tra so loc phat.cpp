#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		if(s[s.size()-1]=='6'&&s[s.size()-2]=='8') cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
	return 0;
}

