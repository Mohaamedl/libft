#include "libft.h"

t_list *ft_lstnew(void *content) {
  t_list *node;

  node = malloc(sizeof(t_list));
  if (!node)
    return (NULL);
  node->content = content;
  node->next = NULL;
  return (node);
}

void ft_lstadd_front(t_list **lst, t_list *new) {
  t_list old = *lst;
  new->next = *lst;
  *lst = new;
}

int ft_lstsize(t_list *lst) {
  int i;
  t_list *temp;

  temp = lst;
  while (temp) {
    i++;
    temp = temp->next;
  }
  return (i);
}

t_list *lstlast(t_list *lst) {
  t_list *temp;

  temp = lst;
  while (temp->next) {
    temp = temp->next;
  }
  return (temp);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	temp = ft_lstlast(*lst);
	if (!temp)
		*lst = new;
	temp -> next = new;
	new -> next = NULL;

}

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst)
		return ;
	if (del)
		del(lst -> content);
	free(lst);
}

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;
	
	if (!lst || !*lst)
		return ;
	if (del)
	{
		while (*lst)
		{
			temp = (*lst) -> next;
			ft_lstdelone(lst,del);
			*lst = temp;
		}
		*lst = NULL;
	}
}

void	ft_lstiter(t_list	*lst, void (*f)(void *))
{
	t_list	*temp;

	if(!lst)
		return ;
	if (f)
	{
		while (lst)
		{
			temp = (*lst) -> next;
			f(temp -> content);
			lst = temp;
		}
	}
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	
	void	*temp;

}


int main(void)
{
	int i = 4;
	
	t_list nums = ft_lstnew(&i);
	while (i > 0)
	{
	t_list new = ft_lstnew(&i);
	ft_lstadd_front(nums, new)
	}
}
