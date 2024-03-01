#!/bin/bash
echo "pls enter the year ::"
read a

if [[ $(($a%4)) == 0 && $(($a%100)) != 0 || $(($a%400)) == 0 ]]; then
  echo "it is a leap year"
else
  echo "it is not a leap year"
fi
