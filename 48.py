# Write a program to perform operators in python
a=9
b=4

# ARITHEMATIC OPERATORS
add=a+b
sub=a-b
mul=a*b
div=a/b
mod=a%b
print(add,sub,mul,div,mod,sep="\n")

# COMPARISION OPERATORS
print(a>b)
print(a<b)
print(a==b)
print(a!=b)
print(a>=b)
print(a<=b)

#LOGICAL OPERATOS
t=True
f=False
print(t and f)
print(t or f)
print(not t)

# BITWISE OPERATORS
print(a&b)
print(a|b)
print(~a)

# ASSIGN OPERATORS
b+=a
print(b)
b-=a
print(b)
b*=a
print(b)

# IDENTITY OPERATORS
c=a
print(a is not b)
print(a is c)
