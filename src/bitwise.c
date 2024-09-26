#include <stdio.h>

int main(){
    int x = 6;  // 00000110
    int y = 12; // 00001100
    int z = 0;  // 00000000

    z = x & y;  // 00000100 AND 4
    
    z = x | y;  // 00001110 OR 14

    z = x ^ y;  // 00001010 XOR 10

    z = x << 1; // 00001100 LSHIFT*1 12

    z = x << 2; // 00011000 LSHIFT*2 24

    z = x >> 1; // 00000110 RSHIFT*1 3 

    z = x >> 2; // 00000001 RSHIFT*2 1 

    return 0;
}
