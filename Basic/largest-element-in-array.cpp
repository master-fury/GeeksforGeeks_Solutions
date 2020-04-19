//Question link --> https://practice.geeksforgeeks.org/problems/largest-element-in-array/0

#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	  int n;
	  cin>>n;
	  vector <int> v (n);
	  for (int i=0;i<n;i++){
	      cin>>v[i];
	  }
	  int result=v[0];
	  if(n>1){
	  for (int i=0;i<n;i++){
	      if(v[i]>result){
	          result=v[i];
	      }
	  }
	  cout<<result<<endl;
	  }
	  else
	  cout<<v[0]<<endl;
	}
	
	return 0;
}