def setZeroes(matrix):
    if not matrix:
        return matrix;

    n=len(matrix);
    m=len(matrix[0]);
    col0=1

    for i in range(n):
        for j in range(m):
            if(matrix[i][j]==0):
                matrix[i][0]=0
                if(j==0):
                    col0=0
                else:
                    matrix[0][j]=0;

    for i in range(1,n):
        for j in range(1,m):
            if(matrix[i][0]==0 or matrix[0][j]==0):
                matrix[i][j]=0
    
    if(matrix[0][0]==0):
        for j in range(m):
            matrix[0][j]=0
    
    if(col0==0):
        for i in range(n):
            matrix[i][0]=0

    return matrix

matrix=[[0,1,2,0],[3,4,5,2],[1,3,1,5]]
ans=setZeroes(matrix)

for row in ans:
    print(" ".join(map(str,row)))
    
