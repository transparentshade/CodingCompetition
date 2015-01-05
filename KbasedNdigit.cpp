/*

 * KbasedNdigit.cpp
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
 ll dp[30][30];
void proc() {
	int n,k;
	cin>>n>>k;
	memset(dp,0,sizeof(dp));
	for(int i=0;i<k;i++) {
		dp[1][i] = 1;
	}
	dp[1][0]=0;
	ll ans = 0;
	REP(dig,2,n){
		REP(last,0,k-1){
			if(last==0) {
				dp[dig][last] = -dp[dig-1][0];
			}
			REP(i,0,k-1){
				dp[dig][last]+= dp[dig-1][i];
			}

		}
	}
	for(int i=0;i<=k-1;i++){
		ans +=dp[n][i];
		//cout<<dp[n][i]<<" "<<i<<endl;
	}
	cout<<ans<<endl;
}
int main() {
	proc();
	return 0;
}
*/
