#include <math.h>
#include <iostream>

using namespace std;

int main()
{
//====================================================================================================================================
//DECLARAÇAO DE VARIAVEIS

    const int C = 6, L = 64; //COLUNAX X LINHAS
    const int EX = 15;//NÚMERO DE OPERAÇÕES
    bool P[L][C]; //MATRIZ DE ENTRADAS
    bool expressao[L][EX]; //MATRIZ DE OPERAÇÕES LÓGICAS

//===================================================================================================================================
//FALSIFICAR TODA A TABELA

for(int i = 0; i < L; i ++){
    for(int n = 0; n < C; n ++){
        P[i][n] = false;
    }
}

//===================================================================================================================================
//PREENCHER A TABELA VARIANDO

for (int j = 0; j < C; j ++){
    int varia = pow(2, j); //VARIAÇÃO MUDA DE ACORDO COM A COLUNA

    for(int i = 0; i < L; i ++){
//      p1 = t f t f t f (2^0)
//      p2 = t t f f t t (2^1)
        int aux = L;

        while(aux > 0 && i < L){ //LIMITE DE VEZES

            for(int z = 0; z < varia; z ++){
               // 2^K vezes de true
                P[i][j] = true;
                aux = aux - varia; //JÁ FOI COLOCADO 2^K DE TERMOS
                i ++; //MUDOU DE LINHA
            }

            for(int z = 0; z < varia; z ++){
               // 2^K vezes de false
                P[i][j] = false;
                aux = aux - varia; //JÁ FOI COLOCADO 2^K DE TERMOS
                i ++; //MUDOU DE LINHA
            }

        }

    }
}
//===================================================================================================================================
//EXPRESSÃO




//===================================================================================================================================
//MOSTRAR

    for(int i = 0; i < L; i ++){

        for(int n = 0; n < C; n ++){
                if(P[i][n]){//SE FOR VERDADEIRO
                cout << "T" << "\t";
            }

            else{
                cout << "F" << "\t";
            }
        }
        cout << endl;
    }


    return 0;
}
