#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    int n;
    cin>>n;
    float arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int j=0,k=n-1,count=0;
    while(j<=k){
        float val = arr[j]+arr[k];
        if(val<=3.0){
            ++count;
            j++;
            k--;
        }
        else{
            ++count;
            k--;
        }
    }
    cout<<count<<endl;
}