/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbarbier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 13:50:51 by cbarbier          #+#    #+#             */
/*   Updated: 2017/09/26 17:19:38 by cbarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LST_H
# define FT_LST_H

typedef	struct	s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}				t_list;

t_list			*ft_lstnew(void *content, size_t content_size);
t_list			*ft_lstcpy(t_list *lst, size_t content_size);
void			ft_lstdelone(t_list **alst, void (*del)(void*, size_t));
int				ft_lstdel(t_list **alst, void (*del)(void*, size_t));
void			ft_lstadd(t_list **alst, t_list *new);
int				ft_lstany(t_list *lst, int (*f)(t_list *e, void *d), void *da);
t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
void			ft_lstpushback(t_list **alst, t_list *elem);
void			ft_lstshift(t_list **alst, void	(*del)(void *, size_t));
size_t			ft_lstlen(t_list *lst);
void			ft_lstsort(t_list *lst, int	(*fcmp)(t_list *a, t_list *b));
void			ft_lstreverse(t_list **alst);
int				ft_lstdelif(t_list **al, void (*del)(void*, size_t),
		int (*f)(void *));
int				ft_lstfilter(t_list **al, void (*del)(void*, size_t),
		int (*f)(void *, void *), void *data);

#endif
