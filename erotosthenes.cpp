#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
#define maxN 60000
#define ll long long
bool isprime[maxN];
ll prime[maxN]; ll pn;
void eratosthenes(){
	pn=0;
	for(ll i=2;i<=maxN;i++)
		isprime[i]=true;
		
	
	for(ll i=2;i<=maxN;i++)
		if(isprime[i]){
			prime[pn++]=i;
			for(ll j=i;j*i<=maxN;j++)
				isprime[j*i]=false;
		}
		
	
}
int main(){
	eratosthenes();
	ll i=0;
	while(i<10){
		cout << prime[i++] << " ";
	}
 
}
