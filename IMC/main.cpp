#include <iostream>
using namespace std;

int main() {
    // Declara��o de vari�veis
    double peso, altura, imc;

    // Solicita ao usu�rio que insira o peso em quilogramas
    cout << "Digite o peso em quilogramas: ";
    cin >> peso;

    // Solicita ao usu�rio que insira a altura em metros
    cout << "Digite a altura em metros: ";
    cin >> altura;

    // Calcula o IMC
    imc = peso / (altura * altura);

    // Exibe o resultado
    cout << "Seu �ndice de Massa Corporal (IMC) �: " << imc << endl;

    // Classifica o IMC
    if (imc < 18.5) {
        cout << "Voc� est� abaixo do peso ideal." << endl;
    } else if (imc < 24.9) {
        cout << "Seu peso est� dentro da faixa considerada saud�vel." << endl;
    } else if (imc < 29.9) {
        cout << "Voce est� com sobrepeso." << endl;
    } else {
        cout << "Voc� est� obeso." << endl;
    }

    return 0;
}
