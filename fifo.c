#include<stdio.h>
int main()
{
    int i,j,n,a[50],no,k,avil,fault=0;
    printf("\n enter the number of pages:\n");
    scanf("%d",&n);
    printf("\n enter the page number:\n");
    for(int i=1;i<=n;i++)
    scanf("%d",&a[i]);
    printf("\n enter the number of frames:");
    scanf("%d",&no);
    for(i=0;i<=no;i++){
    
        avail=1;
        if(avail==0)
        {
            frame[j]=a[i];
            fault++;
            for(k=0;k<no;k++)
            printf("%d\t",frame[k]);
            j=(j+1)%no;
        }
        printf("\n");
    
    }
    printf("page fault is %d ",fault);
    return 0;

}
