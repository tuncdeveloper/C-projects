#include<stdio.h>
int SP=-1;
void Push(int dizi[],int a)
{
   if (SP<10)
    {
      SP++;
      dizi[SP]=a;
    }
}
int Pop(int dizi[])

{
  if(SP>=0)
    {
       int gonder=dizi[SP];
       SP--;
       return gonder;
    }
}

Listele(int dizi[])
{
 for(int i=0; i<=SP;i++)
   printf(" %d",dizi[i]);

}
int main()
{
   int yigin[10];

   Push(yigin,20);
   Push(yigin,30);
   Push(yigin,10);
   Push(yigin,2);
   Push(yigin,25);
   Listele(yigin);
   int a=Pop(yigin);
   printf("\n");
   Listele(yigin);
}

//____________________
