#  iteration

#create an iter that returns numbers
class MyNumbers:
    def __iter__(self):
        self.a=1
        return self
    def __next__(self):
        x=self.a
        self.a+=1
        return x

# myclass=MyNumbers()
# myiter=iter(myclass)

# print(next(myiter))
# print(next(myiter))
# print(next(myiter))
# print(next(myiter))
# print(next(myiter))
# print("\n")

# #create an iter that returns value of string
# mystr="Banana"
# myit=iter(mystr)

# print(next(myit))
# print(next(myit))
# print(next(myit))
# print(next(myit))
# print(next(myit))
# print(next(myit))
# print("\n")

#create an iter that returns value of tuple
mytuple=("Apple","Banana","Cherry")
myit=iter(mytuple)

print(next(myit))
print(next(myit))
print(next(myit))