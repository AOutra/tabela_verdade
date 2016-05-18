#include <iostream>
#include <stdlib.h>

using namespace std;



int main()
{
    //DECLARAÇÃO DO TIPO DE PROPOSIÇÃO
    bool P1 = true;
    bool P2 = true;
    bool P3 = true;
    bool P4 = true;
    bool P5 = true;
    bool P6 = true;

    //EXTERNAS
    bool QA;
    bool QB;


    //EXPRESSÃO

    //Primeiro () - topo
    if (P1){
        if(P2 || P3){
            QA = true;
        }
        else{
            QA = false;
        }
    }
    else{
        if(P3 || P4){
            QA = true;
        }
        else{
            QA = false;
        }
    }

    //Segundo () --> Após IFF
    if(P3){
        //NEGAR P6 - IF'S EXPLÍCITOS
        if(P6 == true){
            P6 = false;
        }
        if(P6 == false){
            P6 = true;
        }
    }
    else{
        if(P4){

        }
    }






    return 0;
}
