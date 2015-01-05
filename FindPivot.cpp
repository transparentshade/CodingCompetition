/*

 * FindPivot.cpp
 *
 *  Created on: Sep 23, 2014
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
int a[100];
int n;
int find(int low,int high){
	while(low<=high){
		if(low==high) return -1;
		if(high-low==1){
			if(a[high]<a[low]) return high;
			return -1;
		}
		int mid = low+(high-low)/2;
		if(a[mid]<a[mid-1]){
			return mid;
		}
		else {
			if(a[low]>a[mid])
				high = mid;
			else if(a[low]==a[mid]){
				int i=find(low,mid);
				return i!=-1?i:find(mid+1,high);
			}
			else low = mid;
		}
	}
	return -1;
}
int binsearch(int low,int high,int key) {
	if(low==high) {
		if(a[low]==key) return low;
		return -1;
	}
	while(low<=high) {
		int mid = low + (high-low)/2;
		if(a[mid]<key) {
			low = mid+1;
		}
		else if (a[mid]>key) {
			high = mid-1;
		}
		else return mid;
	}
	return -1;
}

int main() {
	int t;
	cin>>t;
	while(t--) {
			cin>>n;
			for(int i=0;i<=n-1;i++) {
				cin>>a[i];
			}
			int index = find(0,n-1);
			if(index ==-1) {
				cout<<"Array is already sorted miss"<<endl;
			}
			else {
				cout<<" Index of pivot is : "<<index<<endl;
			}
	}
}

*/
