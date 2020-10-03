#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a;
    cin>>a;
    while(a--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n-1;i++){
            cin>>arr[i];
        }
        sort(arr,arr+(n-1));
        int temp = 1;
        for(int i=0;i<n-1;i++){
            if(temp == arr[i]){
                ++temp;
            }
            else{
                break;
            }
        }
        cout<<temp<<endl;
    }
}