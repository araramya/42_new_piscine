#include <unistd.h>

int ft_strlen(char *str)
{
  int i;

  i = 0;
  while(str[i])
    i++;
  return (i);
}

int ft_check_base(char *str)
{
  int i;
  int j;

  if (ft_strlen(str) <= 1)
    return (0);
  i = 0;
  while(str[i])
  {
    if (!(str[i] >= 'A' && str[i] <= 'Z')
      && !(str[i] >= 'a' && str[i] <= 'z')
      && !(str[i] >= '0' && str[i] <= '9'))
      return (0);
    j = i + 1;
    while(str[j])
    {
      if (str[j] == str[i])
        return (0);
      j++;
    }
    i++;
  }
  return (1);
}
  

void ft_putnbr_base(int nbr, char *base)
{ 
  int len;

  if (!ft_check_base(base))
    return ;
  len = ft_strlen(base);
  if (nbr == -2147483648)
  {
    write(1, "-", 1);
    ft_putnbr_base(-(long int)nbr / len, base);
    ft_putnbr_base (-(long int)nbr % len, base);
  }
  else if (nbr < 0)
  {
    write(1, "-", 1);
    ft_putnbr_base(-nbr, base);
  }
  else if (nbr < len )
  {
    write(1, &base[nbr], 1);
  }
  else
  {
    ft_putnbr_base (nbr / len, base);
    ft_putnbr_base(nbr % len, base);
  }

}

#include <stdio.h>
int main() 
{
    // Define some test bases
    char *base1 = "0123456789";      // Decimal
    char *base2 = "01";              // Binary
    char *base3 = "0123456789ABCDEF"; // Hexadecimal
    char *base4 = "poneyvif";        // Custom base

    // Test cases
    int numbers[] = {42, -42, 2147483647, -2147483648, 0};

    printf("Testing ft_putnbr_base with various bases:\n");

    for (int i = 0; i < 5; i++) {
        printf("Number: %d in base %s -> ", numbers[i], base1);
        ft_putnbr_base(numbers[i], base1);
        write(1, "\n", 1);

        printf("Number: %d in base %s -> ", numbers[i], base2);
        ft_putnbr_base(numbers[i], base2);
        write(1, "\n", 1);

        printf("Number: %d in base %s -> ", numbers[i], base3);
        ft_putnbr_base(numbers[i], base3);
        write(1, "\n", 1);

        printf("Number: %d in base %s -> ", numbers[i], base4);
        ft_putnbr_base(numbers[i], base4);
        write(1, "\n", 1);
    }

    return 0;
}
