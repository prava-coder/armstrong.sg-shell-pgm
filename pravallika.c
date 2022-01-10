#!/bin/bash 
#program: to check whether a given number is armstrong or not

echo "enter a number:"
for c in $*
do
x=$c
r=0
sum=0
n=0
while [ $x -gt 0 ]
do
  r=$( expr $x % 10 )
  n=$( expr $r \* $r \* $r )
 sum=$( expr $sum + $n )
  x=$( expr $x / 10 )
done

if [ $sum -eq $c ]
then
 echo "it is an armstrong number"
else
 echo "it is not an armstrong number"
fi
done

