#include<stdio.h>
#include<math.h>
void main()
{
    float L1,L2,G1,G2,D;
    const float PI = 3.141592;
    printf("Enter latitude(L1, L2)\n");
    scanf("%f%f", &L1, &L2);
    printf("Enter longitude(G1, G2)\n");
    scanf("%f%f", &G1, &G2);
    L1 = L1 * ( PI / 180.0 );  /* Degrees To Radian */
    L2 = L2 * ( PI / 180.0 );
    G1 = G1 * ( PI / 180.0 );
    G2 = G2 * ( PI / 180.0 );
    D = 3963 * acos( sin(L1) * sin(L2) + cos(L1) * cos(L2) * cos(G2 - G1) );  /*Calculation */
    printf("Distance in nautical miles is %f\n", D);
}
