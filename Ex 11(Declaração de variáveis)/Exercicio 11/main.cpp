//
//  main.cpp
//  Exercicio 11
//
//  Created by Gustavo Henrique Furtado Junqueira on 27/04/16.
//  Copyright © 2016 Gustavo Henrique Furtado Junqueira. All rights reserved.
//

#include <iostream>
using namespace std;
int main (){

    int numero_dependentes ;
    float renda_anual, cpf,  desconto;
    string nome_contribuinte;
    
    cout<<"Digite o nome do contribuinte:\n";
    cin>>nome_contribuinte;
    cout<<"Digite o CPF do contribuinte:\n";
    cin>>cpf;
    cout<<"Digite a renda anual:\n";
    cin>>renda_anual;
    cout<<"Digite o valor de desconto:\n";
    cin>>desconto;
    cout<<"Digite o numero de dependentes do contribuinte:\n";
    cin>>numero_dependentes;
    
    cout<<"O nome do contribuinte é:"<<nome_contribuinte<<" O CPF é:"<<cpf<<"O valor do desconto é:"<<desconto<<"a renda anual é:"<<renda_anual<<"o numero de dependentes é:"<<numero_dependentes<<"\n";
    
    return 0;
    




}


