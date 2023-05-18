

// yuvraj singh dhakar
// scholar id -2114067

#include <bits/stdc++.h>
#include <vector>
#include <math.h>
#include <string>
#include <cstdlib>
#define ll long long
#define vll vector<long long>
#define pb push_back
#define pi pair<int, int>
#include <iostream>
#include <algorithm>
#include <set>
#include <map>
#define tc    \
    ll t;     \
    cin >> t; \
    while (t--)

using namespace std;


int main()
{
    ll n;
    cin>>n;
    vll arr(n);

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int mxlen=-1;
    int len=1;
    for(int i=0;i<n-1;i++)
    {
        
        if(arr[i+1]>=arr[i])
        {
            len++;
        }
        else{
            mxlen=max(len,mxlen);
            len=1;
        }
    }
    mxlen=max(len,mxlen);
    cout<<mxlen<<endl;
}