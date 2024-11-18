/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isrgonza <isrgonza@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 16:47:01 by isrgonza          #+#    #+#             */
/*   Updated: 2024/11/15 17:01:00 by isrgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strrchr(const char *s, int c)
{
        const char  *last_occurrence = 0;

        while (*s)
        {
                if (*s == (char)c)
                        last_occurrence = s;
                s++;
        }
        if (*s == (char)c)
                return ((char *)s);
        return ((char *)last_occurrence);
}

/*
#include <stdio.h>

int main() {
        const char *str = "Hello, World!";
        char ch = 'o';

        char *result = ft_strrchr(str, ch);
        if (result != NULL)
                printf("Last occurrence of '%c' found at position: %ld\n", ch, result - str);
        else
                printf("Character '%c' not found.\n", ch);

        result = ft_strrchr(str, '\0');
        if (result != NULL)
                printf("Found '\\0' at the end of the string.\n");

        return 0;
}
*/

// MADE AT HOME ----------------------------------------------------------------------------
// -----------------------------------------------------------------------------------------