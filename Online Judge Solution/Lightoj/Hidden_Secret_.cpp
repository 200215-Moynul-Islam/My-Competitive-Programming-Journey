#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int test,t,n,i;
    string s,s1,s2;
    cin>>test;
    getline(cin,s);
    for(t=1;t<=test;t++){
        getline(cin,s);
        n=s.size();
        s1="";
        for(i=0;i<n;i++){
            if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z')){
                s1+=tolower(s[i]);
            }
        }
        getline(cin,s);
        n=s.size();
        s2="";
        for(i=0;i<n;i++){
            if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z')){
                s2+=tolower(s[i]);
            }
        }
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        if(s1==s2){
            cout<<"Case "<<t<<": Yes"<<endl;
        }else{
            cout<<"Case "<<t<<": No"<<endl;
        }
    }
    return 0;
}