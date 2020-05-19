#include <bits/stdc++.h>
using namespace std;
#define INF 1LL <<30
#define MAXN 2000000
#define pb push_back
#define mp make_pair
#define forr(i,a,b) for(int i= (a); i<(b); i++)
#define forn (i,n) forr(i,0,n)
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
#define fst first
#define snd second
#define B 127 ///B for Rolling Hashing
#define endl '\n'
typedef unsigned long long int ll;
typedef pair <int,int> ii;
typedef pair<int,ii> iii;
typedef vector<iii> viii;
typedef vector <ii>vii;
typedef vector <int> vi;

int n,k,p,sum;
int arr[1001];

int main()
{
	cin >> n >> k;
	for(int i=1;i<=n;i++){
		cin >> arr[i];
		if(i==k)
			p = arr[i];
	}
	for(int i=1;i<=n;i++){
		if(arr[i]>=p && arr[i]>0)
			sum++;
	}
	cout << sum << '\n';
	return 0;
}
