
def num_to_binStr(n):
    arb =[]
    while n!=0:
        r = n%2
        arb.append(r)
        n = int(n/2)
    return arb

def binStr_count(ar):
    n=0
    for num in ar:
        if num == 1:
            n=n+1
    return n
 

arr = [10,100,1000,10000]
res = {}


for num in arr:
    print(num)
    binstr = num_to_binStr(num) #get binstr
    count = binStr_count(binstr)
    
    #if key doesnt exist
    if count not in res.keys():
        print(count)
        ls = [num]
        tup  = tuple(ls)
        res[count] = tup
    else:
        ls = list(res[count])
        ls.append(num)
        res[count] = tuple(ls)

sorted = []
keylist = list(res.keys())

keylist.sort()

for key in keylist:
    print(key)
    ls = list(res[key])
    print(ls)
    ls.sort()
    sorted.extend(ls)
    
print(sorted)



