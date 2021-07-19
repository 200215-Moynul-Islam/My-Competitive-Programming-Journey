#include<bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    long long int t,i,n,x,ans;
    cin>>t;
    for(i=1;i<=t;i++){
        cin>>n;
        ans=0;
        while(n--){
        	cin>>x;
        	if(x>0){
        		ans+=x;
			}
		}
		cout<<"Case "<<i<<": "<<ans<<endl;
    }
    return 0;
}