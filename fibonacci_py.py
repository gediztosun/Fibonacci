num = int(input())

a = 0
b = 1

print(a, end = ', ')

for c in range(num-1):   
    print(b, end = ', ')
    
    b += a
    a = b - a

print(b);
