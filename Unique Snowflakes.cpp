#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <map>
#define ll long long
using namespace std;
map<ll,bool> ma;

int main(){
//	freopen("ip.txt","r",stdin);
//	freopen("rs.txt","w",stdout);
	ll n;
	cin >> n;
	ll m;
	ll a;
	for(ll i=0;i<n;i++){
		cin >> m;
		ll dem=0;
		
		for(ll j=0;j<m;j++){
			cin >> a;
			if(!ma[a]) dem++;
			ma[a]=true;
		}
		cout << dem;
	//	if(i!=n-1) cout << endl;
		ma.clear();
	}

}
