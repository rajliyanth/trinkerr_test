#include <bits/stdc++.h>
using namespace std;


int fun(int k) {
    return k* (k-1)/2;
 
}

int main() {
	int n;
	cin>> n;
	int arr[n];
	for (int i =0;i<n;i++) {
	    cin>>arr[i];
	}
	int ans = 0;
	map<int,int> mp;
	for (int i = 0;i<n;i++) {
	    if (mp.find(arr[i]) == mp.end()) {
	        mp.insert(make_pair(arr[i], 1));
	    }
	    else {
	        mp[arr[i]]++;
	    }
	}
	map<int,int> :: iterator it;
	for (it = mp.begin();it != mp.end();it++) {
	    ans += fun(it->second); 
	}
	cout<<ans;
	
	return 0;
}
