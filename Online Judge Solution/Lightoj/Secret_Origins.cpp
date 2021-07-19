

#include<bits/stdc++.h>
using namespace std;

long long int two_pow(long long int count){
    long long int x=1;
    while(count--){
        x*=2;
    }
    return x;
}


int main() {
    /*ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);*/


    long long int t,test,i,j,n,x,count,size;
    bool check,ok;
    string s;
    cin>>t;
    for(test=1;test<=t;test++){
        cin>>n;
        if((n&(n-1))==0){
            cout<<"Case "<<test<<": "<<(n<<1)<<endl;
        }
        else if((n&(n+1))==0){
            cout<<"Case "<<test<<": "<<((n+1)+(n>>1))<<endl;
        }
        else{
            x=n;
            s="";
            check=ok=false;
            while(x){
                if(x&1){
                    s='1'+s;
                    check=true;
                }
                else{
                    s='0'+s;
                    if(check){
                        ok=true;
                    }
                }
                x/=2;
            }
            if(!ok){
                s='0'+s;
            }
            size=s.size();
            check=ok=false;
            for(i=size-1;i>=0;i--){
                if(s[i]=='1'){
                    check=true;
                }
                else if(check){
                    s[i]='1';
                    s[i+1]='0';
                    i+=2;
                    j=size-1;
                    for(;i<size;i++){
                        if(s[i]=='1'){
                            while(j>i&&s[j]=='1'){
                                j--;
                            }
                            if(j>i){
                                swap(s[i],s[j]);
                            }
                        }
                    }
                    i=-1;
                }
            }
            count=0;
            x=0;
            for(i=size-1;i>=0;i--,count++){
                if(s[i]=='1'){
                    x+=two_pow(count);
                }
            }
            cout<<"Case "<<test<<": "<<x<<endl;
        }
    }
    return 0;
}
