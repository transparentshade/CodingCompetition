/*

 * FindSmallest.cpp
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

int part(int *a , int n) {
	int q=-1;
	for(int i=0;i<n;i++) {
		if(a[i]>0) {
			q++;
			swap(a[q],a[i]);
		}
	}
	return q+1;
}
int firstMissingPositive(int a[], int n) {
        int low = part(a,n);
        if(low==0) return 1;

        int mn = 100000;
        for(int i=0;i<low;i++) {
            mn =min(a[i],mn);
        }
        if(mn>1) return 1;
        for(int i=0;i<low;i++) {
            int in = abs(a[i])-mn;
            a[in] = -abs(a[in]);
        }
        int mx= 1;
        for(int i=0;i<low;i++) {
            if(a[i]<0){
                mx =i+mn;
            }
            else return i+mn;
        }
        return mx+1;
    }
int minCut(string s) {
        bool dp[s.length()][s.length()];
        for(int i=0;i<s.length();i++) dp[i][i] = true;
        for(int i=1;i<s.length();i++) {
            for(int j=0;j<s.length()-i;j++) {
                int end = i+j;
                dp[i][end] = false;
                if(i==1){
                    dp[j][end] = s[j]==s[end];
                }
                else {
                    dp[j][end] = (dp[j+1][end-1] && s[j]==s[end]);
                }

            }
        }
        int m[s.length()+10];
        for(int dist=0;dist<s.length();dist++) {
            m[dist] = dist;
            if(dp[0][dist]){
                m[dist]=0;
                continue;
            }
            for(int i=dist;i>0;i--){
                if(dp[i][dist]){
                    m[dist] = min(m[dist],m[i-1]+1);
                }
            }
        }
        return m[s.length()-1];
    }
struct Node{
        Node*child[26];
        bool end;
        int groupNo;
        Node(){
            for(int i=0;i<26;i++) child[i] =NULL;
            end = false;
            groupNo = -1;
        }
    };
    void insert(Node **root,string &s,vector< vector<string> > &list,int &gn) {
        Node *cur=(*root),*pcur=NULL;
        string str = s;
        sort(s.begin(),s.end());
        int i=0;
        int n = s.length();
        while(i<n && cur!=NULL){
            pcur = cur;
            cur = cur->child[s[i]-'a'];
            i++;
        }
        if(cur==NULL){
            i--;
            cur = pcur;
            while(i<n) {
                cur->child[s[i]-'a'] = new Node();
                cur = cur->child[s[i]-'a'];
                i++;
            }
            cur->end = true;
            cur->groupNo = gn++;
        }
        if(cur->end == false){
            cur->end = true;
            cur->groupNo = gn++;
        }
        if(list.size()<=cur->groupNo){
            for(int j=0;j<(cur->groupNo-list.size()+1);j++){
                vector<string> st;
                list.push_back(st);
            }
        }
        list[cur->groupNo].push_back(str);
    }
    vector<string> anagrams(vector<string> &strs) {
        Node *root = new Node();
        int gn = 0;
        vector< vector<string> > list;
        for(int i=0;i<strs.size();i++) {
            string s = strs[i];
          //  sort(s.begin(),s.end());
            if(s.length()==0) continue;
            insert(&root,s,list,gn);
        }
        vector<string> res;
        for(int i=0;i<list.size();i++){
            if(list[i].size()<=1) continue;
            for(int j=0;j<list[i].size();j++) {
                res.push_back(list[i][j]);
            }
        }
        return res;

    }
    int add(int a,int b) {
    	return a+b;
    }
    int add2(int (*f)(int,int)){
    	return f(3,4);
    }
    int fun() {
    	 int i;
    	return i++;
    }
    union node{
    	int a;
    	char b;
    };
int main() {
	string s;
	s="nikhil";
	cout<<s.substr(0,3);
}






*/
