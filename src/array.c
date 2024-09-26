#include "stdio.h"

int main()
{
    double prices[] = {5.0, 10.0, 25.0, 20.5, 20.0};
    
    // printf("%ld", sizeof(prices)); // 40 = 8(bits) * 5
    
    // for(int i = 0; i < 5; i++){ This would work but we would also need to change the 5
    for(int i = 0; i < sizeof(prices)/sizeof(prices[0]); i++){ // 40 / 8 = 5 
        
        printf("%.2lf\n", prices[i]);
    }

    return 0;
}
