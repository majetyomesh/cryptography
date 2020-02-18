#include <stdio.h>
#include <string.h>

int main(void)
{
    long int p,q,e,n,inv,s=0,d=1,C[100],M;
    char m[100];
    unsigned long int c;
    int i,j,t;
    printf("Enter the value of p and q: ");
    scanf("%ld%ld",&p,&q);
    n=p*q;
    inv=(p-1)*(q-1);
    printf("\nEnter the e value: ");
    scanf("%ld",&e);
    do
    {
                   s=(d*e)%inv;
                   d++;
    }while(s!=1);
    d=d-1;
    printf("\nEnter the message to encrypt:");
scanf("%[^\n]", &m);
   
    for(j=0;j<strlen(m);j++)
    {
                            m[j]=tolower(m[j]);
                            t=m[j]-96;
                            c=1;
                            for(i=0;i<e;i++)
                            c=c*t%n;
                            c=c%n;
                            printf("%ld ",c);
    }
    printf("\n\nEnter encrypted message to decrpyt :\n");
    for(i=0;i<strlen(m);i++)
    scanf("%ld",&C[i]);
    printf("\n\nDecrypted (original) message: ");
    for (p=2;p<100;p++)
{
   for (q=2;q<100;q++)
  {
     n=p*q;
     inv=(p-1)*(q-1);
     for (e=2;e<100;e++)
     {
         do
         {
                   s=(d*e)%inv;
                   d++;
         }while(s!=1);
         d=d-1;
         for(j=0;j<strlen(m);j++)
         {
                            M=1;
                            for(i=0;i<d;i++)
                            M=M*C[j]%n;
                            M=M%n;
                            M=M+96;
                            C[j]=M;
         }
         if((strcmp(m, words)) == 0) //words is the 2d array you mentioned.
         printf("p is %d, q is %d, e is %d",p,q,e);
     }
  }
}
    getch();
    return 0;
}
