#include <stdio.h>
#include <stdlib.h>

double funtion(double x);

int main()
{
   double x1 = -10, x2 = 10;

   while(x2 - x1 > 1e-6)
   {
       if(funtion((x1+x2)/2) * funtion(x1) > 0){
            x1 = (x1+x2)/2;
       }else if(funtion((x1+x2)/2) * funtion(x1) < 0){
            x2 = (x1+x2)/2;
       }else{
           x1 = (x1+x2)/2;
       }
   }

   printf("%f", x1);
   return 0;
}

double funtion(double x)
{
    return 2*x*x*x-4*x*x+3*x-6;
}
