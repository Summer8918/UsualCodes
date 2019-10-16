#include <stdlib.h>
#include <stdio.h>
#include "cycleQueue.h"

int main(void)
{
    int i;
    //queue(stack)
    Queue queue2[20];    
    //queue(heap)
    Queue *queue = (Queue*)malloc(sizeof(Queue)*20);
    //Queue Init
    Queue_Init(queue,20);
    Queue_Init(queue2,20);

    //queue1
    printf("insert datas:(0-19)\r\n");
    for(i=0;i<20;i++)
    {
        Queue_push(queue,i);
    }

    Queue_printf(queue);

    printf("delete datas(first 10):\r\n");
    for(i=0;i<10;i++)
    {
        Queue_pop(queue);
    }

    Queue_printf(queue);

    printf("first data:%d\r\n",Queue_front(queue));

    printf("queuesize = %d\r\n",Queue_size(queue));

    //queue2
    printf("\r\n");
    printf("insert datas to queue2:(0-190,10interval)\r\n");
    for(i=0;i<20;i++)
    {
        Queue_push(queue2,i*10);
    }

    Queue_printf(queue2);

    printf("delete datas(first 10):\r\n");
    for(i=0;i<10;i++)
    {
        Queue_pop(queue2);
    }

    Queue_printf(queue2);

    //delete queue
    printf("\r\n");
    printf("queue1 delete\r\n");
    Queue_Delete(queue);
    free(queue);
    queue=0;

    printf("queue2 delete\r\n");
    Queue_Delete(queue2);

    system("pause");
    return 0;
}
