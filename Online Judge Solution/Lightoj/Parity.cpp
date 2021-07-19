#include<bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    
    long long int test,t,n,count;
    cin>>test;
    for(t=1;t<=test;t++){
        cin>>n;
        count=0;
        while(n){
            if(n&1){
                count++;
            }
            n>>=1;
        }
        cout<<"Case "<<t<<": ";
        if(count&1){
            cout<<"odd"<<endl;
        }
        else{
            cout<<"even"<<endl;
        }
    }
    return 0;
}