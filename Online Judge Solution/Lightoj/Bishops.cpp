#include<bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    
    long long int test,t,i,r1,r2,c1,c2,x,y;
    cin>>test;
    for(t=1;t<=test;t++){
        cin>>r1>>c1>>r2>>c2;
        x=abs(r1-r2);
        y=abs(c1-c2);
        if(x==y){
            cout<<"Case "<<t<<": 1"<<endl;
        }
        else if(x%2==1&&y%2==1){
            cout<<"Case "<<t<<": 2"<<endl;
        }
        else if(x%2==0&&y%2==0){
            cout<<"Case "<<t<<": 2"<<endl;
        }
        else{
             cout<<"Case "<<t<<": impossible"<<endl;
        }
    }
    return 0;
}