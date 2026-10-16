
#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *newlst;
    t_list  *newnode;

    newlst = NULL;
    if(!lst || !f || !del)
        return NULL;
    while(lst != NULL)
    {
        newnode = ft_lstnew(f(lst->content));
        if(!newnode)
        {
            ft_lstclear(&newlst, del);
            return NULL;
        }
        ft_lstadd_back(&newlst, newnode);
        lst = lst->next;
    }
    return (newlst);
}
