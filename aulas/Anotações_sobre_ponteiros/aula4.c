/* Os ponteiros são versáteis, permitindo 
 aos programadores criar algoritmos complexos e modernos. */ 

#include <stdlib.h>
int main(){
    float number;
    int * pointer;
    pointer = &number;
    pointer = (int*) &number;
}