#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define lli long long int
#define ld long double
#define fore(i,a,b) for (int i = a; i < b; i++)
#define forr(i,a,b) for (int i = a; i > b; i--)
#define forn(i,n) for (int i = 0; i < n; i++)
#define fi first
#define se second
#define pb push_back
#define all(v) v.begin(), v.end()
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;


int  main(){
    fast_io;
    int n,lw,hg,ct=0,vl;
    cin>>n;
    n--;
    cin>>vl;
    hg = lw = vl;
    while(n--){
        cin>> vl;
        if(lw>vl){
            ct++;
            lw = vl;
        }else if(hg<vl){
            ct++;
            hg = vl;
        }
    }
    cout<<ct;
}