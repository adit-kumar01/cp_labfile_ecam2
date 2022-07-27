# creation of set
thislist = {"Apple", "Kiwi", "Banana"}
print(thislist, "\n")

# len() function
set = {"Apple", "Kiwi", "Banana"}
print(len(set), "\n")

# constructor of set
thisset = (("Apple", "Kiwi"))
print(thisset, "\n")

# for loop
thisset = {"Apple", "kiwi"}
for x in thisset:
    print(x)
print("\n")

# access item
thisset = {"Apple", "Kiwi"}
print("Kiwi" in thisset, "\n")

# add item
thisset = {"Apple", "Kiwi"}
thisset.add("Orange")
print(thisset, "\n")

# update set
thisset = {"Apple", "Kiwi"}
sets = {1, 2, 3}
thisset.update(sets)
print(thisset, "\n")

# add any itterable
thisset = {"Apple", "Kiwi"}
mylist = ["Orange", '1']
thisset.update(mylist)
print(thisset, "\n")

# remove item
thisset = {"Apple", "Kiwi"}
thisset.remove("Kiwi")
print(thisset, "\n")

# pop item
thisset = {"Apple", "Kiwi"}
x = thisset.pop()
print(x)
print(thisset, "\n")

# join set
set1 = {"a", "b", }
set2 = {1, 2, 3}
set3 = set1.union(set2)
print(set3, "\n")

# intersection set
set1 = {"a", "b", }
set2 = {1, 2, 3}
set3 = set1.intersection_update(set2)
print(set3, "\n")


# symmatric difference
set1 = {"a", "b", }
set2 = {1, 2, 3}
set3 = set1.symmetric_difference_update(set2)
print(set3, "\n")

# clear item
thisset = {"Apple", "Kiwi"}
thisset.clear()
print(thisset, "\n")

# delete method
set5 = {"apple", "kiwi"}
del set5
print(set5)
