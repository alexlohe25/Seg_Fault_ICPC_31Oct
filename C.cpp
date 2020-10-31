#include <iostream>
#include <vector>
using namespace std;
void llenaPalabras(vector <string>& u,vector <string>& v){
	int n;
	cin >> n;
	for (int i = 0; i < n; i++){
		string stringU, stringV;
		cin >> stringU;
		cin >> stringV;
		u.push_back(stringU);
		v.push_back(stringV);
	}
}
void traduce(vector <string> u,vector <string> v, string msg){
	int i = 0;
	bool flag = false;
	while (flag == false){
		if (msg == u[i]){
			flag = true;
			cout << v[i] << " ";
		}
		i++;
	}
	if (flag == false)
		cout << u[i] << " ";
}
void obtenPalabras(vector <string> u,vector <string> v,string msg){
	if (msg.size() > 0){
		int i = 0;
		int last = i;
		while (msg[i] != ' '){
			last = i;
			i++;
		}
		string palabra = msg.substr(msg[0], msg[last]);
		string resto = msg.substr(msg[i + 1], msg[msg.size()-1]);
		traduce(u,v,palabra);
		obtenPalabras(u,v,resto);
	}
}
int main(){
	vector<string> u,v;
	llenaPalabras(u,v);
	string msg;
	cin.ignore();
	getline(cin,msg);
	obtenPalabras(u,v,msg);
	cout << endl;
	return 0;
}