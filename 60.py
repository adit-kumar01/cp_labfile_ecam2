# Write a program to perform all the possible operation in functions:
# Inbuild function:
print("\n")    # create new line
#Round() 
x=round(33.6652)
print(x)

# User define functions:
#1 create function
def myfunction():
    print("hello")
myfunction()  #2calling function

#3 function with one argument
def myfunction(a):
    print("A:",a,"\n")
myfunction(10)

#4function with multiple argument
def myfunction(a,b):
    print ("A:",a)
    print("B:",b,"\n")
myfunction(10,20)

#5function with keyword arguments
def myfunction(child3,child2,child1):
    print("youngest child is:"+child3,"\n")
myfunction(child1="BARKHA",child2="AYUSH",child3="MADHAV")

#default parameter value
def myfunction(state="Gujrat"):
    print("I am from:"+state)
myfunction("Rajasthan")
myfunction("Punjab")
myfunction()
print("\n")

#passing a list into function
def myfunction(fruit):
    for i in fruit:
        print(i)
f=["Apple","Mango","Orange"]
myfunction(f)
print("\n")

#return value from function
def myfunction(x):
    return 5*x
print(myfunction(3))
print(myfunction(4))
print(myfunction(5))
print("\n")

#recursion function
def fact(x):
    if x==1:
        return 1
    else:
        return(x*fact(x-1))
num=int(input("num:"))
print("the fact of",num,"is:",fact(num),"\n")

#LAMBDA function
x=lambda a:a+10
print(x(5))
y=lambda a,b:a*b
print(y(5,10))