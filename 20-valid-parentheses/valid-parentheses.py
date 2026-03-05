class Solution:
    def isValid(self, s: str) -> bool:
        k = "({["
        j = ")}]"
        l : list[str] = []
        for i in range(len(s)):
            if s[i] in k :
                l.append(s[i])
            elif s[i] in j :
                m = j.index(s[i])
                if(len(l) != 0 and l[-1] == k[m] ):
                    l.pop()
                else :
                    return False


        if not l :
            return bool(1)
        else:
            return bool(0)       


            

                
        
        