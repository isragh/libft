








int	ft_atoi(const char *str)
{
	int i = 0;
    	int sign = 1;
    	int result = 0;

  	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
        {
		i++;
	}

	if (str[i] == '-') 
	{
        	sign = -1;
        	i++;
    	} 
	else if (str[i] == '+') 
	{
        	i++;
    	}	

	while (str[i] >= '0' && str[i] <= '9') 
	{
        	result = result * 10 + (str[i] - '0');
        	i++;
    	}

    	return result * sign;
}




#include <stdio.h>

int	main() {
    	const char *str1 = "   -12345";
    	const char *str2 = "42abc";
    	const char *str3 = "   +0078";

    	printf("Result of ft_atoi(\"%s\"): %d\n", str1, ft_atoi(str1));
    	printf("Result of ft_atoi(\"%s\"): %d\n", str2, ft_atoi(str2));
    	printf("Result of ft_atoi(\"%s\"): %d\n", str3, ft_atoi(str3));

    	return 0;
}

// MADE AT HOME -------------------------------------------------------------------------------
// --------------------------------------------------------------------------------------------
