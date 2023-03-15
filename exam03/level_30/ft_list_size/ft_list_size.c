#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

int	ft_list_size(t_list *begin_list)
{
	int count;

	count = 0;
	while (begin_list != NULL)
	{
		count ++;
		begin_list = begin_list->next;
	}
	return (count);
}


void append(t_list **root, int value)
{
	t_list *new;
	int *p_value;
	t_list *temp;

	temp = *root;
	new = (t_list*)malloc(sizeof(t_list));
	p_value = (int*)malloc(sizeof(int));
	*p_value = value;
	new->data = p_value;
	new->next = NULL;
	if (temp == NULL)
	{
		*root = new;
		return ;
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;
}

void print_list(t_list *root)
{
	while (root != NULL)
	{
		printf("%d\n", (*((int *)(root->data))));
		root = root->next;
	}
}

int main()
{
	t_list *root;

	root = NULL;
	append(&root, 10);
	append(&root, 20);
	append(&root, 30);
	append(&root, 40);
	append(&root, 50);
	append(&root, 60);
	print_list(root);
	printf("Length of list is %d", ft_list_size(root));
}