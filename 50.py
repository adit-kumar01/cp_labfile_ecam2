# Write a program to perform all the possible Operations in tuple (11 operations)
# Accessing tuple elements using indexing
my_tuple =('A','b','c','d','e','f','g') 
print("Accessing tuple elements using indexing")
print(my_tuple[0])   
print(my_tuple[5]) 

# Negative indexing for accessing tuple elements
print("\nNegative indexing for accessing tuple elements")
print(my_tuple[-2])
print(my_tuple[-4])

# Slicing the tuple elements
print("\nSlicing the tuple elements")
print(my_tuple[1:5])
print(my_tuple[:-7])
print(my_tuple[7:])
print(my_tuple[:])

# Deleting tuples
print("\nDeleting tuple!")
del my_tuple

#counting occurence
my_tuple = ('a', 'p', 'p', 'l', 'e',)
print("\nCounting occurence!",my_tuple)
print("p occurs:",my_tuple.count('p'))  
print("l occurs:",my_tuple.count('l'))  

#finding index of an element
print("\nIndex of l:",my_tuple.index('l'))

# In operation
print("\n",my_tuple)
print("Is a present in tupple?",'a' in my_tuple)
print("Is b present in tupple?",'b' in my_tuple)

# Not in operation
print("\nIs g not in tupple?")
print('g' not in my_tuple)

# Reassignment of elements
print("\nOriginal tuple:",my_tuple)
my_tuple=('A','r','i','h','a','n','t')
print("tuple after assignment:",my_tuple)

#Concatenating 2 tuples
tuple_1=('a','b','c','d','e')
tuple_2=(1,2,3,4,5)
print("\nTuples before concatenation:")
print(tuple_1)
print(tuple_2)
print("Tuples after concatenation:",tuple_1+tuple_2)
