#include <stdio.h>
#include <stdlib.h>
/*0,1,1,2,3,5,8...*/
int main()
{ int i,n,f,s,sum;
    printf("Enter no. of terms:");
    scanf("%d,",&n);
    for(i=s=1,f=0;i<=n;i++)
        {
            sum=f+s;
        printf("%d,",s);
    f=s;
    s=sum;
        }
        printf("\b ");
    getch();
    return 0;
}
