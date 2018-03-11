#include<stdio.h>
int main()
{
    char n;
    int i=1;
    while(scanf("%c",&n),n!='#')
    {
        getchar();
        printf("case %d:\n",i);
        int a,b,k;
        for(a='A';a<=n;a++)
        {
            for(b=1;b<=a-'A';b++)
            {
                printf(" ");
            }
            for(b=1,k='A';b<=n-a;b++)
            {
                printf("%c",k);
                k+=1;
            }
            for(b=1,k=n-a+'A';b<=n-a+1;b++,k--)
            {
                printf("%c",k);
            }
            printf("\n");
        }
        i++;
    }
    return 0;
}

