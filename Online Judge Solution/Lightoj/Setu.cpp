#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    long long int test,t,n,x,sum;
    string s;
    cin>>test;
    for(t=1;t<=test;t++){
        cin>>n;
        sum=0;
        cout<<"Case "<<t<<":"<<endl;
        while(n--){
            cin>>s;
            if(s=="donate"){
                cin>>x;
                sum+=x;
            }else{
                cout<<sum<<endl;
            }
        }
    }
    return 0;
}