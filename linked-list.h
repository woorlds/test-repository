#ifndef __LINKED_LIST_H__
#define __LINKED_LIST_H__

#include "common.h"

struct node_list {
		int data;
		struct node_list *next;
};

struct node_list *head;
struct node_list *tail;

void init_lists();
void inseart_node(const int value);
void delete_node(const int value);
void display_node_list();

#endif
