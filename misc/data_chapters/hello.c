#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* int main() */
/* { */
/*     int d = 200 * 300 * 400 * 500; */
/*     float f = 200.0 * 300 * 400 * 500; */
/*     float a = (3.14 + 1e20) - 1e20; */
/*     float b = 3.14 + (1e20 - 1e20); */
/*     printf("num: %d\n", d); */
/*     printf("num: %f\n", f); */
/*     printf("float lower: %f\n", a); */
/*     printf("float lower: %f\n", b); */
/*     printf("hello, world\n"); */
/*     return 0; */
/* } */

/* 0x39A7F8 */
/* 3    9     A   7    F    8 */
/* 0011 1001 1010 0111 1111 1000 */ 

/* C   9     7    B */
/* 1100 1001 0111 1011 */
/* 0xC97B */

/* 0xD5E4C */
/* 1101 0101 1110 0100 1100 */

/* 0x26E7B5 */
/* 0010 0110 1110 0111 1011 0101 */

/* 9 512 0x200 */
/* 19 524288 0x80000 */
/* 14 16384 0x4000 */
/* 16 65536 0x10000 */
/* 17 131072 0x20000 */
/* 5 32 0x20 */
/* 7 128 0x80 */

/* 0 0000 0000 0x00 */
/* 167 10100111 0xA7 */
/* 62 00111110 0x3E */
/* 188 10111100 0xBC */
/* 55 00110111 0x37 */
/* 136 10001000 0x88 */
/* 243 11110011 0xF3 */
/* 82 01010010 0x52 */
/* 172 10101100 0xAC */
/* 231 11100111 0xE7 */ 

/* 0x00359141 */
/* 0000 0000 0011 0101 1001 0001 0100 0001 */

/* 0x4A564504 */
/* 0100 1010 0101 0110 0100 0101 0000 0100 */ 


/* 21 */ 
/* 00000000001 101011001000101000001 */
/*   010010100 101011001000101000001 00 */ 

/* 616263646566 */

/* a 01101001 */
/* b 01010101 */

/* a  01101001 */
/* ~a 10010110 */

/* b  01010101 */
/* ~b 10101010 */


/*     a 01101001 */
/*     b 01010101 */
/* a & b 01000001 */ 

/*     a 01101001 */
/*     b 01010101 */
/* a | b 01111101 */

/*     a 01101001 */
/*     b 01010101 */
/* a ^ b 00111100 */

/* black - white */
/* blue - yellow */
/* green - magenta */
/* cyan - red */

/* blue | green = cyan */
/* yellow & cyan = green */
/* red ^ magenta = blue */

/* a b */
/* a a^b */
/* a^(a^b) a^b */
/* b b^(a^b) */ 

/* b a */

/* arr[(2k+1)/2] and arr[(2k+1)/2] */
/* because x ^ x = 0 */

/* x & 0xFF */

/* (~x & ~0xFF) & (0xFF & x) */
/* x ^ ~0xFF */

/* x | 0xFF */

/* 0x66 & 0x39 */
/* 0110 0110 */
/* 0011 1001 */

/* 0010 0000 */

/* 0x20 */
/* 0x66 && 0x39 */
/* 0x01 && 0x01 */
/* 0x01 */

/* 0x66 | 0x39 */
/* 0110 0110 */
/* 0011 1001 */
/* 0111 1111 */
/* 0x7F */

/* 0x01 || 0x01 */
/* 0x01 */

/* ~x | ~y */
/* 1001 1001 */
/* 1100 0110 */

/* 1101 1111 */
/* 0xDF */

/* !x || !y */
/* 0x00 || 0x00 */
/* 0x00 */

/* x & !y */
/* 0110 0110 */
/* 0000 0000 */

/* 0x00 */

/* x && ~y */
/* 0x01 */
/* 0x01 */

/* 0x01 */

/* x == y */

/* 0110 0110 */
/* 0011 1001 */
/* 0010 0000 */


/* (!((x & y) ^ x) && 1) */
/* !(x ^ y) */

            /* x        x << 3           logical x >> 2     Arithmetic x >> 2 */
/* 0xc3   1100 0011    0001 1000  0x18   0011 0000 0x30     1111 0000 0xF0 */    
/* 0x75   0111 0101    1010 1000  0xa8   0001 1101 0x1d     0001 1101 0x1d */
/* 0x87   1000 0111    0011 1000  0x38   0010 0001 0x21     1110 0001 0xe1 */
/* 0x66   0110 0110    0011 0000  0x30   0001 1001 0x19     0001 1001 0x19 */
/* 0xe    1110   2^3 2^2 2^1 0 = 14     -2^3 2^2 2^1 0 = -2 */

/* 0x0    0000   0 + 0 + 0 + 0 = 0    0 0 0 0 = 0 */

/* 0x5    0101   0 2^2 0 2^0 = 5      0 4 0 1 = 5 */

/* 0x8    1000   2^3 0 0 0 = 8        -2^3 0 0 0 = -8 */

/* 0xD    1101   2^3 2^2 0 2^0 = 13   -2^3 2^2 0 2^0 = -3 */

/* 0xF    1111   2^3 2^2 2^1 2^0 = 15 -2^3 2^2 2^1 2^0 = -1 */ 

/* 0x2e0 0010 1110 0000 2^9 2^7 2^6 2^5= 512 + 128 + 64 + 32 = 736 */

/* -0x58 0101 1000 2^6 2^4 2^3 = 64 16 8 = -88 */

/* 0x28 0010 1000 2^5 2^3 = 32 8 = 40 */

/* -0x30 0011 0000 2^5 2^4 = 32 16 = -48 */

/* 0x78 0111 1000 2^6 2^5 2^4 2^3 = 64 32 16 8 = 120 */

/* 0x88 1000 1000 2^7 2^3 = 128 8 = 136 */

/* 0x1f8 0001 1111 1000 2^8 2^7 2^6 2^5 2^4 2^3 = 256 128 64 32 16 8 = 504 */ 

/* 0 */

/* 0x8 1000 8 */

/* 0xc0 1100 0000 2^7 2^6 = 128 64 = 192 */

/* 0 */ 

/* -0x48 0100 1000 2^6 2^3 = 64 8 = -72 */

/* -8 1000 8 */
/* -3 1101 13 */
/* -2 1110 14 */
/* -1 1111 15 */
/* 0  0000 0 */
/* 5  0101 5 */

/* unsigned 1 */
/* signed 1 */
/* unsigned 0 */
/* signed 1 */
/* unsigned 1 */

/* -8 + 3 = -5 */
/* -16 + 11 = -5 */
/* -32 + 27 = -5 */

/* int fun1(unsigned word) { */
/*     return (int) ((word << 24) >> 24); */
/* } */

/* int fun2(unsigned word) { */
/*     return ((int) word << 24) >> 24; */
/* } */

/* 0x00000076  0x00000076  0x00000076 */
/* 0x87654321  0x00000021  0x00000021 */
/* 0x000000c9  0x000000c9  0xffffffc9 */
/* 0xedcba987  0x00000087  0xffffff87 */

/* extracts the 8 bits, creates the arithmetically accurate signed version */
/* arithmetic and logical zero filling/sign-extending */

/* extracts the lower-order 8 bits from 0 to 255 */
/* extracts the lower-order 8 bits but keeps them in the right sign from -128 to 127 */

/* 0 0    0 0     0 0 */
/* 2 2    2 2     2 2 */
/* 9 1    9 1     -7 1 */
/* b 3    11 3    -5 3 */
/* f 7    15 7    -1 -1 */


/* WARNING: This function is buggy */
/* float sum_elements(const float a[], int length) { // better size_t */
/*     int i; */
/*     float result = 0; */

/*     for (i = 0; i <= length - 1; i++) */
/*         result += a[i]; */
/*     return result; */
/* } */
// length is unsigned so 0 - 1 is unsigned max value or undefined
// if it is a memory error it's likely a index out of bounds
// the code can be corrected by having length be size_t
// or make i < length

/* #include<string.h> */
/* /1* WARNING: This function is buggy *1/ */
/* int strlonger(char *s, char *t) { */
/*     return (int)strlen(s) - (int)strlen(t) > 0; */
/* } */

//a. both are unsigned and when s is less than t then it overflows and 
//instead of becoming a negative number it rolls around to the max number
//c. cast both to int?
//okay the better answer is strlen(s) > strlen(t);

// whether arguments can be added without overflow
/* int uadd_ok(unsigned x, unsigned y){ */
/*     return (x + y) >= x; */
/* } */

/* 0   0   0  0 */
/* 5   5   11 B */
/* 8   8   8  8 */
/* D   13  3  3 */
/* F   15  1  1 */

/* -12    -15   -27    5 */
/* 10100  10001 100101 00101  1 */

/* -8      -8    -16    -16 */
/* 11000  11000  110000 10000 2 */

/* -9    8      -1     -1 */
/* 10111 01000  111111 11111 2 */

/* 2      5      7      7 */
/* 00010  00101  00111  00111 */

/* 12    4      16      -16 */ 
/* 01100 00100  010000  10000 */

// possible add without overflow?
/* int tadd_ok(int x, int y){ */
/*     int sum = x + y; */
/*     return !((x > 0 && y > 0 && sum <= 0) || (x < 0 && y < 0 && sum >= 0)); */
/* } */

/* int tsub_ok(int x, int y){ */
/*     return tadd_ok(x, -y); */
/* } */

// 0 0 0
// 0 -1 1
// 0 -8 8
// -8 needs to be converted to +8 which doesn't exist in two's complement for 4w
// so when converted it becomes -8 and -8 - -8 should be 0 and true but -8 + -8 is -16 and overflowing and false
// 7 0  7
// 9 -2 7
// 4 -3 7
// 4 3  1
// -4 -4 0
// -4 4 -8


/* 0  0  0  0 */

/* 5  5  -5 B */
/* 8  -8 -8 8 */
/* D  -3 3  3 */
/* F  -1 1  1 */

/* 0   0   0  0 */
/* 5   5   11 B */
/* 8   8   8  8 */
/* D   13  3  3 */
/* F   15  1  1 */


/* 4   100  5  101  20  10100   4  100 */
/* -4  100 -3  101  12  01100  -4  100 */
/* 2   010  7  111  14  01110   6  110 */
/* 2   010 -1  111  -2  11110  -2  110 */
/* 6   110  6  110  36  100100  4  100 */
/* -2  110 -2  110  4   000100 -4  100 */
// int p = x * y;
// return !x || p/x == y;
/* p is the res, q = p/x */


/* 1. x * y = p + t*2^w, where t != 0 iff p overflows */

/* in two's complement, x * y = x * y (mod 2^w) */
/* hence x * y = (p + t*2^w) mod 2^w */
/* = p mod 2^w + 0 */
/* = p + 0 */
/* if the length of p-> is greater than w then */ 
/* x * y = p+t*2^w iff p overflows */

/* 2. p = x * q + r where |r| < |x| */
/* q is the number of times x fits into p, */
/* if |r| < |x| then q could be greater */ 
/* thus making |r| less than |x| again */

/* 3. q = y iff r = t = 0 */

/* p/x is integer division, it has a potential loss of information. */
/* hence */ 
/* q = p/x + p%x */
/* since x * y = p */
/* x * p/x + p%x = p */
/* this would only be true if p % x = 0 */

// checks whether x * y will overflow
int tmult_ok (int x, int y){
    int64_t z = (int64_t) x * (int64_t) y;
    return z >= -(int64_t)0x80000000 && z < (int64_t)0x80000000;
}

int tmult_okv2(int x, int y){
    int64_t pll = (int64_t) x*y;
    return pll == (int) pll;
}

/* Illustration of code vulnerability similar to
   that found in
 * Sun's XDR library.
 */
void* copy_elements(void *ele_src[], int ele_cnt,
        size_t ele_size) {
    /*
     * Allocate buffer for ele_cnt objects, each
     of ele_size bytes
     * and copy from locations designated by
     ele_src
     */

    /* uint64_t asize = ele_cnt * (uint64_t) ele_size; */
    /* void *result = malloc(asize); */
    void *result = malloc(ele_cnt * ele_size);
    if (result == NULL)
        /* malloc failed */
        return NULL;
    void *next = result;
    int i;
    for (i = 0; i < ele_cnt; i++) {
        /* Copy object i to destination */
        memcpy(next, ele_src[i], ele_size);
        /* Move pointer to next memory
           region */
        next += ele_size;
    }
    return result;
}

// I don't think so since malloc is expecting a size_t so it will be converted anyways
// if overflow then return NULL? or call malloc twice?
/* uint64_t required_size = ele_cnt*(uint64_t) ele_size; */
/* size_t request_size = (size_t) required_size; */
/* if (required_size != request_size) */
/*     return NULL; */
/* void *result = malloc(request_size); */
/* if (result == NULL) */
/*     return NULL; */


/* a * 1 = a << 0 + 0 */
/* a * 2 = a << 1 + 0 */
/* a * 3 = a << 1 + a */
/* a * 4 = a << 2 + 0 */
/* a * 5 = a << 2 + a */
/* 1,2,3,4,5,8,9 */
/* 2^k and 2^k + 1 */

/* (x << (n + 1) - (x << m) */
/*  -(x << m) */


/* 00100 * 00110 = 11000 */
/* 00100 << 3 = 100000 */
/* 100000 - 00100 << 1 = */
/* 100000 - 001000 = 011000 */

/* 000100 * 111010 = 101000 */
/* -000100 = 111011 + 000001 */
/* = 111100 */

/* x * 111110 * 000011 */ 

/* 000100 << 1 = 001000 */
/* 001000 + 000100 = 001100 */
/* -001100 = 110011 + 1 */
/* = 110100 */
/* 110100 << 1 = 101000 */

/* 55 11 5 */
/* 0101 */
/* ((x << 2) + x) */
/* 1011 */
/* ((x << 3) + (x << 2) + x) */

/* 0000010 * */
/* 0110111 = */ 
/* 1101110 = */ 

/* 0000010 << 3 = */
/* 0010000 */

/* 0010000 + */ 
/* 0000010 = */ 
/* 0010010 */

/* 0010010 << 6 = */
/*     111110 */
/* 10010000000 - */ 
/* 00000010010 */
/* 10001101110 */ 








/* 6  2  1  x << (2+1) - (x << 1) */
/* 31 1  1  (x << 5) - x */
/* -6 2  1  (-((x << 1) + x) << 1) */
/*     // -2x - 8x */

/* 55 2  2  ((x << 6) - (x << 3) - x) */

/* 11x + 5x */
/* 64x - 9x */
/* x << 6 and x << 3 + x */

// the compiler should choose based on which is more optimal
// if there are long runs of 1 then its a good choice.
//

// int is assumed to be 32 bits ong and two's complement, right shift is arithmetic
/* int div16(int x){ */
/*     int parity = x >> 31; */
/*     int res = (x + (parity & 15)) >> 4; */
/*     return res; */
/* } */

/* #define M /1* Mystery number 1 *1/ */
/* #define N /1* Mystery number 2 *1/ */
/* int arith(int x, int y) { */
/*     int result = 0; */
/*     result = x*M + y/N; /1* M and N are mystery */
/*                            numbers. *1/ */
/*     return result; */
/* } */

/* /1* Translation of assembly code for arith *1/ */
/* int optarith(int x, int y) { */
/*     int t = x; */
/*     x <<= 5; */
/*     x-=t; */
/*     if (y < 0) y += 7; */
/*     y >>= 3; /1* Arithmetic shift *1/ */
/*     return x+y; */
/* } */


/* M is 31 */
/* N is 2^3 which is 8 */


//int is 32 bits long, two's complement, right shift is arithmetic for signed, logical for unsigned

/* int x = foo(); /1* Arbitrary value *1/ */
/* int y = bar(); /1* Arbitrary value *1/ */

/* unsigned ux = x; */
/* unsigned uy = y; */

/* (x > 0) | | (x-1 < 0) */ 
/*     0 == 0 but -1 < 0 */ 
/*     int_min < 0 and int_min - 1 > 0 */

/* (x & 7) != 7 | | (x<<29 < 0) */
/*     0111          mult by 2^29 mod 32 is negative */
/*     8 is 1000 */
/*     1000 & */
/*     0111 */ 
/*     0000 is != 7 nor */ 
/*     0x00000008 << 29 is 0x00000000 */
/*     0 is not < 0 */
/* 16 */ 
/* 10000 & */
/* 00111 */
/* 00000 != 7 */

/* 7 << 29 is 0 */
/* 0000 0000 0000 0000 0000 0000 0000 0111 */
/* 1110 0000 0000 0000 0000 0000 0000 0000 */


/* (x * x) >= 0 */
/* int_max */ 

/* x < 0 | | -x <= 0 */
/* true */


/* x > 0 | | -x >= 0 */
/* int_min will be int_min when negated */

/* x+y == uy+ux */
/* int_max 1 = int_min */
/* // They are not numerically the same, but signed will be converted to unsigned */ 
/* // and then they will be the same. */

/* 0111 + 1 = 1000 */

/* x = -3 */
/* y = 4 */
/* x*~y + uy*ux == -x */
/* 1101 * ~0100 + 1101*0100 */

/* 1..1101 * */ 
/* 1..1011 = */ 
/* 0..01111 (15) */

/* 1101 * 0100 = 1..10100 (-12) */
/* 0xfffffff4 + 0x0000000f = */ 
/* 1..10100 */
/* 0..01111 */
/* 0..00011 */

/* ~y = -y - 1 */
/* x * (-y -1) */
/* x * -y -x +x * y = -x */
