#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a;
    cin>>a;
    while(a--){
        lpng long n;
        cin>>n;
        lpng long arr[n],val[n];
        for(int i =0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        long long temp=0;
        int j=0,k=n-1,i=0;
        while(j<k){
            val[i] =  arr[j];
            ++i;
            ++j;
            if(j<k){
                val[i] = arr[k];
                ++i;
                --k;
            } 
        }
        for(int i=0;i<n;i++){
            if(i == n-1){
                temp = temp + abs(val[i] - val[0]);
            }
            else
            {
                temp = temp + abs(val[i] - val[i+1]);
            }
        }
        cout<<temp<<endl;
    }
}