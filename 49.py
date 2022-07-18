# Write a program to perform all the possible  Operations in list (11 operations).
my_list = [7, 5, 7, 1, 2]

# count the occurrences of a particular element
print("Occurence of 7:", my_list.count(7))

# append an element to the list
my_list.append(4)
my_list.append(5)
my_list.append(6)
print("\nUpdated list:", my_list)

# insert a new element into the list
my_list.insert(3, 4)
my_list.insert(4, 5)
my_list.insert(5, 6)
print("\nUpdated list:", my_list)

# remove an element from the list
my_list.remove(4)
print("\nUpdated list:", my_list)

# pop an element from the list
my_list.pop(5)
print("\nUpdated list:", my_list)

# slice the list
print("\nUpdated list:")
print(my_list[:4])  # prints from beginning to end index
print(my_list[2:])  # prints from start index to end of list
print(my_list[2:4])  # prints from start index to end index
print(my_list[:])   # prints from beginning to end of list

# reverse list
print("\nReverse list:")
print(my_list[::-1])
my_list.reverse()
print(my_list)

# finding min and max values
list = [8, 5, 7]
print("\nFinding min and max values:", list)
print("Min value:", min([8, 5, 7]))
print("Max value:", max([8, 5, 7]))

# sorting the list
my_list.sort()
print("\nSorted list:", my_list)

# clear the list
my_list.clear()
print("\nCleared list:", my_list)
