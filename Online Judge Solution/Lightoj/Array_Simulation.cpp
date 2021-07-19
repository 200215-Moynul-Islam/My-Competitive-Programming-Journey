#include<bits/stdc++.h>
using namespace std;

void reverse(long long int a[],long long int n){
    long long int i=0,j=n-1;
    while(i<j){
        swap(a[i],a[j]);
        i++,j--;
    }
}

void add(long long int a[],long long int n,long long int x){
    long long int i;
    for(i=0;i<n;i++){
        a[i]+=x;
    }
}

void multiply(long long int a[],long long int n,long long int x){
    long long int i;
    for(i=0;i<n;i++){
        a[i]*=x;
    }
}

void division(long long int a[],long long int n,long long int x){
    long long int i;
    for(i=0;i<n;i++){
        a[i]/=x;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    
    long long int test,t,n,m,x,y,i;
    char ch;
    cin>>test;
    for(t=1;t<=test;t++){
        cin>>n>>m;
        long long int a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        while(m--){
            cin>>ch;
            if(ch=='S'){
                cin>>x;
                add(a,n,x);
            }
            else if(ch=='M'){
                cin>>x;
                multiply(a,n,x);
            }
            else if(ch=='D'){
                cin>>x;
                division(a,n,x);
            }
            else if(ch=='P'){
                cin>>x>>y;
                swap(a[x],a[y]);
            }
            else{
                reverse(a,n);
            }
        }
        cout<<"Case "<<t<<":"<<endl<<a[0];
        for(i=1;i<n;i++){
            cout<<' '<<a[i];
        }
        cout<<endl;
    }
}