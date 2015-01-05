/*

 * priority_queue.cpp
 *
 *  Created on: Oct 1, 2014
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
#include<queue>
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
struct Node{
	string s;
	int val;
};
string div2(string s,int n) {
	int len = s.length()-1;
	if(len==-1) return "0";
	string res;
	int cur=0,i=0;
	while(s[i]=='0')i++;
	while(i<=len) {
		cur = cur*10 + s[i]-'0';
		if(cur<n){
			if(i!=0)res+='0';
		}
		else {
			res+=('0'+(cur/2));
			cur = cur%2;
		}
		i++;
	}
	i=0;
	while(i<res.length() && res[i]=='0'){
		i++;
	}
	return res.substr(i);
}
string mul(string s,int n) {
	int len = s.length()-1;
	if(len==0) return "0";
	int i= len;
	string res;
	int cur=0;
	while(i>=0){
		cur = cur + (s[i]-'0')*n;
		if(cur>9) {
			res += ('0'+cur%10);
			cur = cur/10;
		}
		else {
			res += ('0'+cur);
			cur = 0;
		}
		i--;
	}
	while(cur>0){
		res+=(cur%10+'0');
		cur = cur/10;
	}
	reverse(res.begin(),res.end());
	return res;
}
string add(string a,string b) {
	int i=a.length()-1;
	int j = b.length()-1;
	int cur=0;
	string res;
	while(i>=0 && j>=0) {
		cur = cur + (a[i]-'0'+b[j]-'0');
		if(cur>9) {
			res += (cur%10+'0');
			cur= cur/10;
		}
		else {
			res+=(cur+'0');
			cur = 0;
		}
		i--;
		j--;
	}
	while(i>=0){
		cur = cur+(a[i]-'0');
		if(cur>9) {
			res += (cur%10 +'0');
			cur = cur/10;
		}
		else {
			res += (cur+'0');
			cur = 0;
		}
		i--;
	}
	while(j>=0) {
		cur = cur + (b[j]-'0');
		if(cur>9) {
			res +=(cur%10 + '0');
			cur = cur/10;
		}
		else{
			res += (cur+'0');
			cur = 0;
		}
		j--;
	}
	if(cur>0)res+=(cur+'0');
	reverse(res.begin(),res.end());
	return res;
}
string bin(string s,string t){
	string res="0";
	while(t!="0"){
		int dig = t[t.size()-1]-'0';
		if(dig&1){
			res = add(res,s);
		}
		s = add(s,s);
		t = div2(t,2);
		//cout<<s<<" "<<t<<endl;
	}
	return res;
}
int main() {
	string a;
	string b;
	cin>>a>>b;
	bin(a,b);
}

*/
