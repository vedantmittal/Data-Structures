#include<iostream>
#include<map>
using namespace std;

int main(){

    int a;
    cin>>a;
    while(a--){

        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        map<int,int> val;
        for(int i=0;i<n;i++){
            val[arr[i]];
        }
        int sum =0;
        for(auto x : val){
            sum = sum + x.first;
        }
        cout<<sum<<endl;

    }

}