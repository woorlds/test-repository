#include "test-repository.h"
#include "hello.h"
#include "test.h"

void init_list()
{
		head=(struct node_list*)malloc(sizeof(struct node_list));
		tail=(struct node_list*)malloc(sizeof(struct node_list));

		head->data=0;
		tail->data=0;

		head->next=tail;
		tail->next=NULL;
}

void insert_node(const int value)
{
		struct node_list *new_node, *search_node;
		new_node=(struct node_list*)malloc(sizeof(struct node_list));

		new_node->data=value;

		search_node=head;
		while(search_node->next!=tail)
		{
				search_node=search_node->next;
		}

		new_node->next=tail;
		search_node->next=new_node;
}

void delete_node(const int value)
{
		struct node_list *previos_node, *search_node;
		search_node=head;

		while(search_node!=tail)
		{
				if(search_node->data==value)
				{
						previos_node->next=search_node->next;
						free(search_node);
						return;
				}
				previos_node=search_node;
				search_node=search_node->next;
		}
}

void display_node_list()
{
		struct node_list *display_node;
		display_node=head->next;
		while(display_node!=tail)
		{
				if(display_node->next!=tail)
				{
						printf("%d --> ", display_node->data);
				}else{
						printf("%d\n", display_node->data);
				}
				display_node=display_node->next;
		}
}

int main(void)
{
		init_list();
		insert_node(10);
		insert_node(20);
		insert_node(30);
		insert_node(40);

		display_node_list();

		delete_node(30);
		display_node_list();

		hello_world();

		test();

		return 1;
}
