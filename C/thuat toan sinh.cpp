#include<bits/stdc++.h>
using namespace std;
 
int n, a[100];
void Try(int i){
    for(int j=0;j<=1;j++){
        a[i] = j;
        if(i == n){
            bool ok = true;
            for(int l=1,k=n; l<k;l++, k--)
                if(a[l] != a[k])
                    ok = false;
            if(ok){
                for(int l=1;l<=n;l++)
                    cout << a[l] << "   ";
                cout << endl;
            }
 
        }
        else Try(i+1);
    }
}
 
int main(){
 
    cin >> n;
    Try(1);
 
    return 0;
}
