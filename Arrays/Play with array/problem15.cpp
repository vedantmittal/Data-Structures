#include<iostream>

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
        int temp;
        for(int i=0;i<n-1;i++){
            if(i%2 == 0){
                if(arr[i]>arr[i+1]){
                    temp =  arr[i];
                    arr[i] = arr[i+1];
                    arr[i+1] =  temp;
                }
            }
            
        }
        

    }

}