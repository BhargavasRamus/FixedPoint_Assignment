
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int max(int l,int m){
    if(abs(l)>=abs(m)){
        return l;
    }
    else{
        return m;
    }
}

int count(float a){
    int c=(int)a;
    int i=0;
    while(c!=0)
    {
        c=c/2;
        i++;
    }
    return i;
}

int main()
{
    float a,b,c,e,f;
    int l,m,n,p,A,B,C;
    printf("enter a \n");
    scanf("%f",&a);
    printf("enter b \n");
    scanf("%f",&b);
    printf("enter the register size:");
    scanf("%d",&p);
    l=count(a);
    m=count(b);
    n=p-max(l,m);
    f=a+b;
    if(a*b>0){
    A=(round)(a*pow(2,n-2));
    B=(round)(b*pow(2,n-2));
    C=A+B;
    c=(float)(C/pow(2,n-2));
    }
    else{
       A=(round)(a*pow(2,n-1));
    B=(round)(b*pow(2,n-1));
    C=A+B;
    c=(float)(C/pow(2,n-1)); 
    }
    printf("a+b=%f ",f);
    e=c-f;

    printf("A=%d ",A);printf("B=%d ",B);printf("C=%d \n",C);
    printf("sum of a and b is %f with error %f",c,e);
    return 0;
}
