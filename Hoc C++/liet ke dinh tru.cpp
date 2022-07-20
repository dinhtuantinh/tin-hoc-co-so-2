#include<bits/stdc++.h>
using namespace std;

int V, E, u, v;
bool chuaxet[1005];
vector<vector<int> > ke;
vector<int> res;
stack<int> stk;

void ReInit(){
	memset(chuaxet, true, sizeof(chuaxet));
}

void DFS(int u){	
	stk.push(u);
	chuaxet[u]=false;
	while(!stk.empty()){
		int s=stk.top(); 
		stk.pop();
		for(int t=0; t<ke[s].size(); t++){
			if(chuaxet[ke[s][t]]){
				chuaxet[ke[s][t]]=false;
				stk.push(s);
				stk.push(ke[s][t]);
				break;
			}
		}
	}
}

bool ok(){
	for(int u=1; u<=V; u++)
		if(chuaxet[u]) return true;
	return false;
}

void Cut_Vertices(){
	ReInit();
	for(int u=1; u<=V; u++){
		chuaxet[u]=false;
		if(u==1) DFS(2);
		else DFS(1);
		if(ok())
			res.push_back(u); 
		ReInit();
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		res.clear();
		ke.clear();
		cin>>V>>E;
		ke.resize(V+5);
		memset(chuaxet, true, sizeof(chuaxet));
		for(int i=1; i<=E; i++){
			cin>>u>>v;
			ke[u].push_back(v);
			ke[v].push_back(u);
		}
		Cut_Vertices();
		for(int i=0; i<res.size(); i++)
			cout<<res[i]<<" ";
		cout<<endl;
	}
	return 0;
}
