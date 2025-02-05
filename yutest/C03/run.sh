#!/bin/bash

norminette -R CheckForbiddenSourceHeader
if [ $? -eq 0 ]; then
	echo "no norm error :)"
else
	echo "Dam you got norm error"
	exit 1
fi

cc -Wall -Werror -Wextra ex00/ft_strcmp.c ../main/main00.c -o ft_strcmp

if [ $? -eq 0 ]; then
	./ft_strcmp
else
	echo "Can't handle that my guy"
fi

rm ft_strcmp

echo "Do you wish to continue? [y/n]"
read y
if [[ $y == y* ]]; then
    echo "You do! Awesome."
else
    exit;
fi

cc -Wall -Werror -Wextra ex01/ft_strncmp.c ../main/main01.c -o ft_strncmp

if [ $? -eq 0 ]; then
	./ft_strncmp
else
	echo "Can't handle that my guy"
fi

rm ft_strncmp

echo "Do you wish to continue? [y/n]"
read y
if [[ $y == y* ]]; then
    echo "You do! Awesome."
else
    exit;
fi

cc  -Wall -Werror -Wextra ex02/ft_strcat.c ../main/main02.c -o ft_strcat

if [ $? -eq 0 ]; then
	./ft_strcat
else
	echo "Can't handle that my guy"
fi

rm ft_strcat

echo "Do you wish to continue? [y/n]"
read y
if [[ $y == y* ]]; then
    echo "You do! Awesome."
else
    exit;
fi

cc -Wall -Werror -Wextra ex03/ft_strncat.c ../main/main03.c -o ft_strncat

if [ $? -eq 0 ]; then
	./ft_strncat
else
	echo "Can't handle that my guy"
fi

rm ft_strncat

echo "Do you wish to continue? [y/n]"
read y
if [[ $y == y* ]]; then
    echo "You do! Awesome."
else
    exit;
fi

cc -Wall -Werror -Wextra ex04/ft_strstr.c ../main/main04.c -o ft_strstr

if [ $? -eq 0 ]; then
	./ft_strstr
else
	echo "Can't handle that my guy"
fi

rm ft_strstr

echo "Do you wish to continue? [y/n]"
read y
if [[ $y == y* ]]; then
    echo "You do! Awesome."
else
    exit;
fi

cc ex05/ft_strlcat.c -o ft_strlcat

if [ $? -eq 1 ]; then
	echo "I was not build for that one"
	exit 0
else
	exit 0
fi
