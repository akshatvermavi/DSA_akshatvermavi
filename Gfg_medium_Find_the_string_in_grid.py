class Solution:
    def check(self,i,j,grid,word,diff):
        l=len(word)
        row=len(grid)
        col=len(grid[0])
        n=l
        while n:
            if i<0 or j<0 or i>=row or j>=col:
                return False
            if grid[i][j]!=word[l-n]:
                return False
            i+=diff[0]
            j+=diff[1]
            n-=1
        return True

	def searchWord(self, grid, word):
	    d=[[0,1],[0,-1],[1,0],[-1,0],[1,1],[1,-1],[-1,1],[-1,-1]]
		row=len(grid)
		col=len(grid[0])
		res=[]
		for i in range(row):
		    for j in range(col):
		        for k in range(8):
    		        if self.check(i,j,grid,word,d[k]):
    		            res.append([i,j])
    		            break
		return res
