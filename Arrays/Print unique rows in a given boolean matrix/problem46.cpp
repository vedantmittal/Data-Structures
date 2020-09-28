#include<algorithm>
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum,val=0,add=0;
    cin>>sum;
    sort(arr,arr+n);
    for(int i=0;i<n-1;i++){
        int j=i+1;
        int k = n-1;
        while(j<k){
            add = arr[j] + arr[k];
            if(add == sum){
                ++val;
                break;
            }
            if(add>sum){
                k--;
            }
            else{
                j++;
            }
        }
    }
    cout<<endl<<val;
    return 0;
}