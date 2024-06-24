#include <iostream>
#include <locale.h>

using namespace std;

int main(void){

    float subtotal, total, frete, item;
    int i, pedido, comprador;

    subtotal = 0, total = 0, frete = 0, item = 0, i = 0, pedido = 0, comprador = 0;


    cout << "Bem-vindo ao sistema FutGym \n";

    cout << "Insira o valor do item: \n";
        cin >> item;

    do{
        subtotal = subtotal + item;

        cout << "Insira o valor do item: \n";
        cin >> item;
        i++;
    } while (item!= 0);

        reset: // reset está ligado ao 2° bloco if abaixo
    cout << "O pedido saira para entrega?\n (Digite 0 para nao e 1 para sim)\n";
        cin >> pedido;  

    if (pedido == 1){

        cout << "Digite o valor do frete: \n";
            cin >> frete;
    }

    if (pedido != 0 && pedido != 1){
        
        cout << "\nValor invalido!";
        goto reset;
    }
    cout << "Escolha a classe do comprador: \n";
        cout << "1 - Funcionario\n";
        cout << "2 - Cliente VIP\n";
        cout << "3 - Cliente comum\n";


        switch1: // goto do switch abaixo (Default)
            cin >> comprador;

    switch (comprador)
    {
    case 1:
        cout << "Voce escolheu a classe funcionario\n";
        total = frete + (subtotal - (subtotal/10));

        cout << "Total a ser pago: " << total << "R$\n";

        break;
    case 2:
        cout << "Voce escolheu a classe cliente VIP\n";
        total = frete + (subtotal - (subtotal/20));

        cout << "Total a ser pago: " << total << "R$\n";
        break;
    case 3:
        cout << "Voce escolheu a classe cliente comum\n";
        total = frete + subtotal;

        cout << "Total a ser pago: " << total << "R$\n";      

        break;


    default:
        cout << "Selecione uma classe valida! \n";

        goto switch1;
         break;
    }
return 0;
} 