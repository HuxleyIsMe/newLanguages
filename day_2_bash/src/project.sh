#!/usr/bin/env bash

echo "Welcome to our project!"


read -p "What is your name? " name

read -p "What year were you born? " yearOfBirth

age=$((2024 - $yearOfBirth))

if [ $age -lt 30 ]
then
echo 'ooo still sneakily in your twenties!'
elif [ $age -gt 30 ]; then
echo 'welcome to the squeaky knees club'
else
echo 'how did you trigger this?'
fi

echo "$name $age"