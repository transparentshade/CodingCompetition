/*

 * BABTWR.cpp
 *
 *  Created on: Nov 21, 2014
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
struct Cube{
	int l,b,h;
	int ind;
};
vector<Cube> s;
int n;
void gen(int ind,int x,int y,int z,vector<Cube> &s){
	Cube c,d,e;
	c.l=max(x,y);
	c.b =min(x,y);
	c.h = z;
	c.ind = ind;

	d.b = min(x,z);
	d.h = y;
	d.l = max(x,z);;
	d.ind = ind;


	e.h = x;
	e.l= max(y,z);
	e.b = min(y,z);
	e.ind = ind;

	s.pb(c);s.pb(d);s.pb(e);
}
int fun(const Cube &a,const Cube &b) {
	return (a.l * a.b) < (b.l *b.b);
}
int dp[100];
bool vis[100];
bool proc() {
	s.clear();
	ghei(n);
	if(n==0) return false;
	int a,b,c;
	REP(i,0,n-1) {
		ghei(a);ghei(b);ghei(c);
		gen(i,a,b,c,s);
	}

	sort(s.begin(),s.end(),fun);
//	for(int i=0;i<s.size();i++) cout<<s[i].l<<" "<<s[i].b<<" "<<s[i].h<<endl;
	dp[0] = s[0].h;
	int l1,l2,b1,b2;
	int ans = s[0].h;
	REP(i,1,s.size()-1) {
		l2 = s[i].l;
		b2 = s[i].b;
		dp[i]=s[i].h;
		REPREV(j,i-1,0){
			l1 = s[j].l;
			b1 = s[j].b;
			if(l2>l1 && b2>b1)dp[i] = max(dp[i],dp[j]+s[i].h);
		}
		ans = max(dp[i],ans);
	}
	cout<<ans<<endl;
	return true;
}

int main() {
	while(proc());
}
*/
