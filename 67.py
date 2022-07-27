#exception create
a=int(input("entr the value of A:"))
print("A:",a,"\n")

#try exception
try:
    a=int(input("enter the value of A:"))
    b=int(input("enter the value of B:"))
    c=a/b
    print("Answer:",c)
    print("Bye\n")

except Exception as e:
    print("exception caught:",e,"\n")


#many exception
try:
    #we have not define variable x
    print(x)
except NameError:
    print("var is not define\n")
except:
    print("exception caught\n")


#how to use else with except
try:
    print("Hello")
except:
    print("something went wrong\n")
else:
    print("nothing went wrong\n")


#finally block
try:
    print("Hello")
except:
    print("something went wrong\n")
finally:
    print("nothing went wrong\n")


#user define exception
class MyException(Exception):
    pass
c=25
if c>5:
    raise MyException("something went wrong")
