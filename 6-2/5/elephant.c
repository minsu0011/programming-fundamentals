a, b, c = input().split()
a = int(a)
b = int(b)
c = int(c)
if (a <= b and a <= c) :
    min = a
    elif(b <= a and b <= c) :
    min = b
    elif(c <= b and c <= a) :
    min = c;
if (a >= b and a >= c) :
    max = a;
elif(b >= a and b >= c) :
    max = b;
elif(c >= b and c >= a) :
    max = c;
print('min: ' + str(min))
print('max: ' + str(max))