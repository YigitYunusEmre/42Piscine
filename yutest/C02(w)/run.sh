#!/bin/bash

norminette -R CheckForbiddenSourceHeader
if [ $? -eq 0 ]; then
	echo "no norm error :)"
else
	echo "Dam you got norm error"
	exit 1
fi

cc ex00/ft_strcpy.c ../main/main00.c -o ft_strcpy

if [ $? -eq 0 ]; then
	./ft_strcpy
else
	echo "Can't handle that my guy"
fi

rm ft_strcpy

echo "Do you wish to continue? [y/n]"
read y
if [[ $y == y* ]]; then
    echo "You do! Awesome."
else
    exit;
fi

cc ex01/ft_strncpy.c ../main/main01.c -o ft_strncpy

if [ $? -eq 0 ]; then
	./ft_strncpy
else
	echo "Can't handle that my guy"
fi

rm ft_strncpy

echo "Do you wish to continue? [y/n]"
read y
if [[ $y == y* ]]; then
    echo "You do! Awesome."
else
    exit;
fi

cc ex02/ft_str_is_alpha.c ../main/main02.c -o ft_str_is_alpha

if [ $? -eq 0 ]; then
	./ft_str_is_alpha
else
	echo "Can't handle that my guy"
fi

rm ft_str_is_alpha

echo "Do you wish to continue? [y/n]"
read y
if [[ $y == y* ]]; then
    echo "You do! Awesome."
else
    exit;
fi

cc ex03/ft_str_is_numeric.c ../main/main03.c -o ft_str_is_numeric

if [ $? -eq 0 ]; then
	./ft_str_is_numeric
else
	echo "Can't handle that my guy"
fi

rm ft_str_is_numeric

echo "Do you wish to continue? [y/n]"
read y
if [[ $y == y* ]]; then
    echo "You do! Awesome."
else
    exit;
fi

cc ex04/ft_str_is_lowercase.c ../main/main04.c -o ft_str_is_lowercase

if [ $? -eq 0 ]; then
	./ft_str_is_lowercase
else
	echo "Can't handle that my guy"
fi

rm ft_str_is_lowercase

echo "Do you wish to continue? [y/n]"
read y
if [[ $y == y* ]]; then
    echo "You do! Awesome."
else
    exit;
fi

cc ex05/ft_str_is_uppercase.c ../main/main05.c -o ft_str_is_uppercase

if [ $? -eq 0 ]; then
	./ft_str_is_uppercase
else
	echo "Can't handle that my guy"
fi

rm ft_str_is_uppercase

echo "Do you wish to continue? [y/n]"
read y
if [[ $y == y* ]]; then
    echo "You do! Awesome."
else
    exit;
fi

cc ex06/ft_str_is_printable.c ../main/main06.c -o ft_str_is_printable

if [ $? -eq 0 ]; then
	./ft_str_is_printable
else
	echo "Can't handle that my guy"
fi

rm ft_str_is_printable

echo "Do you wish to continue? [y/n]"
read y
if [[ $y == y* ]]; then
    echo "You do! Awesome."
else
    exit;
fi

cc ex07/ft_strupcase.c ../main/main07.c -o ft_strupcase

if [ $? -eq 0 ]; then
	./ft_strupcase
else
	echo "Can't handle that my guy"
fi

rm ft_strupcase

echo "Do you wish to continue? [y/n]"
read y
if [[ $y == y* ]]; then
    echo "You do! Awesome."
else
    exit;
fi

cc ex08/ft_strlowcase.c ../main/main08.c -o ft_strlowcase

if [ $? -eq 0 ]; then
	./ft_strlowcase
else
	echo "Can't handle that my guy"
fi

rm ft_strlowcase


cc ex09/ft_strcapitalize.c -o ft_strcapitalize

if [ $? -eq 1 ]; then
	echo "I was not build for that one"
	exit 0
else
	exit 0
fi
