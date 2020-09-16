#include<bits/stdc++.h>
using namespace std;

int maxDistance(int arr[], int n);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        cout<<maxDistance(arr,n)<<endl;
    }
    return 0;
}

int maxDistance(int arr[], int n)
{
    int val=-1,max=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(arr[i]== arr[j]){
                val =j;
            }
        }
        val = val-i;
        if(max<val){
            max = val;
        }
    }
    return max;
}