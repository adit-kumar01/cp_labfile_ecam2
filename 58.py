# Write a program to perform break, continue and  pass statement in python
# Using break statement
s =[1,2,3,4,55,6,7,8,88,89,99]
for letter in s:     
    print(letter) 
   
    if letter > 50 and letter < 100: 
        break
    
print("Out of for loop") 

#Using continue statement
for i in range(1, 10):
	
	
	if i == 6:
		continue
	else:
		print(i, end = " ")

#Using pass statement

li =['a', 'b', 'c', 'd']
print("\n")
for i in li:
	if(i =='a'):
		pass
	else:
		print(i)
