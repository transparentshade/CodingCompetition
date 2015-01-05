/*

 * TopologicalSort.cpp
 *
 *  Created on: Oct 2, 2014
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
#include<stack>
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
int n,m,x,y;
vector<int> dg;
stack<int>st;
void dfs(int i,vector<bool>&vis,vector<vector<int> > &list){
	//cout<<i<<endl;
	vis[i] = true;
	REP(j,0,list[i].size()-1){
		if(!vis[list[i][j]]){
			dfs(list[i][j],vis,list);
		}
	}
	st.push(i);
}
int fun(int a,int b) {
	return  a>b;
}
void proc() {
	ghei(n);ghei(m);
	vector< vector<int> > list(n);
	vector<int> indg(n,0);
	REP(i,1,m) {
		ghei(x);ghei(y);
		list[x-1].pb(y-1);
		indg[y-1]++;
	}
	REP(i,0,n-1){
		if(indg[i]==0)dg.pb(i);
		sort(list[i].begin(),list[i].end(),fun);
	}

	sort(dg.begin(),dg.end(),fun);
	vector<bool> vis(n,false);
	REP(i,0,dg.size()-1) {
		dfs(dg[i],vis,list);
	}
	if(!st.empty()){
		while(st.empty()==false) {
			int node = st.top();
			st.pop();
			printf("%d ",node+1);
		}
	}
	else{
		cout<<"Sandro fails."<<endl;
	}
}

int main() {
	proc();
	return 0;
}



*/
