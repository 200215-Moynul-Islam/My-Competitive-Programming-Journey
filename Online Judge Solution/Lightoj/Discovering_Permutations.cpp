#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int test,t,n,k,i;
    string s,s1;
    char ch;
    cin>>test;
    for(t=1;t<=test;t++){
        cin>>n>>k;
        s="";
        ch='A';
        for(i=0;i<n;i++){
            s+=ch;
            ch++;
        }
        s1=s;
        cout<<"Case "<<t<<":"<<endl<<s1<<endl;
        k--;
        next_permutation(s1.begin(),s1.end());
        while(s1!=s&&k--){
            cout<<s1<<endl;
            next_permutation(s1.begin(),s1.end());
        }
    }
    return 0;
}