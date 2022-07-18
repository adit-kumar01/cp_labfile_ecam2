# Global variable and local variable:
#global variable
z=25
def myfunction():
    global z
    print(z)
myfunction()
print(z)

#local variable
def sum(x,y):
    sum=x+y
    return sum
print(sum(5,10))
print(sum)
