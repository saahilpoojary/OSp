#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,req[50],mov=0,cp,n;
    printf("Enter current position\n");
    scanf("%d",&cp);
    printf("Enter number of requests\n");
    scanf("%d",&n);
    printf("Enter the request order\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&req[i]);
    }
    mov=mov+abs(cp-req[0]);
    printf("%d->%d",cp,req[0]);
for(i=1;i<n;i++)
{

    mov=mov+abs(req[i]-req[i-1]);
    printf("->%d",req[i]);

}
printf("\n");
printf("Total movement=%d\n",mov);
}
/*output
Enter current position
45
Enter number of requests
5
Enter the request order
30
66
24
75
50
45->30->66->24->75->50
Total movement=169
*/
