#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <vector>
#include <algorithm>


using namespace std;


    vector<int> numeros;
    int controle, Soma, i, decisao;
    double MEDIA;

    void menu();
    void soma();
    void media();
    void carregamento();
    void SomaMedia();

void menu(){

cout << "Digite [1] para: Imprimir a somatória de seus elementos\n";
cout << "Digite [2] para: Imprimir a média de seus elementos\n";
cout << "Digite [3] para: Imprimir a média e a somatória\n";
cout << "Digite [4] para: Substituir por zero todos os valores negativos e imprimir a média\n";
cout << "Digite [5] para: Substituir por zero todos os valores repetidos e imprimir a média e a somatória\n";
cout << "Digite [6] para: Mostrar vetor ordenado\n\n";
cout << "DIGITE O NÚMERO DESEJADO E PRESSIONE <ENTER>\n";


}

void soma(){

for ( i = 0; i < numeros.size() ; i++)
{

    Soma = Soma + numeros[i];

}

}

void media(){
soma();
MEDIA = Soma / i;
}

void SomaMedia(){

for ( i = 0; i < numeros.size() ; i++)
{

    Soma = Soma + numeros[i];

}
    MEDIA = Soma / i;
}

void carregamento(){

for (int T = 1; T < 11; T++)
{

cout << "Carregando.  " << T << "0%" ;
Sleep(7);
system("cls");

cout << "Carregando.. " << T << "0%" ;
Sleep(7);
system("cls");

cout << "Carregando..." << T << "0%" ;
Sleep(7);

system("cls");

}
}






int main (){
setlocale(LC_ALL, "Portuguese");



int answer;
carregamento();

cout << "                   ** BEM VINDO **                   " << endl << endl;
cout << "## INSIRA QUANTOS NÚMEROS INTEIROS DESEJAR NA LISTA ##" << endl ;
cout << "# QUANDO QUISER PARAR, DIGITE [0] E O <MENU> IRÁ APARECER #" << endl;
cout << "## O NÚMERO ZERO NÃO FARÁ PARTE DE SUA MEMÓRIA ##"<< endl << endl;

// Digitar números

string H;
H = "Digite o número desejado: ";

do{

    cout << H ;
        cin >> i;
            cout << endl << endl;

numeros.push_back(i);

H = "Digite outro número desejado: ";


}while( i != 0 );

// Fim de digitar números

// Start <MENU>

system("cls");
carregamento();

cout << "**DIGITE [0] PARA SAIR DO PROGRAMA A QUALQUER MOMENTO**\n\n";
numeros.pop_back();

do{

menu();

cin >> decisao;
cout << endl << endl;
system("cls");

switch (decisao){

case 1:
{

soma();

cout << "O somatório é: " << Soma << endl;

break;
}


case 2:
{

media();

cout << "A média de sua lista é; "<< MEDIA << endl;

break ;
}

case 3:
{

SomaMedia();

cout << "A soma dos seus números é: " << Soma << endl;
cout << "A média dos seus números é: " << MEDIA << endl;

break;
}

case 4:
{

sort(numeros.begin(), numeros.end());


for ( i = 0; i <= numeros.size(); i++){

        if (numeros[i] < 0)
    {

        numeros[i] = 0;

    }


    SomaMedia();

    }

cout << "A média de sua lista positiva é; " << MEDIA << endl;

break;
}


case 5:
{

sort(numeros.begin(), numeros.end());

for(int i= 0; i != numeros.size(); i++){

    if(numeros[i] == numeros[i+1])
    {

    numeros[i]= 0;

    }

}
    SomaMedia();

    cout << "A média de sua lista sem valores repetidos é: "<< MEDIA << endl;
        cout <<"O somatório é: "<< Soma <<endl;
}
break;

case 6:
{
    cout<<"###################  SUA LISTA ORDENADA EM ORDEM CRESCENTE  ###################"<<endl;

    std::sort(numeros.begin(), numeros.end());


    for(int i = 0; i != numeros.size(); i++)
    {

    cout <<"                                       " << numeros[i]<< endl ;

    }

    cout << endl  << endl ;

break;

}

}

    cout << "#######  Pressione qualquer número (exeto o ZERO) para continuar  ##########"<<endl;
    cout << "############################  Ou [0] para parar  ###########################"<<endl;

            cin >> decisao;

system("cls");

Soma = 0;

}while(decisao != 0);

    cout << " ** Até a próxima ** ";

return 0;
}
