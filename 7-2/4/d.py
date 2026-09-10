while(True):
    t=input()
    t=ord(t)
    if(t>96 and t<123):
        print(chr(t-32))
        continue
    elif(t>64 and t<91):
        print(chr(t+32))
        continue
    else:
        print('exit')
        break
    
