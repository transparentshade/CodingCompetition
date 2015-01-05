/*

 * IITBA.cpp
 *
 *  Created on: Oct 9, 2014
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

int n;
int vis[6][110];
void proc() {
	memset(vis,0,sizeof(vis));
	scanf("%d\n",&n);
	char ch;
	int t;
	int cnt[6];
	memset(cnt,0,sizeof(cnt));
	REP(i,1,n){
		//scanf("%c %d\n",&ch,&t);
		cin>>ch>>t;
		//cout<<ch<<" "<<t;
		vis[ch-'A'][t]++;
		cnt[ch-'A']++;
	}
	REP(i,0,4){
		int base = floor(cnt[i]*0.1);
		bool flag = false;
		REP(j,0,100){
			if(vis[i][j]>base){
				flag = true;
				printf("%d ",j);
			}
		}
		if(flag==false){
			printf("Nothing Unusual");
		}
		cout<<endl;
	}
	return ;
}
int main() {
	proc();
	return 0;
}
*/
