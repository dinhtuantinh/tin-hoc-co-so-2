#include<bits/stdc++.h>
//Dinh Tuan Tinh
using namespace std;

int main(){
	string s;
	int n;
	stack<int > stk;
	while(cin>>s){
		if(s=="push"){
			cin>>n;
			stk.push(n);
		}
		else if(s=="show"){
			vector<int > a;
			if(stk.size()==0){
				cout<<"empty\n";
				continue;
			}
			while(stk.size()>0){
				a.push_back(stk.top());
				stk.pop();
			}
			reverse(a.begin(),a.end());
			for(int i=0;i<a.size();i++){
				cout<<a[i]<<" ";
				stk.push(a[i]);
			}
			cout<<endl;
		}
		else if(s=="pop") stk.pop();

	}
	return 0;
}

