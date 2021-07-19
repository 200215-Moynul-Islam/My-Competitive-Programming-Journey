#include<bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    
    long long int test,t;
    string s1,s2;
    cin>>test;
    for(t=1;t<=test;t++){
        cin>>s1;
        s2=s1;
        reverse(s1.begin(),s1.end());
        cout<<"Case "<<t<<": ";
        if(s1==s2){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}