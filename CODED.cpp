/*



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
//memset(dist, MEMSET_INF, sizeof dist); // useful to initialize shortest path distances
//memset(dp_memo, -1, sizeof dp_memo); // useful to initialize DP memoization table
struct Node{
    int val;
    int pos;
};
int fun(Node a,Node b){
    return a.val<b.val;
}
int n,a,b;
int vis[100010];
vector<Node>list;
map<int,bool>l1,l2;
int binary_search(const vector<Node> &sorted_vec, int  key) {
    //cout<<"searching: "<<key<<" "<<endl;
   int  mid, left = 0 ;
   int right = sorted_vec.size()-1; // one position passed the right end
   while (left <= right) {
      mid = (left+right)/2;
      if (key > sorted_vec[mid].val){
        //  cout<<sorted_vec[mid].val<<" to right "<<endl;
          left = mid+1;
      }
      else if (key < sorted_vec[mid].val){
          //cout<<sorted_vec[mid].val<<" to left "<<endl;
        right = mid-1;
      }
      else {
          //cout<<"Found :"<<key<<" "<<endl;
        return mid;
     }
   }

   return -1;
}
void read(){
    ghei(n);
    ghei(a);
    ghei(b);
    int t;
    REP(i,1,n){
        ghei(t);
        Node n;
        n.pos = i;
        n.val = t;
        list.pb(n);
    }
    sort(list.begin(),list.end(),fun);
   // REP(i,0,n-1)cout<<list[i].val<<" "<<list[i].pos<<endl;
    int left = 0;
    int right = n-1;
    while(left<=right){
    	ll sum = (ll)list[left].val+(ll)list[right].val;
    	if(sum<a){
    		left++;
    	}
    	else if(sum>a)right--;
    	else {

    		vis[left]=1;
    		vis[right] = 1;
    		left++;
    		right--;
    	}
    }
    REP(i,0,n-1)cout<<vis[i]<<" ";
    cout<<endl;
    left = 0;
    right = n-1;
    while(left<=right){
    	while(left<n && vis[left]!=0){
    		left++;
    	}
    	while(right>=0&& vis[right]!=0)right--;
    	ll sum = (ll)list[left].val +(ll)list[right].val;
    	if(sum>b)right--;
    	else if(sum<b) left++;
    	else {

    		vis[left] = 2;
    		vis[right]=2;
    		left++;
    		right--;
    	}
    }
    REP(i,0,n-1)cout<<vis[i]<<" ";
    REP(i,0,n-1){
    	if(vis[i]==0){
    		int p =  a - list[i].val;
    		if(p==list[i].val){
    			vis[i] = 1;
    			continue;
    		}
    		int q = b - list[i].val;
    		if(q==list[i].val){
    			vis[i] = 2;
    			continue;
    		}
    	}
    	if(vis[i]==0){
    		cout<<"NO"<<endl;
    		return ;
    	}
    }
    cout<<"YES"<<endl;
    REP(i,0,n-1){
    	cout<<vis[i] - 1<<" ";
    }

}
void proc(){
}
int main() {
	memset(vis,0,sizeof(vis));
    read();
}

*/
