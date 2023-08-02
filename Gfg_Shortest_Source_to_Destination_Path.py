def shortestDistance(self,N,M,A,X,Y):
        #code here
        if A[0][0]==0 or not self.isvalid(X,Y,N,M,A):
            return -1
        dir=[(-1,0),(1,0),(0,1),(0,-1)]
        q=deque([(0,0,0)])
        visited=set()
        while q:
            x,y,step=q.popleft()
            if x==X and y==Y:
                return step
            for dx, dy in dir:
                new_x, new_y=x+dx, y+dy

                if self.isvalid(new_x, new_y, N, M, A) and (new_x, new_y) not in visited:
                    visited.add((new_x, new_y))
                    q.append((new_x, new_y, step+1))
        return -1
