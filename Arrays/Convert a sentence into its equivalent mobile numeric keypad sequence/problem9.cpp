#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){

	map<char,string>val;
	
	val['A'] = "2";
	val['B'] = "22";
	val['C'] = "222";
	val['D'] = "3";
	val['E'] = "33";
	val['F'] = "333";
	val['G'] = "4";
	val['H'] = "44";
	val['I'] = "444";
	val['J'] = "5";
	val['K'] = "55";
	val['L'] = "555";
	val['M'] = "6";
	val['N'] = "66";
	val['O'] = "666";
	val['P'] = "7";
	val['Q'] = "77";
	val['R'] = "777";
	val['S'] = "7777";
	val['T'] = "8";
	val['U'] = "88";
	val['V'] = "888";
	val['W'] = "9";
	val['X'] = "99";
	val['Y'] = "999";
	val['Z'] = "9999";
	
	int a;
	cin>>a;
	cin.ignore();
    for(int j =0;j<a;j++){
	    string s,value,str;
        char temp;
        getline(cin,s);
        int num = s.length();
        for(int i=0;i<num;i++){
            temp = s[i];
            if(temp == ' '){
                str = str + '0';
            }
            else{
                auto it = val.find(temp);
                value = it->second;
                str = str + value; 
            }	
        }
	    cout<<str<<endl;
        str= "";
	}
	return 0;
}


