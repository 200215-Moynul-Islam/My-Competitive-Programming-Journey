#include<bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    long long int test,t,x1,x2,y1,y2,m,x,y;
    cin>>test;
    for(t=1;t<=test;t++){
        cin>>x1>>y1>>x2>>y2;
        cout<<"Case "<<t<<":"<<endl;
        cin>>m;
        while(m--){
            cin>>x>>y;
            if(x>x1&&x<x2&&y>y1&&y<y2){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }

    }
    return 0;
}