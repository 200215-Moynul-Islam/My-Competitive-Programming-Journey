#include<bits/stdc++.h>

using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int test,t,x;
    string s,cur;
    cin>>test;
    for(t=1;t<=test;t++){
        stack<string>b,f;
        cin>>s;
        cur="http://www.lightoj.com/";
        if(s!="QUIT"){
            cout<<"Case "<<t<<":"<<endl;
        }
        while(s!="QUIT"){
            if(s=="VISIT"){
                b.push(cur);
                x=f.size();
                while(x--){
                    f.pop();
                }
                cin>>cur;
                cout<<cur<<endl;
            }
            else if(s=="BACK"){
                if(b.size()==0){
                    cout<<"Ignored"<<endl;
                }
                else{
                    f.push(cur);
                    cur=b.top();
                    b.pop();
                    cout<<cur<<endl;
                }
            }
            else{
                if(f.size()==0){
                    cout<<"Ignored"<<endl;
                }
                else{
                    b.push(cur);
                    cur=f.top();
                    f.pop();
                    cout<<cur<<endl;
                }
            }
            cin>>s;
        }
    }
    return 0;
}