a= input()
b = input()
a= int(a)
b= int(b)
def add(i,j):
    return i+j
def sub(i,j):
    return i-j
def mul(i,j):
    return i*j
def div(i,j):
    return a/b
def mod(i,j):
    return a%b
def printMsg():
    print('completed')
print('sum: ' + str(add(a,b)))
print('difference: ' + str(sub(a,b)))
print('product: ' + str(mul(a,b)))
print('division: ' + str(div(a,b)))
print('remainder: ' + str(mod(a,b)))
printMsg()
