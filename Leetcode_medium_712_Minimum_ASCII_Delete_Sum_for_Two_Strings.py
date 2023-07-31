class Solution:
    def minimumDeleteSum(self, s1: str, s2: str) -> int:
        s1,s2 = s1.encode(),s2.encode()
        @cache
        def dp(n,m):
            if n==0 : return sum(s2[:m])
            if m==0 : return sum(s1[:n])
            if s1[n-1] == s2[m-1] : return dp(n-1, m-1)
            return min(
                s1[n-1]+dp(n-1,m),
                s2[m-1]+dp(n,m-1),
            )
        return dp(len(s1), len(s2))
