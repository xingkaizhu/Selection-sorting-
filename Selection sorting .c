#include <stdio.h>
int main ()
{int a,t, i,j,k,h;
scanf("%d",&a);
int b[30];
for(i=0;i<a;i++)
{scanf("%d",&b[i]);

}
for(j=0;j<a;j++)
{   t=j;
for(i=j;i<a;i++)
{ if(b[i]<b[t])
  {  t=i;
  }
}
    k=b[j];
    b[j]=b[t];
    b[t]=k;
    if (j<a-1)
    {for (h=0;h<a;h++)
    printf("%d ",b[h]);
    printf("\n");
    
	
}


}		
	return 0;
}
