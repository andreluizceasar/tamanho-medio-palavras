#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;

int main(){
    int j;
    float tamPalavr = 0;
    float numPalavr = 0;
    float tamPalvrLocal = 0;
    float tamMedio;

    string prob;
    getline(cin, prob);

    for(int i = 0;i<prob.length();i++){
        tamPalvrLocal = 0;

        for(j=i; isalpha(prob[j]) && j<prob.length();j++){
            tamPalvrLocal++;
        }

        if(prob[j]==' '||j==prob.length()&&isalpha(prob[j-1])){
            tamPalavr += tamPalvrLocal;
            numPalavr++;
        }else{
            while(prob[j]!=' ' && j<prob.length()){
                j++;
            }
        }
        i=j;
    }
    cout << "Letras: " <<tamPalavr << "  "<< "Palavras: " << numPalavr << endl;

    if(numPalavr!=0)
        tamMedio = tamPalavr/numPalavr;

    cout << "Tamanho Medio: " << tamMedio << endl;

}

