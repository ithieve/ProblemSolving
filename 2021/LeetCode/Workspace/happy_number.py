n = 19
sumer=0
prevsum=[]
countr=0

# find sum
while True:
    prevsum.append(sumer)
    sumer=0
    while (n):
        hold = n%10
        sumer += (hold**2)
        n = int(n/10)
    if sumer == 1:
        print("True")
        break
    else:
        n=sumer
        if sumer in prevsum:
            print("False")
            break
            
        
            
