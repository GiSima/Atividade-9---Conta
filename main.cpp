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

Cliente cadastroCliente(){
	Cliente alt;
	string n;
	int a,b,c;
	cout << "Cadastro de cliente" << endl;
	cout << "Digite o nome : ";
	cin >> n;
	alt.setNome(n);
	cout << "Digite o telefone : ";
	cin >> a;
	alt.setTelefone(a);
	bool i=true;
	while (i){
		cout << "Digite o tipo da conta : ";
		cin >> b;
		i = alt.setTipo(b);
		i = !i;
	}
	i = true;
	while (i){
		cout << "Digite a quantidade de Minutos consumidos: ";
		cin >> c;
		i = alt.setMinutos(c);
		i = !i;
	}

	return alt;
}

void geraMenu(){
	cout << "1) Visualizar relatório de clientes" << endl;
	cout << "2) Visualizar a receita total da empresa" << endl;
	cout << "3) Quantidade de clientes que consumiram acima de 120 minutos" << endl;
	cout << "4) Sair" << endl;
}

int selecionaOpcao(){
	int sel = 0;
	while(true){
		cout << "Digite a opção desejada (1 a 4): ";
		cin >> sel;
		if(sel < 0||sel > 4){
			return sel;
		}
		else{
		cout << "Opcao invalida" << endl;
		}
	}
}

int main()
{

	return 0;
}