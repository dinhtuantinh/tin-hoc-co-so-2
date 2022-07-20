//
//#include<bits/stdc++.h>
////Dinh Tuan Tinh
//using namespace std;
//
//int main(){
//	int t;
//	cin>>t;
//	for(int i=1;i<=t;i++){
//		long long n,m;
//		cin>>n>>m;
//		long long a[n][m], b[m][n];
//		for(long long i=0;i<n;i++){
//			for(long long j=0;j<m;j++){
//				cin>>a[i][j];
//			}
//		}
//		for(long long i=0;i<m;i++){
//			for(long long j=0;j<n;j++){
//				b[i][j]=a[j][i];
//			}
//		}
//		long long x=n,y=m;
//		if(n>m){
//			n=y;
//			m=x;
//		}
//		long long c[n][n];
//		for(long long i=0;i<n;i++){
//			for(long long j=0;j<n;j++){
//				c[i][j]=0;
//				for(long long k=0;k<m;k++){
//					c[i][j]=c[i][j]+a[i][k]*b[k][j];
//				}
//			}
//		}
//		cout<<"Test "<<t<<":\n";
//		for(long long i=0;i<n;i++){
//			for(long long j=0;j<n;j++){
//				cout<<c[i][j]<<"	";
//			}
//			cout<<endl;
//		}
//		cout<<endl;
//	}
//	return 0;
//}
//

#include<stdio.h> 
#include<math.h> 
main() { 
	int t; scanf("%d", &t); 
	for (int test=1; test<=t; test++) { 
		int n, m; 
		scanf("%d%d", &n, &m); 
		int a[n][m], b[n][n]; 
		int i, j, k; 
		for (j=0; j<n; j++) { 
			for (k=0; k<m; k++) scanf("%d", &a[j][k]); 
		} 
		for (i=0; i<n; i++) { 
			for (j=0; j<n; j++) { 
				b[i][j]=0; 
				for (k=0; k<m; k++) b[i][j]+=a[i][k]*a[j][k]; 
				} 
			} 
			printf("Test %d:\n", test); 
			for (i=0; i<n; i++) { 
				for (j=0; j<n; j++) { 
					printf("%d ", b[i][j]); 
				} 
			printf("\n"); 
		} 
	} 
}
