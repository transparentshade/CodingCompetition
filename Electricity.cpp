/*

 * Electricity.cpp
 *
 *  Created on: Sep 30, 2014
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
#define INF 2000000000 // 2 billion
// If you need to recall how to use memset:
#define MEMSET_INF 127 // about 2B
#define MEMSET_HALF_INF 63 // about 1B
ll in[400];
ll out[400];
ll g[400];
int n,m;
void proc() {
	ghei(n);ghei(m);
	int u,v,w;
	memset(in,0,sizeof(in));
	REP(i,1,m){
		ghei(u);ghei(v);ghei(w);
		in[v]+=w;
		out[u]+=w;
	}
	REP(i,1,n){
		g[i] = max(out[i]-in[i],0LL);
	}
	int T;
	ghei(T);
	REP(i,1,T){
		ghei(u);
		ghei(v);
		printf("%lld\n",in[v]+g[v]);
	}
}
int main() {
	proc();
}
*/
