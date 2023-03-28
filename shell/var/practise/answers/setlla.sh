#!/bin/bash
read -p "Enter a number: " numb
read -p "Enter another number: " numb2
read -p "Enter operator + or - or /: " operator1

if [ operator1="+" ]
then
	sum=$(($numb + $numb2))
	echo "The sum of both numbers is: $sum"

elif [ operator1="-" ]
then
	diff1=$(($numb - $numb2))
	echo "The difference of $numb and $numb2 is: $diff1"

elif [ operator1="/" ]
then
	division1=$(($numb / $numb2))
	echo "The result of the division is: $division1"

elif [ operator1="*" ]
then
	multiply1=$(($numb * $numb2))
	echo "The result of the multiplication is: $multiply1"

else
	echo "Please try again"
fi

