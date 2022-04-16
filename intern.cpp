#include <bits/stdc++.h>
using namespace std;

string sort_lexographically(string s) {
    
}


int main() {
	int n;
	cin>> n;
	vector<string> arr;
	for (int i =0;i<n;i++) {
	    string s;
	    cin>>s;
	    arr.push_back(s);
	}
	vector<string> arr2;
	for (int i = 0;i<arr.size();i++) {
	    arr2.push_back(sort_lexographically(arr[i]));//cosidering length of strings << number of strings i choose this method.
	}
	map<string, vector<int>> mp;
	map<string, vector<int>> :: iterator it;
	for (int i = 0; i<arr2.size();i++) {
	    it = mp.find(arr2[i]);
	    if (mp.find(arr2[i]) == mp.end()) {
	        vector<int> temp;
	        temp.push_back(i);
	        mp.insert(make_pair(arr2[i], temp));
	    }
	    else {
	        it->second.push_back(i);
	    }
	}
	vector<vector<string>> ans;
	for (it = mp.begin();it != mp.end(); it++) {
	    vector<int> temp;
	    for (int j = 0; j< it->second.size();j++) {
	        temp.push_back(arr[it->second[j]]);
	    }
	    ans.push_back(temp);
	}
	
	//ans will have the required output
	
    
	
	return 0;
}
