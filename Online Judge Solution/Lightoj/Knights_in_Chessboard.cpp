#include<bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    long long int t,n,m,i,ans;
    cin>>t;
    for(i=1;i<=t;i++){
        cin>>n>>m;
        if(n==1||m==1){
        	cout<<"Case "<<i<<": "<<n*m<<endl;
		}
		else if(n==2||m==2){
			if((n*m)%8>=4){
				ans=4;
			}
			else{
				ans=(n*m)%8;
			}
			cout<<"Case "<<i<<": "<<ans+(((n*m)/8)*4)<<endl;
		}
		else{
			cout<<"Case "<<i<<": "<<(((n+1)/2)*((m+1)/2))+((n/2)*(m/2))<<endl;
		}
    }
    return 0;
}