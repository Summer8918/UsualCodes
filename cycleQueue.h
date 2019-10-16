#ifndef _QUEUE_H
#define _QUEUE_H
typedef unsigned char uint8_t;
typedef int Elem;

typedef struct circlequeue
{
    int iLength;
    int iSize;
    int iHead;
    int iTail;
    Elem *Datas; 
}Queue;

uint8_t  Queue_Init(Queue* queue,int size);
uint8_t Queue_Delete(Queue *queue);
uint8_t isQueueEmpty(Queue *queue);
uint8_t isQueueFull(Queue *queue);
int Queue_size(Queue *queue);
uint8_t Queue_push(Queue *queue,Elem data);
Elem Queue_front(Queue *queue);
Elem Queue_back(Queue *queue);
uint8_t Queue_pop(Queue *queue);
void Queue_printf(Queue *queue);

#endif
