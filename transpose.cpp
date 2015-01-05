/*
#include <cstdio>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <string>
#include <algorithm>
#include <sstream>

#include <map>
#include <cmath>
#include <set>
#include <cstring>
#include <bitset>
using namespace std;
#define x first
#define y second
#define VI vector<int>
#define pii pair<int,int>
#define inf 1000000000
#define L(s) ((int)(s).size())
#define pb push_back
#define mp make_pair
#define all(s) (s).begin(), (s).end()
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef set<int> si;
typedef map<string, int> msi;
// To simplify repetitions/loops, Note: define your loop style and stick with it!
#define REP(i, a, b) \
for (int i = int(a); i <= int(b); i++) // a to b, and variable i is local!
#define REPREV(i, a, b) \
for (int i = int(a); i >= int(b); i--) // a to b, and variable i is local!
#define TRvi(c, it) \
for (vi::iterator it = (c).begin(); it != (c).end(); it++)
#define TRvii(c, it) \
for (vii::iterator it = (c).begin(); it != (c).end(); it++)
#define TRmsi(c, it) \
for (msi::iterator it = (c).begin(); it != (c).end(); it++)
#define ghei(i)\
scanf("%d",&i)
#define ghel(i)\
scanf("%lld",&i)
#define ghes(i)\
scanf("%s",&i)
#define INF 2000000000 // 2 billion
// If you need to recall how to use memset:
#define MEMSET_INF 127 // about 2B
#define MEMSET_HALF_INF 63 // about 1B
int mat[100][100];
int n,m;
void print(int m,int n) {
	REP(i,0,m-1) {
		REP(j,0,n-1){
			cout<<mat[i][j]<<" ";
		}
		cout<<endl;
	}
}
void transpose(int m,int n) {
	int nd = min(n,m);
	int mx = max(n,m);
	for(int i=0;i<nd;i++) {
		for(int j=i+1;j<mx;j++) {
			cout<<"Swaping "<<mat[i][j]<<" with : "<<mat[j][i]<<endl;
			swap(mat[i][j],mat[j][i]);
		}
	}
	if(m>n) {
		REP(i,nd,m-1) {
			REP(j,0,n){
				mat[j][i] = mat[i][j];
			}
		}
	}
	if(m<n) {
		REP(i,0,m) {
			REP(j,nd,n-1){
				cout<<mat[i][j]<<endl;
				mat[j][i] = mat[i][j];
			}
		}
	}

	print(nd,nd);
}
int main() {
	freopen("in.txt","r",stdin);
	int m,n;
	cin>>n>>m;
	swap(m,n);
	REP(j,0,m-1){
		REP(i,0,n-1) {
			cin>>mat[i][j];
		}
	}
	print(m,n);
	transpose(m,n);
}
*/
