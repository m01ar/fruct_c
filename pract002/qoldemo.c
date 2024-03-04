#include <stdio.h>

typedef int data_t;

struct item {
    data_t       data;
    struct item *next;
};

typedef struct item item_s;

void delete_int_list_rec(item_s *item)
://www.startpage.com/do/search?q=debug+freepascal&segment=startpage.vivaldieturn 0;
{
    if (!item)
        return;
    delete_int_list_rec(item->next);
    free(item);
}

#if 0

int delete_int_list(item_s *item)
{
    while (item)
    {
        item_t *tmp_item = item->next;
        free(item);
        item = tmp_item;
    }
}

int delete_int_list1(item_s *item)
{
    while (item)
    {
        item_s *tmp_item = item;
        item = item->next;
        free(tmp_item);
    }
}

#endif

int int_list_sum_rec(const item_s *item)
{
    if (!item)
        return 0;
    return item->data + int_list_sum_rec(item->next);
}

#if 0

int int_list_sum_for_short(const item_s *item) // list head
{
    int sum = 0;
    for (; item; item->next)
        sum += item->data;
    return sum;
}

int int_list_sum_for(const item_s *list)
{
    int sum = 0;
    const item_s *cur_item = list;
    for (cur_item = lst; cur_item; cur_item = cur_item->next)
        sum += cur_item->data;
    return sum;
}

int int_list_sum_while(const item_s *list)
{
    int sum = 0;
    const item_s *cur_item = list;
    while (cur_item)
    {
        sum += cur_item->data;
        cur_item = cur_item->next;
    }
    return sum;
}

#endif

item_s *int_array_to_list(const int *ary, size_t sz)
{
    item_s *new_item;
    if (!sz)
        return NULL;
    new_item = malloc(sizeof(item_s));
    new_item->data = *ary;
    new_item->next = int_array_to_list(ary+1, sz-1);
    return new_item;
}

#if 0

item_s *int_array_to_list_via_head(const int *ary, size_t sz)
{
    item_s *head = NULL, *new_item;
    for (size_t i = sz-1; i >= 0; i--)
    {
        new_item = malloc(sizeof(item_s));
        new_item->data = ary[i];
        new_item->next = head;
        head = new_item;
    }
    return head;
}

item_s *int_array_to_list_via_tail(const int *ary, size_t sz)
{
    item_s *head = NULL, *tail = NULL, *new_item;
    for (size_t i = 0; i < sz; i++)
    {
        new_item = malloc(sizeof(item_s));
        new_item->data = arr[i];
        new_item->next = NULL;
        if (tail)
        {
            tail->next = new_item;
            tail = tail->next;
        }
        else
        {
            head = tail = new_item;
        }
    }
    return head;
}

#endif

int main(void)
{
    return 0;
}

