class Solution:
    def numberOfBeams(self, bank: List[str]) -> int:
        arr = []
        for i in range(len(bank)):
            temp = bank[i].count("1")
            if temp > 0: arr.append(temp)
        cnt = 0
        for i in range(len(arr)-1):
            cnt += (arr[i] * arr[i+1])
        return cnt
