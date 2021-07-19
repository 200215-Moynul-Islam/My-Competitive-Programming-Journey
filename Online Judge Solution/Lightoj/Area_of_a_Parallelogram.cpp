#include<bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    long long int test,t,ax,ay,bx,by,cx,cy,dx,dy,area;
    cin>>test;
    for(t=1;t<=test;t++){
        cin>>ax>>ay>>bx>>by>>cx>>cy;
        dx=ax+cx-bx;
        dy=ay+cy-by;
        area=abs(((ax*by)+(bx*cy)+(cx*dy)+(dx*ay)-(bx*ay)-(cx*by)-(dx*cy)-(ax*dy))/2);
        cout<<"Case "<<t<<": "<<dx<<' '<<dy<<' '<<area<<endl;
    }
    return 0;
}
