/*

 * LCS.cpp
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
#define MEMSET_INF 127 // about 2B#define MEMSET_HALF_INF 63 // about 1Bint dp[3000][3000];
char d[3000][3000];
int n, m;
string s1, s2;
int proc() {
	cin >> s1;

	s2 = s1;
	reverse(s2.begin(), s2.end());
	n = s1.length();

	if (n >= 2600) {
		int cnt[30];
		memset(cnt, 0, sizeof(cnt));
		REP(i,0,n-1)
		{
			cnt[s1[i] - 'a']++;
		}
		REP(i,0,26)
		{
			if (cnt[i] >= 100) {
				REP(j,0,99)
				{
					cout << (char) ('a' + i);
				}
				cout << endl;
				return 0;
			}
		}
	}
	m = s2.length();
	REP(i,0,max(n,m))
		dp[0][i] = dp[i][0] = 0;
	dp[0][0] = 0;
	REP(i,0,n-1)
	{
		REP(j,0,m-1)
		{
			if (s1[i] == s2[j]) {
				dp[i + 1][j + 1] = dp[i][j] + 1;
				d[i + 1][j + 1] = 'd';
			} else {
				dp[i + 1][j + 1] = max(dp[i][j + 1], dp[i + 1][j]);
				if (dp[i + 1][j + 1] == dp[i][j + 1]) {
					d[i + 1][j + 1] = 'u';
				} else {
					d[i + 1][j + 1] = 's';
				}
			}
		}
	}
	int i = n;
	int j = m;
	char arr[3000];
	int len = 0;
	while (i > 0 && j > 0) {
		//	cout<<i<<" "<<j<<endl;
		if (d[i][j] == 'd') {
			arr[len++] = s1[i - 1];
			i--;
			j--;
		} else if (d[i][j] == 'u') {
			i--;
		} else {
			j--;
		}
	}
	int low = 0;
	int high = len - 1;
	if (len > 100) {
		while (len != 100 && len != 101) {
			low++;
			high--;
			len -= 2;
		}
		if (len == 101) {
			REP(i,low,high)
			{
				if (i == (low + high) / 2)
					continue;
				cout << arr[i];
			}
			cout << endl;
			return 0;
		}

	}
	REP(i,low,high)
	{
		cout << arr[i];
	}
	cout << endl;

	return 0;
}
int main() {

//	proc();
	int a[11][11];
	int n, m;
	ghei(n);
	ghei(m);
	REP(i,0,n-1)
	{
		REP(j,0,m-1)
		{
			ghei(a[i][j]);
		}
	}
	REP(i,0,n-1)
	{
		REP(j,0,m-1)
		{
			cout<<(a[i][j])<<" ";
		}
		cout<<endl;
	}
}

*/
