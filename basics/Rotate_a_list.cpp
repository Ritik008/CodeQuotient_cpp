#include<iostream>
#include<cstdio>
#include<cmath>
// Include headers as needed

using namespace std;

int main()
{
  	int t, n, r;

  	cin >> t;
  	for(int i = 0; i < t; i++) {
    	cin >> n;
      	int arr[n];
      	for(int i = 0; i < n; i++) {
          cin >> arr[i];
        }
  		cin >> r;
      int x;
      for(int i = 0; i < r; i++) {
        x = arr[0];
      	for(int j = 0; j < n; j++) { 
        arr[j] = arr[j + 1];
        }
        arr[n - 1] = x;  
      }
      for(int i = 0; i < n; i++) {
        if(i == n - 1) {
      		cout << arr[i];
        }else {
        	cout << arr[i] << " ";  
        }
      }
      cout << endl;
    }
  return 0;
}