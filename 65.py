from collections import namedtuple

student=namedtuple("Student",["name","age","DOB"])
s=student('Komi','19','25/12/2002')

#calling value usng index
print("The student age using index is:",end=" ")
print(s[1])

#calling value using keyname
print("The student name using keyname is:",end=" ")
print(s.name)

#calling value using getattr
print("The student DOB using getattr is:",end=" ")
print(getattr(s,'DOB'))
