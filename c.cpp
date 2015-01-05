/*

 * c.cpp
 *
 *  Created on: Oct 5, 2014
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
#include<queue>
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
vector<int> list[310];
int n,k,u,v;
int bfs(int source ){
	queue<pair<int,int> > q;
	bool vis[310];
	memset(vis,false,sizeof(vis));
	q.pb(make_pair(source,0));
	int node =0;
	int curlevel = 0;
	while(!q.empty()){
		pair<int,int> p = list[cur];
		int cur = p.first;
		int level = p.second;
		if(level>curlevel){
			level = curlevel;
			node = cur;
		}
		q.pop();
		for(int i=0;i<list[cur].size();i++){
			if(vis[list[cur][i]]==false){
				vis[list[cur][i]]=true;
				q.push(mp(list[cur][i],level+1));
			}
		}
	}

}
void proc() {
	cin>>n>>k;
	REP(i,1,n-1) {
		cin>>u>>v;
		list[v].pb(u);
		list[u].pb(v);
	}

}
*/
