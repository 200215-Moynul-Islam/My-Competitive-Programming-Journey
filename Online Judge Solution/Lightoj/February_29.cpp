#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    long long int test,t,date,st_year,end_year,x,ans,i;
    string s,s1;
    cin>>test;
    for(t=1;t<=test;t++){
        cin>>s>>s1>>st_year;
        i=date=0;
        while(s1[i]!=','){
            date=(date*10)+(((int)s1[i])-48);
            i++;
        }
        if(s=="January"||s=="February"){
            st_year--;
        }
        cin>>s>>s1>>end_year;
        i=date=0;
        while(s1[i]!=','){
            date=(date*10)+(((int)s1[i])-48);
            i++;
        }
        if(s=="January"||(s=="February"&&date<29)){
            end_year--;
        }
        x=st_year/4;
        st_year=x*4;
        x=end_year/4;
        end_year=x*4;
        ans=(end_year-st_year)/4;
        x=st_year/100;
        st_year=x*100;
        x=end_year/100;
        end_year=x*100;
        x=(end_year-st_year)/100;
        ans-=x;
        x=st_year/400;
        st_year=x*400;
        x=end_year/400;
        end_year=x*400;
        x=(end_year-st_year)/400;
        ans+=x;
        cout<<"Case "<<t<<": "<<ans<<endl;
    }
    return 0;
}