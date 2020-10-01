#include<iostream>  
#include<vector>  
using namespace std;  
int main()  
{  
vector<string>  fruit{"mango","apple","strawbery","kiwi","banana"};  
cout<<"fruit names are :";  
for(int i=0;i<fruit.size();i++)  
cout<<i<<":"<<fruit[i]<<endl;  
cout<<'\n';  
fruit.erase(fruit.begin()+3);  
cout<<"After removing apple and strawbery fruits,"<<'\n';  
for(int i=0;i<fruit.size();i++)  
cout<<fruit[i]<<" ";  
return 0;  
}  