#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>


void draw(int n);

int main(int argc, char** argv) {

    // Algoritma Sorting angka secara MANUAL
    int angka[] = {5,3,1,8,4,0,6,7,2};
    for (int i = 0; i < sizeof(angka) / sizeof(int); i++) {
        if (angka[i] <= 0) {
            angka[i] = i;
        } else if (angka[i] > 0 && angka[i] <= 1) {
            angka[i] = i;
        } else if (angka[i] > 1 && angka[i] <= 2) {
            angka[i] = i;
        } else if (angka[i] > 2 && angka[i] <= 3) {
            angka[i] = i;
        } else if (angka[i] > 3 && angka[i] <= 4) {
            angka[i] = i;
        } else if (angka[i] > 4 && angka[i] <= 5) {
            angka[i] = i;
        } else if (angka[i] > 5 && angka[i] <= 6) {
            angka[i] = i;
        } else if (angka[i] > 6 && angka[i] <= 7) {
            angka[i] = i;
        } else if (angka[i] > 7 && angka[i] <= 8) {
            angka[i] = i;
        }

        printf("%i ", angka[i]);
        // printf("%i ", i);
    
    }

    printf("\n");

}


