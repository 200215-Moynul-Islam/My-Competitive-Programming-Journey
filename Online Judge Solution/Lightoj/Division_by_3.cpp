#include<bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    
    long long int test,t,a,b,count;
    cin>>test;
    for(t=1;t<=test;t++){
        cin>>a>>b;
        count=0;
        if(a%3==2){
            a--;
        }
        else if(a%3==0){
            a-=2;
            count--;
        }
        if(b%3==1){
            b+=2;
            count-=2;
        }
        else if(b%3==2){
            b++;
            count--;
        }
        count=count+(((b-a+1)/3)*2);
        cout<<"Case "<<t<<": "<<count<<endl;
    }
    return 0;
}