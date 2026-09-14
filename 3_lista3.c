/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int v[10];
    for(int i = 0; i < 10; i++) {
        *(v + i) = i + 1;
        printf("%d ", *(v + i));
    }    
    return 0;
}
    
    
