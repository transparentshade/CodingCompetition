/*

 * A.cpp
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
vector<ll>data;
ll avg,cur,n;
ll ans,sum;
struct node {
	ll pos;
	ll val;
};
int fun(node a,node b) {
	return a.pos<b.pos;
}
vector<node>def,extra;
int main()
{
	ll n,k;
	cin>>n>>k;
	ll arr[n];
	REP(i,0,n-1)
	 cin>>arr[i];
	ll mymax=0;
	REP(i,0,n-1)
		if(mymax<arr[i])
			mymax=arr[i];
	for(int i=0;i<n;i++)
		arr[i]=mymax-arr[i];
	ll Iwant[n];
	Iwant[0]=arr[0];
	ll fuck=Iwant[0];
	REP(i,1,n-1)
	{
		if(arr[i]==0)
		{
			Iwant[i]=0;
			continue;
		}
		if(arr[i-1]>=arr[i])
			Iwant[i]=0;
		else
			Iwant[i]=arr[i]-arr[i-1];
		fuck+=Iwant[i];
	}
	if(fuck>k)
		printf("0\n");
	else
		printf("%lld\n",k-fuck+1);
	return 0;
}

*/
