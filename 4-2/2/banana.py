def getNumOfDivisors(n) :
    cnt = 0
    for i in range(1,n+1):
        if(n%i == 0) :
            cnt+=1
    return cnt

print('Type the first number: ')
a = input()
print('Type the second number ')
b = input()

a = int(a)
b = int(b)

print('Number of divisors of the first number is ' + str(getNumOfDivisors(a)))
print('Number of divisors of the second number is ' + str(getNumOfDivisors(b)))