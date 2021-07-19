#include<bits/stdc++.h>
using namespace std;

int a[1001],b[1001];

void numofdiv(){
    int i,j,lim,count;
    for(i=1;i<=1000;i++){
        count=0;
        for(j=1;j<=i;j++){
            if(i%j==0){
                count++;
            }
        }
        a[i]=count;
    }
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int test,t,i,j,k,min,ind,x;
    numofdiv();
    k=1;
    for(i=1000;i>0;i--){
        min=1000;
        ind=0;
        for(j=1000;j>0;j--){
            if(a[j]<min&&a[j]!=0){
                min=a[j];
                ind=j;
            }
        }
        a[ind]=0;
        b[k]=ind;
        k++;
    }
    cin>>test;
    for(t=1;t<=test;t++){
        cin>>x;
        cout<<"Case "<<t<<": "<<b[x]<<endl;
    }
    return 0;
}