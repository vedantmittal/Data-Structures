#include<iostream>
#include<unordered_map> 
#include<algorithm>
using namespace std;
int main()
{
int T;
cin >>T;

while(T--)
{
int n,j=0;

cin >> n;

int arr[n],a[n];
for(int i = 0; i < n; i++)
{
cin >>arr[i];
}
if(n==1){
    cout<<0<<endl;
}
else{
    unordered_map<int,int> mp;
    for(int i = 0; i < n; i++)
    {
    mp[arr[i]]++;
    }

    for(auto x: mp)
    {
        a[j] = x.second;
        j++;
    }
    sort(a,a+j);
    cout<<a[j-1] - a[0]<<endl;
}



}
return 0;
}