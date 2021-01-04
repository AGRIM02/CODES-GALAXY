
#include <stdio.h>

int main()
{
   int x = 0,y,z,u,v;
   printf("\nquestion 1.:\n1.\n2.\n3.\n4.\n");
   printf("your response:");
   scanf("%d",&x);
   if(x==2)
    {
        x = 1;
        y = x;

    }
    else
    {
        x = 0;
        y = 0;
    }



    printf("\nquestion 2.:\n1.\n2.\n3.\n4.\n");
    printf("your response:");
    scanf("%d",&x);
   if(x==4)
    {
        y++;
        z = y;

    }
    else
    {
        z = y+0;
    }



   printf("\nquestion 3.:\n1.\n2.\n3.\n4.\n");
   printf("your response:");
   scanf("%d",&x);
   if(x==3)
    {
        z++;
        u = z;

    }
    else
    {
        u = z+0;
    }



   printf("\nquestion 4.:\n1.\n2.\n3.\n4.\n");
   printf("your response:");
   scanf("%d",&x);
   if(x==2)
    {
        u++;
        v = u;

    }
    else
    {
        v = u+0;
    }


   printf("\nquestion 5.:\n1.\n2.\n3.\n4.\n");
   printf("your response:");
   scanf("%d",&x);
   if(x==1)
    {
        v++;

    }
    else
    {
        v = v+0;
    }

    printf("\n\t ____________YOUR SCORE IS:%d___________\t\n",v);
    return 0;
}
