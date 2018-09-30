#include <stdio.h>
#include <stdlib.h>
#include "util.h"

void print_array(float nums[], int len) {
    printf("[");
    for (int i = 0; i < len; i++) {
        if (i < len-1) {
            printf("%3.2f, ", nums[i]);
        } else {
            printf("%3.2f", nums[i]);
        }
        if (((i + 1) % 5 == 0) && (i != len - 1)) {
            printf("\n");
        }
    }
    printf("]\n");
}

void gen_array(float nums[], int len){
    time_t t;
    int a;
    float b;
    int i=0;
    srand((unsigned)time(&t));
    for(;i < len; i++)
    {
      a = 90 + rand()%10 ;
     //printf("%d\t",a);
      nums[i]  = a / 100.0;
     // printf("%3.2f\t\n",b);
    }

}
