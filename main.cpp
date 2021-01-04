#include <bits/stdc++.h>

using namespace std;

class Cliente {
	string nome;
	int telefone;
	int tipo;
	int minutos;

public:
// - calcularValorConta : deverá retornar um valor baseado na formula:
// • Se tipo igual a 0 retornar minutos * 1
// • Se tipo igual a 1 retornar minutos * 2
// • Se tipo igual a 2 retornar minutos * 3
	void calcularValorConta(){
		if (tipo==0){
			cout << minutos;
		}
		if (tipo==1){
			cout << minutos * 2;
		}
		if (tipo==2){
			cout << minutos * 3;
		}
	}
// - métodos set : criar um método set para cada atributo, os atributos tipo e minutos apresentam regras de validação, nestes casos, o método deve retornar 1, se o valor estiver correto ou 0, se estiver incorreto.
	void setNome(string n){
		nome = n;
	}
	void setTelefone(int n){
		telefone = n;
	}
	int setTipo(int n){
		if (n < 0 || n > 2){
			return 0;
		}
		else {
			tipo = n;
			return 1;
		}
	}
	int setMinutos(int n){
		if (n < 0 || n > 10000){
			return 0;
		}
		else {
			minutos = n;
			return 1;
		}
	}
// - métodos get : criar um método get para cada atributo.
	void getNome(){
		cout << nome << endl;
	}
	void getTelefone(){
		cout << telefone << endl;
	}
	void getTipo(){
		cout << tipo << endl;
	}
	void getMinutos(){
		cout << minutos << endl;
	}

};

int main()
{

	return 0;
}