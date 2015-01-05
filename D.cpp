/*
#include<iostream>
#include<cstdio>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#include<iomanip>
#include<cmath>
#define sp(z) setprecision(z)
#define sv(z) sort(z.begin(),z.end())
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define ll long long
#define ld long double
#define si(z) scanf("%d",&z)
#define sl(z) scanf("%Ld",&z)
#define sd(z) scanf("%Lf",&z)
#define sc(z) scanf("%c",&z);
#define fr(y,q,s) for(int y=q;y<s;y++)
#define f(y,z) for(int y=0;y<z;y++)
#define fe(y,z) for(int y=1;y<=z;y++)
using namespace std;
ll min(ll a,ll b){ return (a<b)?a:b; }
ll max(ll a,ll b){ return (a>b)?a:b; }
ll gcd(ll a,ll b){ return (b==0)?a:gcd(b,a%b); }
ll modpow(ll a, ll n, ll mod){ ll res=1; while(n){ if(n&1)res=(res*a)%mod; a=(a*a)%mod; n>>=1; } return res; }
ll lpow(ll a, ll n){ ll res=1; while(n){ if(n&1)res*=a; a*=a; n>>=1; } return res; }
ld dpow(ld a, ll n){ ld res=1; while(n){ if(n&1)res*=a; a*=a; n>>=1; } return res; }
vector<vector<int> > v;
vector<int> mc,lbcf,dist_chutiya,temp_chirkut;
vector<pair<pair<int,int>,int> > vp;
void bfs(int x,int n)
    {
    int y,p,m=0,c=0;
    vector<int> visit;
    f(i,n)
        visit.pb(0);
    temp_chirkut.pb(x);
    visit[x]=1;
    while(temp_chirkut.size())
        {
        y=temp_chirkut[0];
        temp_chirkut.erase(temp_chirkut.begin());
        f(i,v[y].size())
            {
            p=v[y][i];
            if(visit[p]==1)
                continue;
            dist_chutiya[p]=dist_chutiya[y]+1;
            temp_chirkut.pb(p);
            visit[p]=1;
        }
    }
    f(i,n)
        m=max(m,dist_chutiya[i]);
    f(i,n)
        if(dist_chutiya[i]==m)
            c++;
    vp.pb(mp(mp(m,c),x));
}
void erase(vector<int> &v, int x)
    {
    f(i,v.size())
        {
        if(v[i]==x)
            {
            v.erase(v.begin()+i);
            break;
        }
    }
}
void del(int x)
    {
    int y;
    erase(lbcf,x);
    y=v[x][0];
    mc[y]--;
    mc[x]--;
    if(mc[y]==1)
        lbcf.pb(y);
    erase(v[y],x);
    v[x].clear();
}
int main()
{
	int n,k,x,y;
    si(n);si(k);
    f(i,n)
        v.pb(mc);
    f(i,n)
        mc.pb(0);
    f(i,n-1)
        {
        si(x);si(y);
        x--;y--;
        mc[x]++;mc[y]++;
        v[x].pb(y);
        v[y].pb(x);
    }
    f(i,n)
        {
        if(mc[i]==1)
            lbcf.pb(i);
    }
    f(i,k)
        {
        vp.clear();
        f(j,lbcf.size())
            {
            dist_chutiya.clear();
            f(l,n)
                dist_chutiya.pb(0);
            bfs(lbcf[j],n);
        }
        sv(vp);
        x=vp[vp.size()-1].S;
        del(x);
    }
    vp.clear();
    f(i,lbcf.size())
    {
        dist_chutiya.clear();
        f(j,n)
            dist_chutiya.pb(0);
        bfs(lbcf[i],n);
    }
    sv(vp);
    cout<<(vp[vp.size()-1].F).F<<endl;
	return 0;
}
*/
