#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int test,t;
    double r1,r2,r3,a,b,c,A,B,C,s,x,ans;
    cin>>test;
    for(t=1;t<=test;t++){
        cin>>r1>>r2>>r3;
        a=r1+r2;
        b=r1+r3;
        c=r2+r3;
        A=acos(((b*b)+(c*c)-(a*a))/(2*b*c));
        B=acos(((a*a)+(c*c)-(b*b))/(2*a*c));
        C=acos(((b*b)+(a*a)-(c*c))/(2*b*a));
        s=(a+b+c)/2;
        ans=s*(s-a)*(s-b)*(s-c);
        ans=sqrt(ans);
        x=.5*r1*r1*C;
        ans-=x;
        x=.5*r2*r2*B;
        ans-=x;
        x=.5*r3*r3*A;
        ans-=x;
        cout<<fixed<<setprecision(10)<<"Case "<<t<<": "<<ans<<endl;
    }
    return 0;
}
