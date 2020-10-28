
#include <bits/stdc++.h>
 
using namespace std;

vector <int> countEleLessThanOrEqual(int arr1[], int arr2[], 
                             int m, int n);
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m>>n;
        int arr1[m],arr2[n];
        for(int i=0;i<m;i++)
        cin>>arr1[i];
        for(int j=0;j<n;j++)
        cin>>arr2[j];
        vector <int> res = countEleLessThanOrEqual(arr1, arr2, m, n);
        for (int i = 0; i < res.size (); i++) cout << res[i] << " ";
        
        cout<<endl;
    }
    return 0;
}

vector<int> countEleLessThanOrEqual(int arr1[], int arr2[], 
                             int m, int n)
{
    sort(arr2,arr2+n);
    vector<int> val;
    for(int i=0;i<m;i++){
        int element = arr1[i];
        int start = 0,end = n-1;
        int count=-1;
        while(start<=end){
            int mid = start + (end-start)/2;
            if(element >= arr2[mid]){
                start = mid+1;
                count = mid;
            }
            else if(element<arr2[mid]){
                end = mid-1;
            }
        }
        val.push_back(count+1);
    }
    return val;
}