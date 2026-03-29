#include <stdio.h>
#include <omp.c>
int main(){
#pragma omp parallel num_threads(69)
    printf("Hello Jomana");
    return 1;
}
