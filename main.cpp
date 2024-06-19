#include <iostream>

using namespace std;

bool verifica(string nomealuno, float media){
    if (media >= 6){
        cout<<nomealuno<<", ";
        cout<<"Voce foi aprovado\n";
        return true;
    }else{
        cout<<nomealuno<<", ";
        cout<<"voce foi reprovado\n";
        return false;
    }
}

float fmedia(float nota1, float nota2, float nota3, float nota4 ){
    float media = (nota1 + nota2 + nota3 + nota4) / 4;
    return media;
}

int main(){
    //Coleta nome 
    string nomealuno;
    cout<<"Digite seu nome: "
    cin>>nomealuno;

    float nota1, nota2, nota3, nota4;
    cout<<"Digite suas notas\n";

    cin>>nota1>>nota2>>nota3>>nota4;
    
    float media = fmedia(nota1, nota2, nota3, nota4);
    verifica(nomealuno, media);
    return main();
}