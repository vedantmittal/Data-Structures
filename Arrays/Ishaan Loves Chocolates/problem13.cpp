#include<iostream>
#include <limits>
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
        int min = INT_MAX;
        for(int i=0;i<n;i++){
            if(min>arr[i]){
                min = arr[i];
            }
        }
        cout<<min<<endl;
    }

}