#include<bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    long long int test,t,n,m;
    cin>>test;
    for(t=1;t<=test;t++){
        cin>>n>>m;
        cout<<"Case "<<t<<": "<<m*m*(n/(2*m))<<endl;
    }
    return 0;
}
