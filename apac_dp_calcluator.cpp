/*

 * apac_dp_calcluator.cpp
 *
 *  Created on: Nov 7, 2014
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
bool prime[1000010];
vector<int> p;
int last = 1000010;
void comp() {
	memset(prime,true,sizeof(prime));
	prime[0]=false;
	for(int i=2;i<last-5;i++){
		if(prime[i]==false)continue;
		p.pb(i);
		for(int j=2*i;j<last-5;j+=i){
			prime[j] = false;
		}
	}
}
vector<int> fact(int n) {
	int i=0;
	vector<int> res;
	while(n>0){
		if(prime[n]){
			res.pb(n);
			break;
		}
		while(n%p[i]==0){
			res.pb(p[i]);
			n = n/p[i];
		}
		i++;
	}
	sort(res.begin(),res.end());
	return res;
}
bool dig[11];
ll dp[1000010];
ll fun(int n) {
	if(n>=0 && n<=9){
		if(dig[n])return 1;
		return 100000000LL;
	}
	if(dp[n]!=-1) return dp[n];
	int cur = n;
	int cnt =0;
	while(cur>0) {
		if(dig[cur%10]==false){

			break;
		}
		cur=cur/10;
		cnt++;
	}
	if(cur==0){
		dp[cur]=cnt;
		return cnt;
	}
	cur = n;
	vector<int> f = fact(n);

	for(int i=0;i<f.size();i++) {
		cout<<"fact; "<<n<<" "<<f[i]<<endl;
		dp[n] = min(dp[n],fun(f[i])+fun(n/f[i])+1);
	}
	return dp[n];
}
void proc() {
	memset(dp,-1,sizeof(dp));
	int t;
	for(int i=0;i<=9;i++) {
		cin>>t;
		if(t==0) dig[i] = false;
		else dig[i] = true;
	}
	int n;
	cin>>n;
	cout<<fun(n)<<endl;
}
int main() {
	comp();
	freopen("in.txt","r",stdin);
	//freopen("out.txt","w",stdout);
	int t;
	cin>>t;
	while(t--) proc();
}
*/
