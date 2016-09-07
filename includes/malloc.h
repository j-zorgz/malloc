/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcamhi <jcamhi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 15:19:40 by jcamhi            #+#    #+#             */
/*   Updated: 2016/09/07 18:24:22 by jcamhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MALLOC_H
# define MALLOC_H
# define TINY 10
# define SMALL 100
# define P_MAX 500

# include <sys/mman.h>
# include <stddef.h>
# include <unistd.h>
# include <stdio.h>
# include <unistd.h>
# include <libft.h>

typedef struct	s_header {
	int		used;
	size_t	size;
}				t_header;

# define T_PSIZE ()
# define S_PSIZE

typedef struct	s_data {
	void	*tiny[P_MAX + 1];
	void	*small[P_MAX + 1];
	void	*large[P_MAX + 1];
}				t_data;

void			*malloc(size_t size);
size_t				get_t_psize(void);
size_t				get_s_psize(void);
void					*create_new_page(void *collec[], size_t size);
void					*find_space(void *page[], size_t blocs_needed, size_t max_size);
void					*small(size_t size, void *small[]);
void					*tiny(size_t size, void *tiny[]);
void					*large(size_t size, void *large[]);


#endif
