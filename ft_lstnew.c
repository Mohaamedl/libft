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

int main(void) {
  int i = 4;
  t_list nums = ft_lstnew(&i) while (i > 0) {
    t_list new = ft_lstnew(&i);
    ft_lstadd_front(nums, new)
  }
}
