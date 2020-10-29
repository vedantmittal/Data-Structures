#include <bits/stdc++.h>
using namespace std;
vector<int> leaders(int arr[], int n){
    vector<int> val;
    val.push_back(arr[n-1]);
    int max=arr[n-1];
    for(int i=n-2;i>=0;i--){
        if(arr[i]>=max){
            max = arr[i];
            val.push_back(arr[i]);
        }
    }
    return val;  
}

int main()
{
   long long t;
   cin >> t;
   while (t--)
   {
        long long n;
        cin >> n;
        int a[n];
        for(long long i =0;i<n;i++){
            cin >> a[i];
        }
        vector<int> v = leaders(a, n);
        for(vector<int>::iterator it = v.begin();it!=v.end();it++){
            cout << *it << " ";
        }
        cout << endl;
   }
}