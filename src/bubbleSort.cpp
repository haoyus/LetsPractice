#include <iostream>
#include "common.h"

// void BubbleSort(Object (&objs)[SIZE])
void BubbleSort(Object objs[],int size)
{
    int end = size-1;
    while(end>0){
        for(int i=0; i<end; ++i){
            if(objs[i].x > objs[i+1].x){
                Object tmp = objs[i+1];
                objs[i+1] = objs[i];
                objs[i] = tmp;
            }
            
        }
        --end;
    }
}


int main()
{
    const int SIZE = 10;
    Object objects[SIZE];
    for(int i = 0; i < SIZE; ++i){
        objects[i].x = SIZE-i;
    }
    PrintObjX(objects,SIZE);

    BubbleSort(objects,SIZE);
    PrintObjX(objects,SIZE);
}