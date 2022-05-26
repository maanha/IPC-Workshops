/*
*****************************************************************************
                          Workshop - #2 (P2)
Full Name  : - Harsh
Student ID#: 167194216
Email      : h39@myseneca.ca
Section    : NJJ

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
*****************************************************************************
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    printf("Set Shirt Prices\n");
    
    printf("================\n");

    float a,b,c;

    printf("Enter the price for a SMALL shirt: $");

    scanf("%f",&a);

    printf("Enter the price for a MEDIUM shirt: $");

    scanf("%f",&b);

    printf("Enter the price for a LARGE shirt: $");

    scanf("%f",&c);

    printf("\n");

    printf("Shirt Store Price List\n");

    printf("======================\n");

    printf("SMALL  : $%.2lf\n",a);

    printf("MEDIUM : $%.2lf\n",b);

    printf("LARGE  : $%.2lf\n\n",c);
    
    printf("Patty's shirt size is 'S'\n");

    printf("Number of shirts Patty is buying: ");

    int s;

    scanf("%d",&s);

    printf("\nTommy shirt size is 'L'\n");

    printf("Number of shirts Tommy is buying: ");

    int q;

    scanf("%d",&q);

    printf("\nSally's shirt size is 'M'\n");

    printf("Number of shirts Sally is buying: ");

    int n;

    scanf("%d",&n);

    printf("\nCustomer Size Price Qty Sub-Total       Tax     Total\n");

    printf("-------- ---- ----- --- --------- --------- ---------\n");

    float k;

    k = a*s;

    float u;

    u = 0.13001113585746102;

    float p;

    p =  u*k;

    float h;

    h = k + p;

    printf("Patty    S    %.2f   %d  %.4f   %.4f  %.4f\n",a,s,k,p,h);

    float i;

    i = b*n;

    float A = 0.1300111358746102;

    float j;

    j = A * i;

    float B = j - 0.0004 ;

    float C = B * 100;

    float D = (int)C; 

    float E = D/100;

    float v;

    v = i + E;

    printf("Sally    M    %.2f   %d  %.4f   %.4f  %.4f\n",b,n,i,E,v);

    float m;

    m = c*q;

    float e;

    e = u * m;

    float F = e + 0.0005;

    float g;

    g = m + F;

    printf("Tommy    L    %.2f   %d  %.4f   %.4f  %.4f\n",c,q,m,F,g);

    printf("-------- ---- ----- --- --------- --------- ---------\n");

    float x;

    x = k + i + m;

    float y;

    y = p + E + F;

    float z;

    z = h + v + g;

    printf("                         %.4f   %.4f  %.4f\n\n",x,y,z);
    
    printf("Daily retail sales represented by coins\n");

    printf("=======================================\n\n");

    printf("Sales EXCLUDING tax\n");

    printf("Coin     Qty   Balance\n");

    printf("-------- --- ---------\n");

    printf("              %.4f\n",x);

    int l ;
    
    l = (int)x;

    int o = l/2;

    float G = x - (o+o);

    printf("Toonies   %d   %.4f\n" ,o,G);

    int H = l%2;

    float I;I = G - H;

    printf("Loonies    %d    %.4f\n",H,I);

    int Am;

    Am = I * 100;

    int J ;
    
    J = (int)Am;

    int K; K = J/25;

    float L =  (Am - (K*25));

    float Bx = L/100;

    printf("Quarters   %d    %.4f\n", K,Bx);

    int M = 0;

    printf("Dimes      %d    %.4f\n",M,Bx);

    printf("Nickels    %d    %.4f\n",M,Bx);

    int N = Bx * 100;

    float FG; FG = N*0.01;

    float O = Bx - FG;

    printf("Pennies    %d    %.4f\n\n",N,O);

    int P = s + q + n;

    printf("Average cost/shirt: $%.4f\n\n",x/P);

    printf("Sales INCLUDING tax\n");

    printf("Coin     Qty   Balance\n");

    printf("-------- --- ---------\n");

    printf("              %.4f\n",z);

    int Q ; Q = (int)z;

    int R = Q/2;

    float S = z - (R +R);

    printf("Toonies  %d    %.4f\n",R,S);

    int T = Q%2;

    float U = S - T;

    printf("Loonies    %d    %.4f\n",T,U);

    int Delisha;

    Delisha = U * 100;

    int V; V = (int)Delisha;

    int W ; W = V/25;

    float X = U - (W*0.25);

    printf("Quarters   %d    %.4f\n",W,X);

    int Y = 0;

    printf("Dimes      %d    %.4f\n",Y,X);

    int Z = 57%25;

    int Aa = Z/5;

    float Ab = X - (Aa*0.05);

    printf("Nickles    %d    %.4f\n",Aa,Ab);

    int Ae = Z%5;
    
    float Af = Ae*0.01;

    float PI = Ab - Af;

    printf("Pennies    %d    %.4f\n\n",Ae,PI);

    printf("Average cost/shirt: $%.4f\n",z/P);


    return 0;
}
