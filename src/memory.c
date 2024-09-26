#include <stdio.h>

int main(){
    // Memory = An array of bytes within RAM
    // Memory block = A single unit (byte) within memory used to hold some value
    // Memory address = The address of where a memory block is located
    
    char a = 'X'; 
    char b = 'Y';
    char c = 'Z';

    printf("%d bytes\n", (int) sizeof(a));
    printf("%d bytes\n", (int) sizeof(b));
    printf("%d bytes\n", (int) sizeof(c));

    // 1 bytes
    // 1 bytes
    // 1 bytes

    printf("%p\n", &a);
    printf("%p\n", &b);
    printf("%p\n", &c);

    // 0x7ffdad02bec5
    // 0x7ffdad02bec6
    // 0x7ffdad02bec7
    // Notice how they are 1 byte apart

    short d = 'X'; 
    short e = 'Y';
    short f = 'Z';

    printf("%d bytes\n", (int) sizeof(d));
    printf("%d bytes\n", (int) sizeof(e));
    printf("%d bytes\n", (int) sizeof(f));

    // 2 bytes
    // 2 bytes
    // 2 bytes

    printf("%p\n", &d);
    printf("%p\n", &e);
    printf("%p\n", &f);

    // 0x7ffcacf081a2
    // 0x7ffcacf081a4
    // 0x7ffcacf081a6
    // Notice how they are 2 bytes apart
    //
    char g;
    char h[2];
    float j[10];

    printf("%d\n", (int) sizeof(g)); // 1 byte
    printf("%d\n", (int) sizeof(h)); // 2 bytes: char (1 byte) * array length (2)
    printf("%d\n", (int) sizeof(j)); // 40 bytes: float (4 bytes) * array length (10)
    

}
