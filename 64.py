# x in sequence
cities = ['Delhi', 'Gujrat', 'Punjab']
print('Punjab' in cities)
# x not in sequence
cities = ['Delhi', 'Gujrat', 'Punjab']
print('Punjab' not in cities)
# x+y
x = [1, 2, 3, 6, 7]
y = [2, 4, 5, 6, 8]
z = x+y
print(z)
# x*n or n*x
x = [1, 2, 3, 6, 7]
print(x*2)
# sequence[i]
x = [1, 2, 3, 6, 7]
print(x[3])
# sequence[i:j]
x = [1, 2, 3, 6, 7]
print(x[1:4])
# sequence[i:j:k]
x = [1, 2, 3, 6, 7]
print(x[0:4:2])
# len()
cities = ['Delhi', 'Gujrat', 'Punjab']
print(len(cities))
# min(seq)
numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
print(min(numbers))
# max(seq)
numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
print(max(numbers))
# seq.index(x)
numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
z = numbers.index(7)
print(z)
# seq.count(x)
l = [6, 65, 64, 44, 46, 32, 87, 46]
z = l.count(46)
print(z)
# seq.append(x)
x = [1, 2, 3, 6, 7]
x.append(43)
print(x)
# seq.clear()
x = [1, 2, 3, 6, 7]
x.clear()
print(x)
# seq.insert(i,x)
x = [1, 2, 3, 6, 7]
x.insert(3, 43)
print(x)
# seq.pop()
x = [1, 2, 3, 6, 7]
x.pop()
print(x)
# seq.remove(x)
x = [1, 2, 3, 6, 7]
x.remove(2)
print(x)
# seq.reverse()
x = [1, 2, 3, 4, 5]
x.reverse()
print(x)