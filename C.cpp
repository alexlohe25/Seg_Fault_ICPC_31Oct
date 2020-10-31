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
	cout << endl;
}
void obtenPalabras(vector <string> u,vector <string> v,string msg){
	cout << "entre al obtenPalabras" << endl;
	if (msg.size() > 0){
		int i = 0;
		int last = i;
		while (msg[i] != ' '){
			last = i;
			i++;
		}
		string palabra = msg.substr(msg[0], msg[last]);
		cout << "Palabra a buscar: " << palabra << endl;
		string resto = msg.substr(msg[i + 1], msg[msg.size()-1]);
		cout << "Resto del mensaje: " << resto << endl;
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
	cout << "Palabra: " << msg << endl;
	obtenPalabras(u,v,msg);
	return 0;
}