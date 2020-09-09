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
        int temp = n/2;
        int temp1=0,temp2=0,val;
        for(int i=0;i<n;i++){
            if(i<temp){
                temp1 += arr[i];
            }
            else{
                temp2 += arr[i];
            }
        }
        val = temp1 * temp2;
        cout<<val<<endl;
    }
}