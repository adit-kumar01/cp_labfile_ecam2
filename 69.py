#creation of frozen set:
person = {"name": "Komi", "age": 19, "sex": "female"}
fSet = frozenset(person)
print('The frozen set is:', fSet)

# Change the value of frozen set: 
mylist=['Apple','Banana']
x=frozenset(mylist)
x[1]="Kiwi"
print(mylist)
