import functools
numbers = [1,2,3,4,5,6]
duplicate = []

# basic 
for i in numbers:
  duplicate.append(i**2)
  
print(duplicate)

# map
duplicate2 = list(map(lambda i : i**2,numbers))
print(duplicate2)
#filter
even = list(filter(lambda i: i if i%2 ==0 else 0, numbers))
print(even)
#reduce
sum = functools.reduce(lambda result, i : result + i, numbers)
print(sum)
