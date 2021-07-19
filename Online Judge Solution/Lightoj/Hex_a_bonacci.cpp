#include<bits/stdc++.h>
using namespace std;

long long int a[10001];

void refresh(){
    long long int i;
    for(i=0;i<10001;i++){
        a[i]=-1;
    }
}

long long int ans(long long int n){
    if(a[n]!=-1){
        return a[n]%10000007;
    }
    else{
        return a[n]=(ans(n-1)+ans(n-2)+ans(n-3)+ans(n-4)+ans(n-5)+ans(n-6))%10000007;
    }
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    long long int t,n,i;
    cin>>t;
    for(i=1;i<=t;i++){
        refresh();
        cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4]>>a[5]>>n;
        cout<<"Case "<<i<<": "<<ans(n)<<endl;
    }
    return 0;
}