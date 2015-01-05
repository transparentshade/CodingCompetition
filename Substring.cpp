///*
// * Substring.cpp
// *
// *  Created on: Oct 20, 2014
// *      Author: nb
// */
//
//
//
//
//
//
//
//#include <cstdio>
//#include <cstring>
//#include <iostream>
//#include <string>
//#include <vector>
//#include <ctime>
//#include <string>
//#include <algorithm>
//#include <sstream>
//
//#include <map>
//#include <cmath>
//#include <set>
//#include <cstring>
//#include <bitset>
//using namespace std;
//#define x first
//#define y second
//#define VI vector<int>
//#define pii pair<int,int>
//#define inf 1000000000
//#define L(s) ((int)(s).size())
//#define pb push_back
//#define mp make_pair
//#define all(s) (s).begin(), (s).end()
//typedef long long ll;
//typedef vector<int> vi;
//typedef pair<int, int> ii;
//typedef vector<ii> vii;
//typedef set<int> si;
//typedef map<string, int> msi;
//// To simplify repetitions/loops, Note: define your loop style and stick with it!
//#define REP(i, a, b) \
//for (int i = int(a); i <= int(b); i++) // a to b, and variable i is local!
//#define REPREV(i, a, b) \
//for (int i = int(a); i >= int(b); i--) // a to b, and variable i is local!
//#define TRvi(c, it) \
//for (vi::iterator it = (c).begin(); it != (c).end(); it++)
//#define TRvii(c, it) \
//for (vii::iterator it = (c).begin(); it != (c).end(); it++)
//#define TRmsi(c, it) \
//for (msi::iterator it = (c).begin(); it != (c).end(); it++)
//#define ghei(i)\
//scanf("%d",&i)
//#define ghel(i)\
//scanf("%lld",&i)
//#define ghes(i)\
//scanf("%s",&i)
//#define INF 2000000000 // 2 billion
//// If you need to recall how to use memset:
//#define MEMSET_INF 127 // about 2B
//#define MEMSET_HALF_INF 63 // about 1B
//#define mx 1000
//int F[mx];
//string pat,txt;
//void failure() {
//	F[0] = F[1] =0;
//	int i=2;
//	int j=0;
//	while(i<pat.length()){
//		j =F[i-1];
//		while(true) {
//			if(pat[j]==pat[i-1]){
//				F[i] = j+1;
//				i++;
//				break;
//			}
//			else if(j>0) j = F[j];
//			else {
//				F[i] = 0;
//				i++;
//				break;
//			}
//		}
//	}
//	REP(i,0,pat.length())cout<<F[i]<<" ";
//	cout<<endl;
//
//}
//int kmp(int in) {
//	int n,m;
//	m = pat.length();
//	n = txt.length();
//	int i=0,j=in;
//
//	while(true) {
//		if(i==m) return j-m+1;
//		if(j==n) return -1;
//		if(pat[i]==txt[j]){
//			i++;
//			j++;
//		}
//		else if(i>0){
//			i = F[i];
//		}
//		else {
//			j++;
//		}
//
//	}
//	return -1;
//}
//int main() {
//	cin>>pat;
//	cin>>txt;
//	failure();
//	int in = kmp(0);
//	if(in!=-1)cout<<in<<endl;
//	else cout<<"NOf found "<<endl;
//}
//
