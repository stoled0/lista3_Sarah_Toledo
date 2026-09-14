/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int vetor[3] = {10, 20, 30};
    printf("%d\n", vetor[1]);
    printf("%p", vetor[1]);
    return 0;
}

// o primeiro print retornou o vetor 20, devido ele sua posição 1. 
// E o segundo print retornou o endereço de memoria de onde o vetor está.