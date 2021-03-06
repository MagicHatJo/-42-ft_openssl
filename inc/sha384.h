/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sha384.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/17 23:06:31 by jochang           #+#    #+#             */
/*   Updated: 2018/08/08 15:43:54 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHA384_H
# define SHA384_H

extern uint64_t	g_sha384_k[80];

typedef struct	s_sha384_hash
{
	uint64_t	a;
	uint64_t	b;
	uint64_t	c;
	uint64_t	d;
	uint64_t	e;
	uint64_t	f;
	uint64_t	g;
	uint64_t	h;
}				t_sha384_hash;

void			*sha384(char *file_name, char *str);
uint64_t		*sha384_w_init(uint64_t *m);
uint64_t		*digest_sha384(t_sha384_hash base);
t_sha384_hash	sha384_loop(t_sha384_hash hash, uint64_t *w);
t_sha384_hash	sha384_h_init(void);
t_sha384_hash	sha384_hash_cycle(t_sha384_hash hash,
					uint64_t temp1, uint64_t temp2);
t_sha384_hash	sha384_base_set(t_sha384_hash base, t_sha384_hash hash);

#endif
