/*

 * MaximumSumSUbmatrix.cpp
 *
 *  Created on: Oct 31, 2014
 *      Author: nb








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
#define reset(dp,val)\
		memset(dp,val,sizeof(dp));
#define INF 2000000000 // 2 billion
// If you need to recall how to use memset:
#define MEMSET_INF 127 // about 2B
#define MEMSET_HALF_INF 63 // about 1B
ll mat[110][110];
int n;
ll dp[110];
ll Kd(ll *dp,int n){
	ll maxcur,maxsofar;
	maxcur = dp[n-1];
	maxsofar = dp[n-1];
	for(int i=n-2;i>=0;i--) {
		maxcur = max(dp[i],dp[i]+maxcur);
		maxsofar = max(maxcur,maxsofar);
	}
	return maxsofar;
}
void proc() {
	cin>>n;
	REP(i,0,n-1) {
		REP(j,0,n-1) {
			cin>>mat[i][j];

		}
	}
    ll	ans =mat[0][0];
	for(int i=0;i<n;i++) {
		for(int l=0;l<n;l++){
			dp[l] = mat[i][l];
		}
		ans = max(ans,Kd(dp,n));
		for(int j=i+1;j<n;j++) {
			for(int k=0;k<n;k++) {
				dp[k] += mat[j][k];
			}
			ans =max(ans,Kd(dp,n));
		}
	}
	cout<<ans<<endl;


}
int main() {
	proc();

}
*/
