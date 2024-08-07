/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrea <nrea@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:41:17 by nrea              #+#    #+#             */
/*   Updated: 2023/11/20 12:19:07 by nrea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*checks for any printable character including space.*/
int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (16384);
	return (0);
}
