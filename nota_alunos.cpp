#include<iostream>
using namespace std;
int main(){

    /*declaração de variável */
    float nota_1;
    float nota_2;
    float nota_3;
    float nota_final;
    int Peso_nota1 = 2;
    int Peso_nota2 = 3;
    int Faltas_total;


    /*adição de dados */
    cout << "Nota da P1: " ;
    cin >> nota_1;
    cout << "Nota da P2: " ;
    cin >> nota_2;
    cout << "Nota da P3: ";
    cin >> nota_3;
    cout << "Total de Faltas: ";
    cin >> Faltas_total;



    /*Média final*/
    nota_final = ((nota_1 * Peso_nota1 )+(nota_2 * Peso_nota2)+nota_3)/6;
    cout << "Nota Final: " << nota_final << endl;


    if (nota_final>=9 && Faltas_total <=8 ){
        cout << "Parabens Aprovado!" << endl;
    }
    else if(nota_final >=5 && Faltas_total <=8 ){
        cout << "Aprovado!" << endl;
    }

    else if (nota_final<5 && Faltas_total >=8){
        cout << "Reprovado por Nota e Falta" << endl;
    }

    else if (nota_final>=5 && Faltas_total >=8){
         cout << "Aprovado por Nota" << endl;
    }

    else {
        cout << "Reprovado." << endl;
    }


     /* conceito */
    if( nota_final>=9 ){
        cout << "Conceito: A" <<  endl;
    }

    else if (nota_final>=7 && nota_final<9){
        cout << "Conceito: B" <<  endl;
    }

    else if (nota_final>=6 && nota_final<7){
        cout << "Conceito: C" << endl;
    }

    else if (nota_final>=5.5 && nota_final<6){

        cout << "Conceito: D" << endl;
    }

    else if (nota_final>=5 && nota_final<5.5) {

        cout << "Conceito: E" << endl;

    }

    else {
        cout << "Conceito: F" << endl;
    }









}
