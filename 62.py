# Random Module:
import random

#1choice()
from random import choice
l1=[1,2,3,4,5,6]
print(choice(l1))

#2randit()
from random import randint
otp=randint(100000,999999)
print("Your OTP is:",otp)

#shuffle()
from random import shuffle
l2=["Apple","Banana","Mango"]
x=shuffle(l2)
print(l2)
