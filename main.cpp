#include <iostream>

using namespace std;

int main()
{
//====================================================================================================================================
    //DECLARAÇAO DE VARIAVEIS

    const int L = 64, C = 6;
    bool P[L][C];
    int cont2 = 0, cont3 = 0, cont4 = 0, cont5 = 0;

//===================================================================================================================================

    for(int i = 0; i < L; i++){

        cont2++; // de 0 a 32 -> de 0 a 15 = true
        cont3++; // de 0 a 16 -> de 0 a 7 = true
        cont4++; // de 0 a 8 -> de 0 a 3 = true
        cont5++; // de 0 a 4 -> 0 e 1 = true

        for(int j = 0; j < C; j++){

            //P1
            if(j == 0){

                if(i < 32) P[i][j] = true;

                else P[i][j] = false;

            }

            //P2
            if(j == 1){

                if(cont2 < 16) P[i][j] = true;

                else P[i][j] = false;

                if(cont2 == 32) cont2 = 0;

            }

            //P3
            if(j == 2){

                if(cont3 < 8) P[i][j] = true;

                else P[i][j] = false;

                if(cont3 == 16) cont3 = 0;

            }

            //P4
            if(j == 3){

                if(cont4 < 3) P[i][j] = true;

                else P[i][j] = false;

                if(cont4 == 8) cont4 = 0;

            }

            //P5
            if(j == 4){

                if(cont4 < 3) P[i][j] = true;

                else P[i][j] = false;

                if(cont4 == 4) cont4 = 0;

            }


            //P6
            if(j == 5){
                if(i % 2 == 0) P[i][j] = true;
                else P[i][j] = false;

            }

        }

    }


    for(int i = 0; i < L; i++){

        for(int j = 0; j < C; j++){

            cout << P[i][j] << "\t";
        }

        cout << "\n";
    }

    return 0;
}
