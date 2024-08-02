def sort_colors(nums):
    n=len(nums)
    i=0
    j=0
    k=n-1

    while(j<=k):
        if(nums[j]==0):
            nums[i],nums[j]=nums[j],nums[i]
            i+=1
            j+=1
        elif(nums[j]==1):
            j+=1
        else:
            nums[j],nums[k]=nums[k],nums[j]
            k-=1
    
    return nums

nums=[2,0,2,1,1,0]
ans=sort_colors(nums)
print(" ".join(map(str,ans)))