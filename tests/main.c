/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isrgonza <isrgonza@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:19:37 by isrgonza          #+#    #+#             */
/*   Updated: 2024/11/26 12:13:29 by isrgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "test_libft.h"

int main(void) {
    printf("Running tests for libft...\n\n");

    test_ft_isalpha();
    printf("Finished testing ft_isalpha.\n\n");

    test_ft_isdigit();
    printf("Finished testing ft_isdigit.\n\n");

    test_ft_isalnum();
    printf("Finished testing ft_isalnum.\n\n");

    test_ft_isascii();
    printf("Finished testing ft_isascii.\n\n");

    test_ft_isprint();
    printf("Finished testing ft_isprint.\n\n");

    test_ft_bzero();
    printf("Finished testing ft_bzero.\n\n");

    test_ft_calloc();
    printf("Finished testing ft_calloc.\n\n");

    test_ft_memchr();
    printf("Finished testing ft_memchr.\n\n");

    test_ft_memcmp();
    printf("Finished testing ft_memcmp.\n\n");

    test_ft_memcpy();
    printf("Finished testing ft_memcpy.\n\n");

    test_ft_memmove();
    printf("Finished testing ft_memmove.\n\n");

    test_ft_memset();
    printf("Finished testing ft_memset.\n\n");

    test_ft_strlen();
    printf("Finished testing ft_strlen.\n\n");

    test_ft_strdup();
    printf("Finished testing ft_strdup.\n\n");

    test_ft_strlcpy();
    printf("Finished testing ft_strlcpy.\n\n");

    test_ft_strlcat();
    printf("Finished testing ft_strlcat.\n\n");

    test_ft_strncmp();
    printf("Finished testing ft_strncmp.\n\n");

    test_ft_strchr();
    printf("Finished testing ft_strchr.\n\n");

    test_ft_strrchr();
    printf("Finished testing ft_strrchr.\n\n");

    test_ft_strnstr();
    printf("Finished testing ft_strnstr.\n\n");

    test_ft_strjoin();
    printf("Finished testing ft_strjoin.\n\n");

    test_ft_strtrim();
    printf("Finished testing ft_strtrim.\n\n");

    test_ft_split();
    printf("Finished testing ft_split.\n\n");

    test_ft_substr();
    printf("Finished testing ft_substr.\n\n");

    test_ft_strmapi();
    printf("Finished testing ft_strmapi.\n\n");

    test_ft_striteri();
    printf("Finished testing ft_striteri.\n\n");

    test_ft_atoi();
    printf("Finished testing ft_atoi.\n\n");

    test_ft_itoa();
    printf("Finished testing ft_itoa.\n\n");

    test_ft_putchar_fd();
    printf("Finished testing ft_putchar_fd.\n\n");

    test_ft_putstr_fd();
    printf("Finished testing ft_putstr_fd.\n\n");

    test_ft_putendl_fd();
    printf("Finished testing ft_putendl_fd.\n\n");

    test_ft_putnbr_fd();
    printf("Finished testing ft_putnbr_fd.\n\n");

    test_ft_toupper();
    printf("Finished testing ft_toupper.\n\n");

    test_ft_tolower();
    printf("Finished testing ft_tolower.\n\n");

    printf("All tests completed.\n");
    return 0;
}
