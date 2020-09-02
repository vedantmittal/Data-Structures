
#include<iostream>
#include<sstream>
using namespace std;

int main() {
	int a,b,n,temp,val;
	string st,numb;
	cin>>a;
	temp =0;
	while(a--){
		cin>>st;
		val = st.length();
		if(val>=3){
			numb = st[val-3];
			numb+= st[val-2];
			numb+= st[val-1];
		}
		else{
			if(val==2){
				numb= st[val-2];
				numb+= st[val-1];
			}
			else{
				numb= st[val-1];
			}
		}
		stringstream degree(numb);
		degree >> temp;
		if(temp%8 == 0){
			cout<<1;
		}
		else{
			cout<<-1;
		}
		cout<<endl;
	}
	return 0;
}







