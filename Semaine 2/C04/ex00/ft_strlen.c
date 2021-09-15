/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 10:46:30 by hgoorick          #+#    #+#             */
/*   Updated: 2021/07/08 20:11:33 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
int	ft_strlen(char *str)
{
	int	compteur;

	compteur = 0;
	while (*str)
	{
		str++;
		compteur++;
	}
	return (compteur);
}
