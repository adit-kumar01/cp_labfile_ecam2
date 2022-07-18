# Programs to perform all possible operations on string:
# Creating String:
my_string = 'Welcome'
print(my_string)
my_string = "Welcome"
print(my_string)
my_string = '''WElcome'''
print(my_string)
my_string = """Hello, welcome to
the world of Python"""
print(my_string)

# Slicing in String:
str = 'achievement'
print('str = ', str)
print('str[0] = ', str[0])
# last character
print('str[-1] = ', str[-1])
# slicing 2nd to 5th character
print('str[1:5] = ', str[1:5])
# slicing 6th to 2nd last character
print('str[5:-2] = ', str[5:-2])

# Deleting entire string:
x = "hello coder"
del x 
print(x)

# Concatenation of two or more strings:
str1 = 'Hello'
str2 = 'World!'
# using +
print('str1 + str2 = ', str1 + str2)
# using *
print('str1 * 3 =', str1 * 3)

# Lterating through a string:
count = 0
for letter in 'uncopyrightable':
    if(letter == 'l'):
        count+= 1
print(count, 'letters found')

# len() function over string:
str="Hello"
print(len(str))
