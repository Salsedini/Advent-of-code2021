#include <iostream>
#include <fstream>
#include <cmath>
#include <string>
using namespace std;

int ConvertirADecimal(char numbinario[11]){

    int numdecimal=0;
    for(int i=0;i<11;i++){

        if(numbinario[i]==49){
            numdecimal+=pow(2,10-i);
        }

    }

    return numdecimal;

}

int main()
{
    int contador=0;
    string cadena[1001];
    ifstream fe("fichero");
    do{
    
        fe >> cadena[contador];        
        contador++;

    } while (!fe.eof()); 
    fe.close();
    int num1;
    int num0;
    char binario[11];
    char gamma[11];

    for(int i=0;i<11;i++){

        num1=0;
        num0=0;

        for(int j=0;j<1000;j++){   

            if(cadena[j][i]==48){
                num0++;
            }
            else{
                num1++;
            }

            cout << "En la posición [" << j+1 << "] ["<< i+1 << "] he leído un " << cadena[j][i] << endl;
        }

        

        if(num0>num1){
            binario[i]=48;
        }
        else{
            binario[i]=49;
        }

    }
    
    for(int i=0;i<11;i++){

        if(binario[i]==48){
            gamma[i]=49;
        }
        else{
            gamma[i]=48;
        }

    }
    cout << "El número binario es ";
    for(int i=0;i<11;i++){

        cout << binario[i];

    }
    cout << endl;

    cout << "El número gamma es ";
    for(int i=0;i<11;i++){

        cout << gamma[i];

    }
    cout << endl;

    int decimal1=ConvertirADecimal(binario);
    int decimal2=ConvertirADecimal(gamma);
    cout<<"El primer decimal es "<<decimal1<<endl;
    cout<<"El segundo decimal es "<<decimal2<<endl;
    cout<<"El resultado es "<< (decimal1*decimal2)<<endl;
    
    return 0;
}