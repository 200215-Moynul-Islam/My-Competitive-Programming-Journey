#include<bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    long long int test,t,a,b;
    cin>>test;
    for(t=1;t<=test;t++){
        cin>>a>>b;
        cout<<"Case "<<t<<": "<<(4*(abs(a-b)+a))+19<<endl;
        
    }
    return 0;
}