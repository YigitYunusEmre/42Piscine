#!/bin/bash

norminette -R CheckForbiddenSourceHeader
if [ $? -eq 0 ]; then
	echo "no norm error :)"
else
	echo "Dam you got norm error"
	exit 1
fi

cc -Wall -Werror -Wextra ex00/ft_strlen.c ../main/main00.c -o ft_strlen

if [ $? -eq 0 ]; then
	./ft_strlen
else
	echo "Can't handle that my guy"
fi

rm ft_strlen

echo "Do you wish to continue? [y/n]"
read y
if [[ $y == y* ]]; then
    echo "You do! Awesome."
else
    exit;
fi

cc -Wall -Werror -Wextra ex01/ft_putstr.c ../main/main01.c -o ft_putstr

if [ $? -eq 0 ]; then
	./ft_putstr
else
	echo "Can't handle that my guy"
fi

rm ft_putstr

echo "Do you wish to continue? [y/n]"
read y
if [[ $y == y* ]]; then
    echo "You do! Awesome."
else
    exit;
fi

cc -Wall -Werror -Wextra ex02/ft_putnbr.c ../main/main02.c -o ft_putnbr

if [ $? -eq 0 ]; then
	./ft_putnbr
else
	echo "Can't handle that my guy"
fi

rm ft_putnbr

echo "Do you wish to continue? [y/n]"
read y
if [[ $y == y* ]]; then
    echo "You do! Awesome."
else
    exit;
fi

cc -Wall -Werror -Wextra ex03/ft_atoi.c ../main/main03.c -o ft_atoi

if [ $? -eq 0 ]; then
	./ft_atoi
else
	echo "Can't handle that my guy"
fi

rm ft_atoi

cc ex04/ft_putnbr_base.c -o ft_putnbr_base

if [ $? -eq 1 ]; then
	echo "I was not build for that one"
	exit 0
else
	exit 0
fi
