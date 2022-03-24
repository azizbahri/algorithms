#include <stdio.h>
#include <dlist.h>

int dlist_init(DList *list, void (*destroy)(void *data))
{
    if ( !list || !destroy )
        return -1;
    list->destroy = destroy;
    list->head = NULL;
    list->tail = NULL;
    list->match = NULL;
    list->size = 0;
}
int dlist_destroy(DList *list)
{
    // traverse the list and run destroy function
}
int dlist_ins_next(DList *list, DListElmt *element, const void *data)
{
    return -1;
}
int dlist_ins_prev(DList *list, DListElmt *element, const void *data)
{
    return -1;
}
int dlist_remove(DList *list, DListElmt *element, void **data)
{
    if (!list || !element || dlist_size(list) == 0)
        return -1;

    // To remove an element 
    // e.g. given list A, with a<->b<->c
    // to remove b
    // 1. find b
    // 2. a.next = c
    // 3. c.prev = a
    // 4. free b

    // things to consider
    // 1. If the list has only 1 element
    // 2. if the list has no element
    // 3. if the element is the head
    // 4. if the element is the tail

    *data = element->data;

    if(element == dlist_head(list))
    {
        list->head = element->next;
        list->head->prev = NULL;

        if (list->head == NULL)
        {
            list->tail == NULL;
        }

    } else {
        element->prev = element->next;
        if(element->next == NULL)
        {
            list->tail == element->prev;
        }else{
            element->next->prev = element->prev;
        }
    }

    free(element);

    list->size--;
    return -1;
}