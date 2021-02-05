def isHappy(self, n: int) -> bool:
    sumer = 0
    prevsum = []
    
    while True:
        prevsum.append(sumer)
        sumer=0
        while(n):
            hold = n%10
            sumer += (hold**2)
            n = int(n/10)
        if sumer == 1:
            print('true')
            break
        else:
            n=sumer
            if sumer in prevsum:
                print('false')
                break

isHappy(0,19)