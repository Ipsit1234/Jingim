#include <iostream>
#include<string>
using namespace std;

int main(){
	int n;
	cin >> n;
	string ws;
	getline(cin, ws);
	for(int i = 1; i <= n; i++){
		string s;
		cout << s;
		getline(cin, s);
		if(s.length() > 10){
			cout << s[0] << s.length() - 2 << s[s.length() - 1] << endl;
		}
		else{
			cout << s << endl;
		}
	}
}