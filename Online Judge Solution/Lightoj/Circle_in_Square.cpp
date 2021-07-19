#include<bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    long long int t,i,n;
    double r,ans;
    cin>>t;
    for(i=1;i<=t;i++){
        cin>>r;
        ans=((2*r)*(2*r))-(2.0*acos(0.0)*r*r);
		cout<<"Case "<<i<<": "<<fixed<<setprecision(2)<<ans<<endl;
    }
    return 0;
}