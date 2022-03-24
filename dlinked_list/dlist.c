#include <stdio.h>
#include <dlist.h>

void dlist_init(DList *list, void (*destroy)(void *data))
{

}
void dlist_destroy(DList *list)
{

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
    return -1;
}