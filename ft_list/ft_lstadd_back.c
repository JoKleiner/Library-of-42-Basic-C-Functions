/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:19:14 by joklein           #+#    #+#             */
/*   Updated: 2025/01/22 15:28:36 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void ft_lstadd_back(t_list **lst, t_list *next)
{
    t_list *last;
    
    last = ft_lstlast(*lst);
    if (!last)
        *lst = next;
    last->next = next;
}
