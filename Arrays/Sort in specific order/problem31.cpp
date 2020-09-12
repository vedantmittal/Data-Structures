// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
  public:
    void sortIt(long long arr[], long long n)
    {
        map<long long,long long> valasc;
        map<long long,long long> valdesc;
        for(int i=0;i<n;i++){
            if(arr[i]%2 == 0){
                valasc[arr[i]]++;;
            }
            else{
                valdesc[arr[i]]++;;
            }
        }
        auto it = valdesc.rbegin();
        long long i =0;
        while(it!=valdesc.rend()){
            int value=0;
            while(value < it->second){
                arr[i] = it->first;
                i++;
                value++;
            }
            it++;
        }
        auto itt = valasc.begin();
        while(itt!= valasc.end()){
            int value=0;
            while(value < itt->second){
                arr[i] = itt->first;
                i++;
                value++;
            }
            itt++;
        }
    }
};

// { Driver Code Starts.
int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long arr[n];

        for (int i = 0; i < n; i++) 
            cin >> arr[i];
        
        Solution ob;
        ob.sortIt(arr, n);

        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}