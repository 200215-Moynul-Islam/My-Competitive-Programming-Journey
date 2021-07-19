#include<bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    long long int t,s,i,root,x;
    cin>>t;
    for(i=1;i<=t;i++){
        cin>>s;
        root=sqrt(s);
        x=root*root;
        if(root&1){
            if(x==s){
                cout<<"Case "<<i<<": "<<1<<' '<<root<<endl;
            }
            else if(x+root+1>s){
                cout<<"Case "<<i<<": "<<s-x<<' '<<root+1<<endl;
            }
            else{
                cout<<"Case "<<i<<": "<<root+1<<' '<<((root+1)*(root+1))-s+1<<endl;
            }
        }
        else{
            if(x==s){
                cout<<"Case "<<i<<": "<<root<<' '<<1<<endl;
            }
            else if(x+root+1>s){
                cout<<"Case "<<i<<": "<<root+1<<' '<<s-x<<endl;
            }
            else{
                cout<<"Case "<<i<<": "<<((root+1)*(root+1))-s+1<<' '<<root+1<<endl;
            }
        }
    }
    return 0;
}