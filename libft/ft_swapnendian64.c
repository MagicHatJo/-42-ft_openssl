/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swapnendian64.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 10:48:53 by jochang           #+#    #+#             */
/*   Updated: 2018/08/08 14:39:09 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

uint64_t	*ft_swapnendian64(uint64_t *arr, int32_t n)
{
	int32_t		i;

	i = -1;
	while (++i < n)
		arr[i] = ft_swapendian64(arr[i]);
	return (arr);
}