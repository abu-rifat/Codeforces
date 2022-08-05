// /*******Bismillahir-Rahmanir-Rahim**********/
//  
// Name         : Abu Rifat Muhammed Al Hasib
// Institution  : University of Barisal, Bangladesh
// Github       : https://github.com/abu-rifat
// website	: https://a...content-available-to-author-only...t.com
//  
// Codeforces   : https://codeforces.com/profile/ARMaster
// lightoj      : https://lightoj.com/user/abu-rifat
// AtCoder      : https://atcoder.jp/users/aburifat
// codechef     : https://codechef.com/users/aburifat
// SPOJ         : https://spoj.com/users/abu_rifat
// UvaOJ        : https://uhunt.onlinejudge.org/id/889274
//  
// facebook     : https://facebook.com/AbuRifatM
// linkedin     : https://www.linkedin.com/in/aburifat
// Email        : rifat.cse4.bu@gmail.com
// 		  armalhasib@gmail.com
// 		  abu.rifat.m@gmail.com
//  
// Problem	: B. Permutation Chain
// Contest	: Codeforces - Educational Codeforces Round 133 (Rated for Div. 2)
// URL		: https://codeforces.com/contest/1716/problem/B
// Memory Limit : 256 MB
// Time Limit	: 2000 ms
//  
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll t=1;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll arr[n+5];
		for(ll i=0;i<n;i++){
			arr[i]=i+1;
		}
		cout<<n<<endl;
		for(ll i=0;i<n;i++){
			if(i==0){
				for(ll j=0;j<n;j++){
					if(j!=0)cout<<" ";
					cout<<arr[j];
				}
				cout<<endl;
			}else{
				swap(arr[i],arr[i-1]);
				for(ll j=0;j<n;j++){
					if(j!=0)cout<<" ";
					cout<<arr[j];
				}
				cout<<endl;
			}
		}
	}
	return 0;
}