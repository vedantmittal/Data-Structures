#include<iostream>
#include<algorithm>
using namespace std;

struct Height{
    int inch;
    int feet;
};

int val_height(Height arr[],int n){
    int max = 0;
    int temp=0;
    for (int i = 0; i < n; i++)
    {   
        temp = 12*arr[i].feet + arr[i].inch;
        if(temp>max){
            max = temp;  
        }
    }
    return max;
}

int main(){

    int a;
    cin>>a;
    while(a--){
        int n;
        cin>>n;
        Height arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i].feet>>arr[i].inch;   
        }
        int val = val_height(arr,n);
        cout<<val<<endl;
    }

}