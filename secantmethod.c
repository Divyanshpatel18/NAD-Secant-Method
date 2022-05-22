#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>

/* Defining equation to be solved. Change this equation to solve another problem. */
float f(float x)
{   return (x*x*x - 2*x - 5);
}
void main()
{   float a,b, m, f0, f1, f2, e;
    int i= 1, N;
    clrscr();      /* Inputs */
    printf("\nEnter initial guesses:\n");
    scanf("%f%f", &a, &b);
    printf("Enter tolerable error:\n");
    scanf("%f", &e);
    printf("Enter maximum iteration:\n");
    scanf("%d", &N);           /* Implementing Secant Method */    
      printf("\ni\t\ta\t\tb\t\tm\t\tf(m)\n");
    do  {
         if(f(a) == f(b))       
         { printf("Mathematical Error");
            exit(0);
         }
        m=(a*f(b)-b*f(a))/(f(b)-f(a));
            
             printf("%d\t\t%f\t%f\t%f\t%f\n",i, a,b,m,f(m));
             a=b;
             b=m;
            
             
             i = i + 1;
        if(i > N)          {
        printf("Not Convergent.");
            exit(0);
        }
    }
    while(fabs(f(m))>e);
    printf("\nRoot is: %f",m);
    getch();
}