#include<bits/stdc++.h>
#include<iostream>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    
    long long int test,t,count,n,b;
    double a[1000001],fact=1,x,y;
    a[0]=0;
    for(t=1;t<1000001;t++){
        a[t]=a[t-1]+log10(t);
    }
    
    cin>>test;
    for(t=1;t<=test;t++){
        cin>>n>>b;
        x=log10(b);
        y=a[n]/x;
        y++;
        cout<<"Case "<<t<<": "<<(int)y<<endl;
    }
    return 0;
}

