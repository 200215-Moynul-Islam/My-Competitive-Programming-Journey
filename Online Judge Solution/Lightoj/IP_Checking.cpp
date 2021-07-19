#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int test,t,i,a,b,c,d,a1,b1,c1,d1,n;
    string s;
    cin>>test;
    for(t=1;t<=test;t++){
        a=b=c=d=0;
        cin>>s;
        n=s.size();
        for(i=0;s[i]!='.';i++){
            a=(a*10)+(((int)s[i])-48);
        }
        i++;
        for(;s[i]!='.';i++){
            b=(b*10)+(((int)s[i])-48);
        }
        i++;
        for(;s[i]!='.';i++){
            c=(c*10)+(((int)s[i])-48);
        }
        i++;
        for(;i<n;i++){
            d=(d*10)+(((int)s[i])-48);
        }

        cin>>s;
        a1=(((int)s[0])-48)*pow(2,7);
        a1=a1+((((int)s[1])-48)*pow(2,6));
        a1=a1+((((int)s[2])-48)*pow(2,5));
        a1=a1+((((int)s[3])-48)*pow(2,4));
        a1=a1+((((int)s[4])-48)*pow(2,3));
        a1=a1+((((int)s[5])-48)*pow(2,2));
        a1=a1+((((int)s[6])-48)*pow(2,1));
        a1=a1+((((int)s[7])-48)*pow(2,0));

        b1=(((int)s[9])-48)*pow(2,7);
        b1=b1+((((int)s[10])-48)*pow(2,6));
        b1=b1+((((int)s[11])-48)*pow(2,5));
        b1=b1+((((int)s[12])-48)*pow(2,4));
        b1=b1+((((int)s[13])-48)*pow(2,3));
        b1=b1+((((int)s[14])-48)*pow(2,2));
        b1=b1+((((int)s[15])-48)*pow(2,1));
        b1=b1+((((int)s[16])-48)*pow(2,0));

        c1=(((int)s[18])-48)*pow(2,7);
        c1=c1+((((int)s[19])-48)*pow(2,6));
        c1=c1+((((int)s[20])-48)*pow(2,5));
        c1=c1+((((int)s[21])-48)*pow(2,4));
        c1=c1+((((int)s[22])-48)*pow(2,3));
        c1=c1+((((int)s[23])-48)*pow(2,2));
        c1=c1+((((int)s[24])-48)*pow(2,1));
        c1=c1+((((int)s[25])-48)*pow(2,0));

        d1=(((int)s[27])-48)*pow(2,7);
        d1=d1+((((int)s[28])-48)*pow(2,6));
        d1=d1+((((int)s[29])-48)*pow(2,5));
        d1=d1+((((int)s[30])-48)*pow(2,4));
        d1=d1+((((int)s[31])-48)*pow(2,3));
        d1=d1+((((int)s[32])-48)*pow(2,2));
        d1=d1+((((int)s[33])-48)*pow(2,1));
        d1=d1+((((int)s[34])-48)*pow(2,0));

        if(a==a1&&b==b1&&c==c1&&d==d1){
            cout<<"Case "<<t<<": Yes"<<endl;
        }else{
            cout<<"Case "<<t<<": No"<<endl;
        }
    }
    return 0;
}
