//#include<bits/stdc++.h>
////Dinh Tuan Tinh
//using namespace std;
//int main(){
//		long long n;
//		cin>>n;
//		long long a[n],i,j,m,c,b[n],x=0,y=0;
//		for(i=1;i<=n;i++){
//			cin>>m;
//			if(i%2==0){
//				a[x]=m;
//				x++;
//			}
//			else{
//				b[y]=m;
//				y++;
//			}
//		}
//		for( i = 1; i <=x - 1; i++){
//	        for(j = i + 1; j <=x; j++){
//	            if(a[i] < a[j]){
//	                long long tg = a[i];
//	                a[i] = a[j];
//	                a[j] = tg;        
//	            }
//	        }
//   		}
//		sort(b,b+y);
//		for(int i=1;i<=n;i++){
//			if(i%2==0){
//				cout<<b[y]<<" ";y--;
//			}
//			else{
//				cout<<a[x]<<" ";x--;
//			}
//		}
//	return 0;
//}


#include<stdio.h> 
void check(int arr[], int n) { 
	for (int i = 0; i < n; i++) { 
		int m = i; 
		for (int j = i + 1; j < n; j++) { 
			if (arr[j] < arr[m])m = j; 
		} 
		int tmp = arr[m]; 
		arr[m] = arr[i]; 
		arr[i] = tmp; 
	} 
} 
int main() { 
	int a; scanf("%d", &a); 
	int chan[a], le[a]; 
	int c = 0, l = 0; 
	for (int i = 1; i <= a; i++) { 
		int x; scanf("%d", &x); 
		if (x % 2 == 0) { 
			chan[c++] = x; 
		} 
		else le[l++] = x;
	} 
	check(chan, c); 
	check(le, l); 
	for (int i = 0; i < c; i++) { 
		printf("%d ", chan[i]); 
	} 
	for (int i = 0; i < l; i++) { 
		printf("%d ", le[i]); 
	} 
	return 0; 
}
