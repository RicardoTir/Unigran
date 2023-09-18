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
    cout << "Seu Indice de Massa Corporal (IMC) e: " << imc << endl;

    // Classifica o IMC
    if (imc < 18.5) {
        cout << "Voca esta abaixo do peso ideal." << endl;
    } else if (imc < 24.9) {
        cout << "Seu peso esta dentro da faixa considerada saudavel." << endl;
    } else if (imc < 29.9) {
        cout << "Voce esta com sobrepeso." << endl;
    } else {
        cout << "Voce esta obeso." << endl;
    }

    return 0;
}
