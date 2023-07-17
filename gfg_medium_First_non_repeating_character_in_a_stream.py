from collections import OrderedDict

class Solution:
    def FirstNonRepeating(self, A):
        # Code here
        out = ""
        dic = OrderedDict()
        for i in A:
            if i in dic:
                dic[i] += 1
            else:
                dic[i] = 1
            s = 0
            for i, j in dic.items():
                if j == 1:
                    out += i
                    s = 1
                    break
            if s == 0:
                out += '#'
        return out
