#!/bin/bash

read -p "What is your name? " name

read -p "What is your Cohort? " cohort

read -p "What is your Score? " score


if [ $score -gt 80 ]
then
	echo "You are so good, weldone!!!"
elif [ $score -eq 80 ]
then
	echo "You narrowly escaped!! Omoh! Thank God for you"
else
	echo "Sorry, you're out"
fi



