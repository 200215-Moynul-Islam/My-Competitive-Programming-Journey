#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;
typedef long double ldl;

#define endl '\n'
#define pb push_back
#define ppb pop_back
#define ff first
#define ss second
#define mp make_pair
#define vi vector<int>
#define vl vector<ll>
#define vs vector<string>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vpii vector<pii>
#define vpll vector<pll>

#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()

const double PI = acos(-1);
#define mod 1000000007

#define mem(a,b) memset(a,b,sizeof(a))
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b))

#define SetBit(x,k) (x|=(1LL<<k))
#define ClearBit(x,k) (x&=(~(1LL<<k)))
#define CheckBit(x,k) (x&(1LL<<k))

#define fios(); ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(x); cout.unsetf(ios::floatfield); cout.precision(x); cout.setf(ios::fixed,ios::floatfield);
#define file(); freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);

template < typename F, typename S >
ostream& operator << ( ostream& os, const pair< F, S > & p ) {
            return os << '(' << p.first << ", " << p.second << ')';
}

template < typename T >
ostream &operator << ( ostream & os, const vector< T > &v ) {
            os << '{';
                for(auto it = v.begin(); it != v.end(); ++it) {
                                if( it != v.begin() ) os << ", ";
                                        os << *it;
                                            }
                    return os << '}';
}

template < typename T >
ostream &operator << ( ostream & os, const set< T > &v ) {
            os << '[';
                for(auto it = v.begin(); it != v.end(); ++it) {
                                if( it != v.begin() ) os << ", ";
                                        os << *it;
                                            }
                    return os << ']';
}

template < typename T >
ostream &operator << ( ostream & os, const multiset< T > &v ) {
            os << '[';
                for(auto it = v.begin(); it != v.end(); ++it) {
                                if( it != v.begin() ) os << ", ";
                                        os << *it;
                                            }
                    return os << ']';
}

template < typename F, typename S >
ostream &operator << ( ostream & os, const map< F, S > &v ) {
            os << '[';
                for(auto it = v.begin(); it != v.end(); ++it) {
                                if( it != v.begin() ) os << ", ";
                                        os << it -> first << " = " << it -> second ;
                                        }
                    return os << ']';
}

#define dbg(args...) do {cerr << #args << " : "; faltu(args); } while(0)

void faltu () {
            cerr << endl;
}

template <typename T>
void faltu( T a[], int n ) {
            for(int i = 0; i < n; ++i) cerr << a[i] << ' ';
                cerr << endl;
}

template <typename T, typename ... hello>
void faltu( T arg, const hello &... rest) {
            cerr << arg << ' ';
                faltu(rest...);
}

void solve(){
    int n,x,rem,cnt=1;
    cin>>n>>x;
    rem=x%n;
    while(rem){
        rem=((rem*10)+x)%n;
        cnt++;
    }
    cout<<cnt<<endl;
}

int main(){
    fios();
    
    
    int test;
    cin>>test;
    for(int t=1;t<=test;t++){
        cout<<"Case "<<t<<": ";
        solve();
    }
    return 0;
}