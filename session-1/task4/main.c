
#include <stdio.h>
#include <stdlib.h>

#include "node_structures.h"
#include "node.h"
#include "queue_structures.h"
#include "queue.h"

int main( void ) {

    // create an empty queue
    Queue *queue = createQueue();

    // test join 
    join(queue, 7);
    join(queue, 2);
    join(queue, 4);
    // - use traverseI() to display the nodes
    // - which pointer do you pass to traverseI(): front or back?
    traverseI(queue);

    // test leave 
    leave(queue);
    leave(queue);
    traverseI(queue);
    // - take care to free detached memory

    // free queue memory
    freeNodes( queue->front );
    // free queue
    free(queue);

    return 0;
}
