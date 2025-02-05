#!/bin/bash

norminette -R CheckForbiddenSourceHeader
if [ $? -eq 0 ]; then
	echo "no norm error :)"
else
	echo "Dam you got norm error"
	exit 1
fi

cc ex00/ft_iterative_factorial.c ../main/main00.c -o ft_iterative_factorial

if [ $? -eq 0 ]; then
	./ft_iterative_factorial
else
	echo "Can't handle that my guy"
fi

rm ft_iterative_factorial

echo "Do you wish to continue? [y/n]"
read y
if [[ $y == y* ]]; then
    echo "You do! Awesome."
else
    exit;
fi

cc ex01/ft_recursive_factorial.c ../main/main01.c -o ft_recursive_factorial

if [ $? -eq 0 ]; then
	./ft_recursive_factorial
else
	echo "Can't handle that my guy"
fi

rm ft_recursive_factorial

echo "Do you wish to continue? [y/n]"
read y
if [[ $y == y* ]]; then
    echo "You do! Awesome."
else
    exit;
fi

cc ex02/ft_iterative_power.c ../main/main02.c -o ft_iterative_power

if [ $? -eq 0 ]; then
	./ft_iterative_power
else
	echo "Can't handle that my guy"
fi

rm ft_iterative_power

echo "Do you wish to continue? [y/n]"
read y
if [[ $y == y* ]]; then
    echo "You do! Awesome."
else
    exit;
fi

cc ex03/ft_recursive_power.c ../main/main03.c -o ft_recursive_power

if [ $? -eq 0 ]; then
	./ft_recursive_power
else
	echo "Can't handle that my guy"
fi

rm ft_recursive_power

echo "Do you wish to continue? [y/n]"
read y
if [[ $y == y* ]]; then
    echo "You do! Awesome."
else
    exit;
fi

cc ex04/ft_fibonacci.c ../main/main04.c -o ft_fibonacci

if [ $? -eq 0 ]; then
	./ft_fibonacci
else
	echo "Can't handle that my guy"
fi

rm ft_fibonacci

echo "Do you wish to continue? [y/n]"
read y
if [[ $y == y* ]]; then
    echo "You do! Awesome."
else
    exit;
fi

cc ex05/ft_sqrt.c ../main/main05.c -o ft_sqrt

if [ $? -eq 0 ]; then
	./ft_sqrt
else
	echo "Can't handle that my guy"
fi

rm ft_sqrt

echo "Do you wish to continue? [y/n]"
read y
if [[ $y == y* ]]; then
    echo "You do! Awesome."
else
    exit;
fi

cc ex06/ft_is_prime.c ../main/main06.c -o ft_is_prime

if [ $? -eq 0 ]; then
	./ft_is_prime
else
	echo "Can't handle that my guy"
fi

rm ft_is_prime

cc ex07/ft_find_next_prime.c -o ft_find_next_prime

if [ $? -eq 0 ]; then
	echo "I was not build for that one"
else
	exit 0
fi
