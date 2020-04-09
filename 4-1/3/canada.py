global gMul
gMul = 1
def addTotal (n) :
    sum = 0
    for i in range(1, n+1):
        sum = sum + i
    return sum

def mulTotal (n) :
    global gMul
    for i in range(1, n+1):
        gMul = gMul * i
    return
num = input()
num = int(num)
print('addTotal(): ' + str(addTotal(num)))
mulTotal(num)
print('gMul: ' +str(gMul))
