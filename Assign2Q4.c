#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
double x=5;
for(int i=0;i<50;i++){
  x = x-(((pow(x,3)-x-1)/(3*pow(x,2)-1);
}
printf("%lf\n",x);
}
