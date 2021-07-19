#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int test,t,n,i,ans;
    cin>>test;
    for(t=1;t<=test;t++){
        cin>>n;
        n+=1;
        int a[n];
        a[0]=2;
        for(i=1;i<n;i++){
            cin>>a[i];
        }
        ans=0;
        for(i=1;i<n;i++){
            ans+=((a[i]-a[i-1]+4)/5);
        }
        cout<<"Case "<<t<<": "<<ans<<endl;
    }
    return 0;
}