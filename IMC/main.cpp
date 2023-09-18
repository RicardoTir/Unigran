#include <iostream>
using namespace std;

int main() {
    // Declaração de variáveis
    double peso, altura, imc;

    // Solicita ao usuário que insira o peso em quilogramas
    cout << "Digite o peso em quilogramas: ";
    cin >> peso;

    // Solicita ao usuário que insira a altura em metros
    cout << "Digite a altura em metros: ";
    cin >> altura;

    // Calcula o IMC
    imc = peso / (altura * altura);

    // Exibe o resultado
    cout << "Seu Índice de Massa Corporal (IMC) é: " << imc << endl;

    // Classifica o IMC
    if (imc < 18.5) {
        cout << "Você está abaixo do peso ideal." << endl;
    } else if (imc < 24.9) {
        cout << "Seu peso está dentro da faixa considerada saudável." << endl;
    } else if (imc < 29.9) {
        cout << "Voce está com sobrepeso." << endl;
    } else {
        cout << "Você está obeso." << endl;
    }

    return 0;
}
