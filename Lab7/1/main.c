#include <pthread.h>
#include <stdio.h>
#include <unistd.h>

void * th_func(void *arg){
	for(int i=0;i<1000;i++)
		printf("Child th %i\n", i);
	sleep(3);
}

int main(int argc, char const *argv[])
{
	pthread_t pthread;
	pthread_create(&pthread,NULL,&th_func,NULL);
	for(int i=0;i<1000;i++)
		printf("Main th %i\n", i);
	// sleep(2);
	// pthread_exit(0);
	return 0; 
}
