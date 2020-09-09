#include<iostream>
#include<math.h>
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
        int k;
        cin>>k;
        int temp,num,val=0;
        for(int i=0;i<n;i++){
            num = arr[i];
            while (num>0)
            {
                temp = num%10;
                num = num/10;
                if(temp == k){
                    ++val;
                }
            }
        }
        cout<<val<<endl;
    }
}