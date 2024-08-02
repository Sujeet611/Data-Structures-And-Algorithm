def generateRows(row):
    res=1
    ans=[]
    ans.append(res)

    for i in range(1,row):
        res=res*(row-i)//i;
        ans.append(res)

    return ans

def generate(numRows):
    ans=[]

    for i in range(1,numRows+1):
        ans.append(generateRows(i))
    
    return ans

numRows=5
ans=generate(numRows)

for i in ans:
    print(" ".join(map(str,i)))
