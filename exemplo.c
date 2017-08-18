#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>


pthread_t thread_1;
pthread_t thread_2;


int a[3][3] = {{8, 7}, {5, 6}};
int b[3][3] = {{6,8}, {0,6}};
int c[3][3] = {{0, 0}, {0, 0}};

void* tarefa_1(void *p)
{
    int col, i;
      printf("\nThread1\n");
      for (col = 0; col < 2; col++) {
            for (i = 0; i < 2; i++) {
                c[0][col] += a[0][i] * b[i][col];
            }
            printf("%i\t",c[0][col]);
            printf("\n");
      }
}

void* tarefa_2(void *p)
{
    int col, i;
      printf("\nThread2\n");
      for (col = 0; col < 2; col++) {
            for (i = 0; i < 2; i++) {
                c[1][col] += a[1][i] * b[i][col];
            }
            printf("%i\t",c[1][col]);
            printf("\n");
      }

}

int main()
{
   printf("Inicio das Threads...\n");

    pthread_create(&thread_1, NULL, tarefa_1, NULL);
    pthread_create(&thread_2, NULL, tarefa_2, NULL);

    pthread_join(thread_1, NULL);
    pthread_join(thread_2, NULL);

    printf("resultado da tabela 3\n");

int i, j;
        for(i = 0;i<2; i++){
                for(j= 0; j<2;j++){
              printf("%i\t  ",c[i][j]);
                }
                printf("\n");
        }

    exit(0);
}
