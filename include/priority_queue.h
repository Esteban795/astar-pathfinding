#ifndef PRIORITY_QUEUE_H
#define PRIORITY_QUEUE_H

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


/*
Priority queue, implemented with a min-heap structure
*/

struct PrioQ {
    int last;  // basically, index of the last element
    int* priorities; 
    int* keys;
    int* mapping; // mapping[i] is the index of the element i in priorities/keys tables
    int capacity;
};

typedef struct PrioQ prioq;

prioq* create_prioq(int size);

int delete_prioq(prioq* q);

void insert(prioq* q,int key,int prio);

int* extract_min(prioq* q);

void decrease_priority(prioq* q,int elt,int prio);


#endif