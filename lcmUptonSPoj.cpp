/*

 * lcmUptonSPoj.cpp
 *
 *  Created on: Oct 23, 2014
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
bool prime[100010];
int last = 100010;
vector<int> pv;
void comp() {
	reset(prime,true);
	for(int i=2;i<last;i++) {
		if(prime[i]==false) continue;
		pv.pb(i);
		for(int j=i+i;j<last;j+=i){
			prime[j] = false;
		}
	}
}
long long int n;
void proc() {
	ghei(n);
	int prev = n;
	int i=0;
	long long int ans = (n*(n+1))/2;
	ll temp =1;
	while(n>0 ){
		int cnt =0;
		temp = 1;
		if(prime[n]){
			break;
		}
		while(n>0 && n%pv[i]==0){
			cnt++;
			n =n/pv[i];
			temp = temp*pv[i];
		}
		ll minus =( (temp*pv[i]-1) / (pv[i]-1) )-1;
		cout<<minus<<endl;
		ans = ans - minus;
		i++;
	}
	cout<<(ans)*prev<<endl;
}
int main() {
	int t;
	ghei(t);
	comp();
	while(t--) proc();
}






*/
