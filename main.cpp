#include <bits/stdc++.h>

using namespace std;

class Cliente {
	string nome;
	string telefone;
	int tipo;
	int minutos;

public:
// - calcularValorConta : deverá retornar um valor baseado na formula:
// • Se tipo igual a 0 retornar minutos * 1
// • Se tipo igual a 1 retornar minutos * 2
// • Se tipo igual a 2 retornar minutos * 3
	
// CORREÇÃO DO METODO CALCULAR VALOR CONTA	
	int calcularValorConta(){
		if (tipo==0){
			return minutos * 1;
		}
		else if (tipo==1){
			return minutos * 2;
		}
		else{
			return minutos * 3;
		}
	}
// - métodos set : criar um método set para cada atributo, os atributos tipo e minutos apresentam regras de validação, nestes casos, o método deve retornar 1, se o valor estiver correto ou 0, se estiver incorreto.
	void setNome(string n){
		nome = n;
	}
	void setTelefone(string n){
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
	string getNome(){
		return nome;
	}
	string getTelefone(){
		return telefone;
	}
	int getTipo(){
		return tipo;
	}
	int getMinutos(){
		return minutos;
	}

};

Cliente cadastroCliente(){
	Cliente alt;
	string n, a;
	int b,c;
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

	// cout << endl;

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
			cout << "Opcao invalida" << endl;
		}
		else{
			return sel;
		}
	}
}

void visualizarRelatorio(Cliente list[], int size){
	string a, b; int c, d; double e;
	for(int i=0; i < size; i++){
		a = list[i].getNome();
		b = list[i].getTelefone();
		c = list[i].getTipo();
		d = list[i].getMinutos();
		e = list[i].calcularValorConta();
		cout << fixed << setprecision(2);
		cout << a << ", " << b << ", Tipo " << c << ", Minutos: " << d << ", Conta = R$ " << e << endl; 
	}
}

void visualizarReceita(Cliente list[], int size){
	double receita = 0;
	for (int i=0; i < size; i++){
		receita += list[i].calcularValorConta();
	}
	cout << "A receita total da empresa foi de: R$ " << receita << endl;
}

void listaClientesConsumo(Cliente list[], int size){
	string nome;
	int min;
	for(int i=0; i < size; i++){
		if(list[i].calcularValorConta() > 120){
			nome = list[i].getNome();
			min = list[i].getMinutos();
			cout << nome << " utilizou " << min << " Minutos" << endl;
		}
	}
}

int main()
{
	int size = 4;
	Cliente clientes[size];
	
	for(int i=0 ; i < size; i++){
		clientes[i] = cadastroCliente();
	}

	geraMenu();
	int op;

	while(true){
		op = selecionaOpcao();
		if(op == 1){
			visualizarRelatorio(clientes, size);
		}
		if(op == 2){
			visualizarReceita(clientes, size);
		}
		if(op == 3){
			listaClientesConsumo(clientes, size);
		}
		if(op == 4){
			cout << "Tchau   :)" << endl << endl << "Esse programa foi desenvolvido pelo aluno Giovane Simamoto Lemes" << endl;
			break;
		}
	}	

	return 0;
}