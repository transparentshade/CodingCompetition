/*

 * RemDuplicate.cpp
 *
 *  Created on: Sep 27, 2014
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
int removeDuplicates(int A[], int n) {
	int start = 0;
	if (n == 1)
		return 1;
	for (int i = 0; i < n; i++) {
		//if cur=next ten skip all next index where val is cur
		if (i + 1 == n) {
		cout<<"current element :"<<A[i]<<" "<<start<<endl;
			if (A[start - 1] == A[i])
				break;
			A[start] = A[i];
			start++;
			break;
		}
		if (A[i] == A[i + 1]) {
			A[start] = A[start + 1] = A[i];
			start = start + 2;
			int j = i + 2;
			while (j < n && A[j] == A[i])
				j++;
			i = j - 1;
		} else {
			A[start] = A[i];
			start++;
		}
		//else cur=next
	}
	return start;
}
int main() {
	int A[] = {1,1,1,2,2,3};
	int s = removeDuplicates(A,sizeof(A)/sizeof(int));
	REP(i,0,s-1)cout<<A[i]<<endl;
}

*/
