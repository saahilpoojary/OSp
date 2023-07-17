#include<stdlib.h>
#include<stdio.h>
#include<pthread.h>
#include<semaphore.h>
#define NUM_PHILOSOPHERS 5
#define NUM_CHOPSTICKS 5

void dine(int n);
pthread_t
philosopher[NUM_PHILOSOPHERS];
pthread_mutex_t
chopstick[NUM_CHOPSTICKS];
int main()
{
 int i,status_message;
 void *msg;
 for(i=1;i<=NUM_CHOPSTICKS;i++)
 {
    status_message=pthread_mutex_init(&chopstick[i],NULL);

    if(status_message==-1)
    {
        printf("\nMutex initialization failed");
        exit(1);

    }
 }
 for(i=1;i<=NUM_PHILOSOPHERS;i++)
 {
    status_message=pthread_create(&philosopher[i],NULL,(void*)dine,(int*)i);
    if(status_message!=0)
    {
        printf("\n Thread creation error\n");
        exit(1);
    }
 }
 for(i=1;i<=NUM_PHILOSOPHERS;i++)
 {
    status_message=pthread_join(philosopher[i],&msg);
    if(status_message!=0)
    {
        printf("\Thread join failed\n");
        exit(1);

    }
 }
 for(i=1;i<=NUM_CHOPSTICKS;i++)
 {
    status_message=pthread_mutex_destroy(&chopstick[i]);
    if(status_message!=0)
    {
        printf("\nMutex destroyed\n");
        exit(1);
    }
 }
 return 0;
}
void dine(int n)
{
    printf("\nPhilosopher%dis thinking",n);
    pthread_mutex_lock(&chopstick[n]);
    pthread_mutex_lock(&chopstick[(n+1)%NUM_CHOPSTICKS]);
    printf("\nPhilosopher%dis eating",n);
    sleep(3);

    pthread_mutex_unlock(&chopstick[n]);
    pthread_mutex_unlock(&chopstick[(n+1)%NUM_CHOPSTICKS]);
    printf("\nPhilosopher%d finished eating",n);
}

/* output

Philosopher3is thinking
Philosopher3is eating
Philosopher4is thinking
Philosopher5is thinking
Philosopher5is eating
Philosopher2is thinking
Philosopher1is thinking
Philosopher3 finished eating
Philosopher5 finished eating
Philosopher4is eating
Philosopher2is eating
Philosopher4 finished eating
Philosopher2 finished eating
Philosopher1is eating
Philosopher1 finished eating */
