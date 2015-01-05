/*

 * B.cpp
 *
 *  Created on: Oct 12, 2014
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
#define INF 2000000000 // 2 billion// If you need to recall how to use memset:
#define MEMSET_INF 127 // about 2B#define MEMSET_HALF_INF 63 // about 1B
int len;
int fposi = 0;
double fans = 0;
char a[20], b[20];
void fun(int start, int pos,  double ans) {
	if (start == len) {
		if (pos == fposi) {
			fans = ans + fans;
			return;
		}
		return;
	}
	int i=start;
	for(;i<len;i++)
	{
		if (a[i] != '?') {
			if (a[i] == '+')
				pos++;
			if (a[i] == '-')
				pos--;
		}

		else {
			fun(i + 1, pos + 1, ans * 0.5);
			fun(i + 1, pos - 1, ans * 0.5);
			break;
		}
	}
	if(i==len){
		if(pos==fposi){
			fans +=ans;
		}
	}
}

int main() {
	cin >> b >> a;
	len = strlen(a);
	REP(i,0,strlen(b)-1)
	{
		if (b[i] == '+')
			fposi++;
		if (b[i] == '-')
			fposi--;
	}
	fun(0, 0, 1.00);
	printf("%.13f",fans);
	return 0;
}
*/
