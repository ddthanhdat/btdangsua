#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
void ngto(long long n){
	bool dem=0;
	for(long long i=2;i<=n;i++){
		if(n%i==0){
			if(dem==1) cout << " x ";
			cout << i ;
			n=n/i;
			i--;
			dem=1;
		}
	}
}
int main(){
	long long n;
	while(cin >> n){
		if(!n) break;
		cout << n << " = ";
		if(n<1) {
			cout << "-1 x ";
			n*=-1;
		}
		ngto(n);
		cout << endl;
	}
	
}
