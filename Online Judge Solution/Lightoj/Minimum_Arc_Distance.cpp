#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    long long int test,t;
    double Ox,Oy,Ax,Ay,Bx,By,r,a,theta1,theta2,pi,ans,arc1,arc2;
    pi=2*asin(1);
    cin>>test;
    for(t=1;t<=test;t++){
        cin>>Ox>>Oy>>Ax>>Ay>>Bx>>By;
        r=sqrt(((Ax-Ox)*(Ax-Ox))+((Ay-Oy)*(Ay-Oy)));
        a=sqrt(((Ax-Bx)*(Ax-Bx))+((Ay-By)*(Ay-By)));
        theta1=acos((((2*r*r)-(a*a))/(2*r*r)));
        theta2=(2*pi)-theta1;
        arc1=r*theta1;
        arc2=r*theta2;
        ans=min(arc1,arc2);
        cout<<fixed<<setprecision(3)<<"Case "<<t<<": "<<ans<<endl;
    }
    return 0;
}