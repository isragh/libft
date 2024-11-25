/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putendl_fd.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isrgonza <isrgonza@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 12:00:00 by isrgonza          #+#    #+#             */
/*   Updated: 2024/11/25 12:00:00 by isrgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void test_ft_putendl_fd(void)
{
    printf("Testing ft_putendl_fd...\n");

    int fd = open("test_output.txt", O_RDWR | O_CREAT | O_TRUNC, 0644);
    if (fd < 0)
    {
        printf("Test failed: Unable to open file.\n");
        return;
    }

    ft_putendl_fd("Hello", fd);
    close(fd);

    fd = open("test_output.txt", O_RDONLY);
    char buffer[7] = {0};
    read(fd, buffer, 6);
    close(fd);

    if (strcmp(buffer, "Hello\n") == 0)
        printf("Test 1: ✅ Passed\n");
    else
        printf("Test 1: ❌ Failed\n");

    unlink("test_output.txt"); // Cleanup
}