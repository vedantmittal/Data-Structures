#include<iostream>
#include <string>
using namespace std;

int convertFive(int n);
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << convertFive(n) << endl;
    }
}

int convertFive(int n) {
	string str= to_string(n);
    string w;
	int val;
	for(int i=0;i<str.length();i++){
        w = str[i];
		val = stoi(w);
		if(val == 0){
			str[i] = '5';
		}
	}
    val = stoi(str);
	return val;
}
    