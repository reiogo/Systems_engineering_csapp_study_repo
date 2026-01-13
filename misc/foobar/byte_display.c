#include<stdio.h>

typedef unsigned char * byte_pointer;

void show_bytes(byte_pointer start, size_t len){
    int i;
    for (i = 0; i < len; i ++){
        printf("%.2x", start[i]);
    }
    printf("\n");
}

void show_int(int x) {
    show_bytes((byte_pointer) &x, sizeof(int));
}

void show_float(float x){
    show_bytes((byte_pointer) &x, sizeof(float));
}

void show_pointer(void *x) {
    show_bytes((byte_pointer) &x, sizeof(void *));
}

void test_show_bytes(int val){
    int ival = val; 
    float fval = (float) ival;
    int *pval = &ival;
    show_int(ival);
    show_float(fval);
    show_pointer(pval);
}

void inplace_swap(int *x, int *y){
    /* if (*x == *y) return; */
    *y = *x ^ *y;
    *x = *x ^ *y;
    *y = *x ^ *y;
}

void reverse_array(int a[], int cnt) {
    int first, last;
    for (first = 0, last = cnt-1;
            first < last;
            first++, last--)
        inplace_swap(&a[first], &a[last]);
}

// Declare bis and bic
int bis(int x, int m){
    return x | m;
}
int bic(int x, int m){
    return x & ~m;
}

//compute x | y using calls to bis and bic
int bool_or(int x, int y) {
    int result = bis(x,y);
    return result;
}

//compute x^y using only calls to bis and bic
int bool_xor(int x, int y) {
    int result = bis(bic(x,y), bic(y,x));
    return result;
}


int main(){
    /* show_bytes((byte_pointer) "12345",6); */
    /* int arr[5] = {1,2,3,4,5}; */
    /* reverse_array(arr, 5); */
    /* printf("\n"); */

    /* for (int i = 0; i < 5; i++) */
    /*     printf("%d", arr[i]); */
    // 1000
    // 1101
    // 0101
    // 1001
    // 0100
    // 0000
    // 
    // 1001;
    int x = 9;
    // 0101
    int m = 5;
    // 1100 -> 12
    int res = bool_xor(x,m);
    printf("%d\n", res);


    return 0;
}
