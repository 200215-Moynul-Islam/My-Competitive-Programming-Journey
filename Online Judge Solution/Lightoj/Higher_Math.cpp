#include<bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    long long int t,test;
    long long int a[3];
    cin>>t;
    for(test=1;test<=t;test++){
        cin>>a[0]>>a[1]>>a[2];
        sort(a,a+3);
        cout<<"Case "<<test<<": ";
        if(((a[0]*a[0])+(a[1]*a[1])==(a[2]*a[2]))){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }
    return 0;
}