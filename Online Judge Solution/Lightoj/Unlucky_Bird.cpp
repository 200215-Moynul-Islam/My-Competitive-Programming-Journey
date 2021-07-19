#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int test,t;
    double v1,v2,v3,a1,a2,d,ans,time;
    cin>>test;
    for(t=1;t<=test;t++){
        cin>>v1>>v2>>v3>>a1>>a2;
        d=((v1*v1)/(2*a1))+((v2*v2)/(2*a2));
        time=max((v1/a1),(v2/a2));
        ans=time*v3;
        cout<<fixed<<setprecision(10)<<"Case "<<t<<": "<<d<<' '<<ans<<endl;
    }
    return 0;
}
