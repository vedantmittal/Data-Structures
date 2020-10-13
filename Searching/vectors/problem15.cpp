
#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[11];
map<int,int> val;
for(int i=1;i<11;i++){
	cin>>arr[i];
}
for(int i=1;i<11;i++){
	val[i];
}
for(int i=1;i<11;i++){
	val[arr[i]]++;
}
for( auto tmp : val){
	if(tmp.second <1){
		cout<<tmp.first;
	}
	cout<<endl;
}

return 0;
}
