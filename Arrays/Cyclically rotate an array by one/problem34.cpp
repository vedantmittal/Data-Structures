#include<iostream>
using namespace std;

int main(){

    int a;
    cin>>a;
    while (a--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int val,temp = arr[0];
        for(int i=0;i<n;i++){
            if(i == n-1){
                arr[0] = temp;
            }
            else{
                val = arr[i+1];
                arr[i+1] = temp;
                temp = val;
            }
        }
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}