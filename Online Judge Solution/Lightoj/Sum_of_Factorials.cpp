#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	
	long long int test,t,n,i,a[21];
	bool b[21],check;
	a[0]=1;
	for(i=1;i<21;i++){
		a[i]=i*a[i-1];
	}
	
	cin>>test;
	for(t=1;t<=test;t++){
		cin>>n;
		memset(b,false,sizeof(b));
		for(i=20;i>=0;i--){
			if(n==0){
				break;
			}
			else if(n>=a[i]){
				n-=a[i];
				b[i]=true;
			}
		}
		cout<<"Case "<<t<<": ";
		if(n==0){
			check=false;
			for(i=0;i<21;i++){
				if(b[i]){
					if(check){
						cout<<'+';
					}
					cout<<i<<'!';
					check=true;
				}
			}
			cout<<endl;
		}
		else{
			cout<<"impossible"<<endl;
		}
	}
	return 0;
}