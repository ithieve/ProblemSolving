class Solution:
    def sortByBits(self, arr: List[int]) -> List[int]:
        res = {}
        for num in arr:
            #binstr
            n = num
            arb =[] #output
            while n!=0:
                r = n%2
                arb.append(r)
                n = int(n/2)
            
            #count
            count=0
            for n in arb:
                if n == 1:
                    count=count+1
                    
            #if key doesnt exist
            if count not in res.keys():
                ls = [num]
                tup  = tuple(ls)
                res[count] = tup
            else:
                ls = list(res[count])
                ls.append(num)
                res[count] = tuple(ls)
        
        keylist = list(res.keys())
        keylist.sort()
        sorted = []
        for keys in keylist:
            ls = list(res[keys])
            ls.sort()
            sorted.extend(ls)
        return sorted