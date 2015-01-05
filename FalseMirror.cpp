/*

 * FalseMirror.cpp
 *
 *  Created on: Nov 10, 2014
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
for (int i = int(a); i <= int(b); i++) // a to b, and variable i is local!#define REPREV(i, a, b) \
for (int i = int(a); i >= int(b); i--) // a to b, and variable i is local!#define TRvi(c, it) \
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
#define INF 2000000000 // 2 billion// If you need to recall how to use memset:
#define MEMSET_INF 127 // about 2B#define MEMSET_HALF_INF 63 // about 1Bll dp[1 << 21];
ll a[100];
ll n;
ll printBina(int mask) {
	REP(i,1,n)
	{
		if (mask & (1 << i))
			cout << 1 << " ";
		else
			cout << 0 << " ";
	}
	return 0;
}
ll getC(int mask) {
	ll cost = 0;
	REP(i,1,n)
	{
		if (mask & (1 << i)) {
			cost += a[n-i+1];
		}
	}
	//cout<<cost<<endl;
	//cout << "GETCOST: " << printBina(mask) << " " << cost << endl;
	return cost;
}

ll dfs(int mask) {
	if (getC(mask) == 0)
		return 0;
	if (dp[mask] != -1)
		return dp[mask];
	ll cost = (1 << 25);

	REP(i,1,n-1)
	{
		if (mask & (1 << i)) {
			//select i,i+1,i+2 and do dfs
			int pm = 0;
			if (i == n - 1) {

				REP(j,2,n)
				{
					if (j == i || j == i + 1) {
						continue;
					}
					pm = pm | (mask & (1 << j));
				}
			} else {
				REP(j,1,n)
				{
					if (j == i || j == i + 1 || j==i+2) {
						continue;
					}
					pm = pm | (mask & (1 << j));
				}
			}

			//cout << printBina(pm) << " for mask: " << printBina(mask) << endl;
			ll ans = dfs(pm) + getC(pm);
			cost = min(cost, ans);
		}
	}
	dp[mask] = cost;
	//cout << printBina(mask) << " " << cost << endl;
	return cost;
}
void proc() {
	cin >> n;
	memset(dp, -1, sizeof(dp));
	dp[0] = 0;
	memset(a, 0, sizeof(a));
	REP(i,1,n)
		cin >> a[i];
	REP(i,1,n) {
		dp[1<<i]=0;
	}
	cout << dfs((1 << (n + 1)) - 1) << endl;
}

int main() {
	freopen("in.txt", "r", stdin);
	proc();
}
*/
