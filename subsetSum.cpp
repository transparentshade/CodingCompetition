/*

 * subsetSum.cpp
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

bool row1[100010];
bool row2[10010];
int n;
int a[1010];
long long int ans;
void proc() {
	ghei(n);
	int sum=0;
	REP(i,0,n-1){
		ghei(a[i]);
		sum += a[i];
	}
	reset(row1,false);
	reset(row2,false);
	ans = 0;
	sort(a,a+n);
	row1[a[0]] = true;
	ans = a[0];
	row1[0] = true;
	for(int i=1;i<n;i++) {
		for(int j=0;j<=sum;j++){
			if(row1[j]){
				row2[j] = true;
			}
			else if(j>=a[i] && row1[j-a[i]]) {
				row2[j] = true;
				ans+=j;
			}
			else row2[j] = false;
		}
		memcpy(row1,row2,sizeof(row1));
	}
	cout<<ans<<endl;
}
int main() {
	int t;
	cin>>t;
	while(t--) proc();
}
*/
