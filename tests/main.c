/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isrgonza <isrgonza@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:19:37 by isrgonza          #+#    #+#             */
/*   Updated: 2024/11/25 13:19:38 by isrgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "test_libft.h"

int main(void) {
    printf("Running tests for libft...\n\n");

    printf("Testing ft_isalpha...\n");
    test_ft_isalpha();
    printf("Finished testing ft_isalpha.\n\n");

    printf("Testing ft_isdigit...\n");
    test_ft_isdigit();
    printf("Finished testing ft_isdigit.\n\n");

    printf("Testing ft_isalnum...\n");
    test_ft_isalnum();
    printf("Finished testing ft_isalnum.\n\n");

    printf("Testing ft_isascii...\n");
    test_ft_isascii();
    printf("Finished testing ft_isascii.\n\n");

    printf("Testing ft_isprint...\n");
    test_ft_isprint();
    printf("Finished testing ft_isprint.\n\n");

    printf("Testing ft_bzero...\n");
    test_ft_bzero();
    printf("Finished testing ft_bzero.\n\n");

    printf("Testing ft_calloc...\n");
    test_ft_calloc();
    printf("Finished testing ft_calloc.\n\n");

    printf("Testing ft_memchr...\n");
    test_ft_memchr();
    printf("Finished testing ft_memchr.\n\n");

    printf("Testing ft_memcmp...\n");
    test_ft_memcmp();
    printf("Finished testing ft_memcmp.\n\n");

    printf("Testing ft_memcpy...\n");
    test_ft_memcpy();
    printf("Finished testing ft_memcpy.\n\n");

    printf("Testing ft_memmove...\n");
    test_ft_memmove();
    printf("Finished testing ft_memmove.\n\n");

    printf("Testing ft_memset...\n");
    test_ft_memset();
    printf("Finished testing ft_memset.\n\n");

    printf("Testing ft_strlen...\n");
    test_ft_strlen();
    printf("Finished testing ft_strlen.\n\n");

    printf("Testing ft_strdup...\n");
    test_ft_strdup();
    printf("Finished testing ft_strdup.\n\n");

    printf("Testing ft_strlcpy...\n");
    test_ft_strlcpy();
    printf("Finished testing ft_strlcpy.\n\n");

    printf("Testing ft_strlcat...\n");
    test_ft_strlcat();
    printf("Finished testing ft_strlcat.\n\n");

    printf("Testing ft_strncmp...\n");
    test_ft_strncmp();
    printf("Finished testing ft_strncmp.\n\n");

    printf("Testing ft_strchr...\n");
    test_ft_strchr();
    printf("Finished testing ft_strchr.\n\n");

    printf("Testing ft_strrchr...\n");
    test_ft_strrchr();
    printf("Finished testing ft_strrchr.\n\n");

    printf("Testing ft_strnstr...\n");
    test_ft_strnstr();
    printf("Finished testing ft_strnstr.\n\n");

    printf("Testing ft_strjoin...\n");
    test_ft_strjoin();
    printf("Finished testing ft_strjoin.\n\n");

    printf("Testing ft_strtrim...\n");
    test_ft_strtrim();
    printf("Finished testing ft_strtrim.\n\n");

    printf("Testing ft_split...\n");
    test_ft_split();
    printf("Finished testing ft_split.\n\n");

    printf("Testing ft_substr...\n");
    test_ft_substr();
    printf("Finished testing ft_substr.\n\n");

    printf("Testing ft_strmapi...\n");
    test_ft_strmapi();
    printf("Finished testing ft_strmapi.\n\n");

    printf("Testing ft_striteri...\n");
    test_ft_striteri();
    printf("Finished testing ft_striteri.\n\n");

    printf("Testing ft_atoi...\n");
    test_ft_atoi();
    printf("Finished testing ft_atoi.\n\n");

    printf("Testing ft_itoa...\n");
    test_ft_itoa();
    printf("Finished testing ft_itoa.\n\n");

    printf("Testing ft_putchar_fd...\n");
    test_ft_putchar_fd();
    printf("Finished testing ft_putchar_fd.\n\n");

    printf("Testing ft_putstr_fd...\n");
    test_ft_putstr_fd();
    printf("Finished testing ft_putstr_fd.\n\n");

    printf("Testing ft_putendl_fd...\n");
    test_ft_putendl_fd();
    printf("Finished testing ft_putendl_fd.\n\n");

    printf("Testing ft_putnbr_fd...\n");
    test_ft_putnbr_fd();
    printf("Finished testing ft_putnbr_fd.\n\n");

    printf("Testing ft_toupper...\n");
    test_ft_toupper();
    printf("Finished testing ft_toupper.\n\n");

    printf("Testing ft_tolower...\n");
    test_ft_tolower();
    printf("Finished testing ft_tolower.\n\n");

    printf("All tests completed.\n");
    return 0;
}
