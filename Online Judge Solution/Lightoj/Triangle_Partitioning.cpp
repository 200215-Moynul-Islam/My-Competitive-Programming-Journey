#include<bits/stdc++.h>
using namespace std;

int test,t;
double a,b,c,r,B,C;


void BSA(){
    int life=100;
    double left=0,right=c,mid,de,dg,ae,ag,eg,af,bf,cf,ade,abc,bdec,x;
    if(B==90){
        abc=0.5*a*c;
    }else if(C==90){
        abc=0.5*a*b;
    }else if(B>90){
        bf=c*cos(180-B);
        af=c*sin(180-B);
        abc=(0.5*(a+bf)*af)-(0.5*bf*af);
    }
    else if(C>90){
        af=c*sin(B);
        cf=af/tan(180-C);
        abc=(0.5*(a+cf)*af)-(0.5*cf*af);
    }else{
        bf=c*cos(B);
        af=c*sin(B);
        cf=b*cos(C);
        abc=0.5*(bf+cf)*af;
    }
    while(life--){
        mid=left+((right-left)/2);
        if(B==90){
            de=mid/tan(C);
            ade=0.5*de*mid;
            bdec=abc-ade;
        }else if(C==90){
            de=mid*cos(B);
            ae=mid*sin(B);
            ade=0.5*de*ae;
            bdec=abc-ade;
        }else if(B>90){
            ag=mid*sin(180-B);
            eg=ag/tan(C);
            dg=ag/tan(180-B);
            ade=(0.5*eg*ag)-(0.5*dg*ag);
            bdec=abc-ade;
        }else if(C>90){
            ag=mid*sin(B);
            eg=ag/tan(180-C);
            dg=mid*cos(B);
            ade=(0.5*dg*ag)-(0.5*eg*ag);
            bdec=abc-ade;
        }else{
            dg=mid*cos(B);
            ag=mid*sin(B);
            eg=ag/tan(C);
            ade=0.5*(dg+eg)*ag;
            bdec=abc-ade;
        }
        x=ade/bdec;
        if(x>=r){
            right=mid;
        }else{
            left=mid;
        }
    }
    cout<<fixed<<setprecision(6)<<mid<<endl;
    return;
}



int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    cin>>test;
    for(t=1;t<=test;t++){
        cin>>c>>b>>a>>r;
        B=acos(((a*a)+(c*c)-(b*b))/(2*a*c));
        C=acos(((a*a)+(b*b)-(c*c))/(2*a*b));
        cout<<"Case "<<t<<": ";
        BSA();
    }
    return 0;
}
