#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
void forkexample()
{
    int x=1;
    if(fork()==0)
    printf("Child has x=%d\n",++x);

    else
      printf("Parent has x=%d\n",--x);
}
int main()
{
    forkexample();
    return 0;
}
/* output
1. Producer
2. Consumer
3. Exit
Enter your choice: 1

Producer produces the item 1
Enter your choice: 2

Consumer consumes item 1
Enter your choice: 2
Buffer is empty!!
Enter your choice: 1

Producer produces the item 1
Enter your choice: 
*/
