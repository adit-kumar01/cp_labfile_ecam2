# Write a program to perform all possible Operations in dictionary (12 operations)
my_dict={'name': 'Adit Kumar','year': '2022'}

#Accessing Elements from Dictionary
print(my_dict)
print(my_dict['name'])
print(my_dict['year'])

#Adding element
my_dict['age']=18
print("Updated dictionary",my_dict)

#Updating values
my_dict['name']="people"
print("Updated dictionary",my_dict)

#pop operation
print(my_dict.pop('year'))

#popitem operation
print(my_dict.popitem())

#clear operation
my_dict.clear()
print("Cleared dictionary",my_dict)

#copy operation
dict={1:'apple',2:'orange',3:'grapes'}
print("\nOriginal dictionary",dict)
new_dict=dict.copy()
print("\nCopied Dictionary",new_dict)

#items operation
marks = {'Physics':88, 'Maths':93}
print(marks.items())

#values operation
print(marks.values())

#keys operation
key=marks.keys()
print(key)

# Dictionary Comprehension
squares = {x: x*x for x in range(6)}
print(squares)
