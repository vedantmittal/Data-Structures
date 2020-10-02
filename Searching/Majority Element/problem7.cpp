#include<iostream>
#include<algorithm>
#include<map>
using namespace std;

int main(){
    int a;
    cin>>a;
    while(a--){
        int n;
        cin>>n;
        int arr[n];
        map<int,int> val;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n-1;i++){
            val[arr[i]]++;
        }
        int temp=-1;
        for(auto it:val){
            if(it.second > n/2){
                temp = it.first;
                cout<<temp<<endl;
            }
        }
    }
}