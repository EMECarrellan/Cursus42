#ifndef LIBFT_H
#define LIBFT_H

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);

int	ft_isdigit(int c)
{
	return (c >= 48 && c <= 57);
}
int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

#endif