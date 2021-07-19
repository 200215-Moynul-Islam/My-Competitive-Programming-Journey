#include<bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    
    long long int test,t,n,m,x;
    string s;
    cin>>test;
    for(t=1;t<=test;t++){
        deque<int>d;
        cin>>n>>m;
        cout<<"Case "<<t<<":"<<endl;
        while(m--){
            cin>>s;
            if(s=="pushLeft"){
                cin>>x;
                if(d.size()>=n){
                    cout<<"The queue is full"<<endl;
                }
                else{
                    d.push_back(x);
                    cout<<"Pushed in left: "<<x<<endl;
                }
            }
            else if(s=="pushRight"){
                cin>>x;
                if(d.size()>=n){
                    cout<<"The queue is full"<<endl;
                }
                else{
                    d.push_front(x);
                    cout<<"Pushed in right: "<<x<<endl;
                }
            }
            else if(s=="popLeft"){
                if(d.size()==0){
                    cout<<"The queue is empty"<<endl;
                }
                else{
                    x=d.back();
                    d.pop_back();
                    cout<<"Popped from left: "<<x<<endl;
                }
            }
            else if(s=="popRight"){
                if(d.size()==0){
                    cout<<"The queue is empty"<<endl;
                }
                else{
                    x=d.front();
                    d.pop_front();
                    cout<<"Popped from right: "<<x<<endl;
                }
            }
        }
    }
    return 0;
}