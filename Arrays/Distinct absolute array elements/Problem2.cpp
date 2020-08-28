#include<iostream>
#include<map>
#include<cstdlib>
using namespace std;

int main(){
int a,b,c,i,d=0;
	cin>>a;
	while(a--){
		cin>>b;
		map<int,int> val;
		for(i=0;i<b;i++){
			cin>>c;
			val[abs(c)];
		}
//		for(map<int,int>::iterator it= val.begin();it!=val.end();it++){
//			d++;
//		}
		cout<<val.size()<<endl;
		
	}
	
}
