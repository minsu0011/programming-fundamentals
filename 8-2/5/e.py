def combination(n,r) :
    if(n==r) :
        return 1
    if(r==0) :
        return 1
    return combination(n-1,r-1) + combination(n-1,r)
n,r=input().split()
n=int(n)
r=int(r)
print(combination(n,r))
