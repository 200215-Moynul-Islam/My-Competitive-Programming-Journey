#include<bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    long long int test,t,n,x,y,z,low,high;
    string s,s1,s2;
    cin>>test;
    for(t=1;t<=test;t++){
        cin>>n;
        low=10000000,high=0;
        while(n--){
            cin>>s>>x>>y>>z;
            x=x*y*z;
            if(x>high){
                high=x;
                s2=s;
            }
            if(x<low){
                low=x;
                s1=s;
            }
        }
        if(low==high){
            cout<<"Case "<<t<<": no thief"<<endl;
        }
        else{
            cout<<"Case "<<t<<": "<<s2<<" took chocolate from "<<s1<<endl;
        }
    }
    return 0;
}
