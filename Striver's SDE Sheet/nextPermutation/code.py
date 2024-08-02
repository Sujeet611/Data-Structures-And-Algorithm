def next_permutation(nums):
    n=len(nums)
    ind=-1

    for i in range(n-2,-1,-1):
        if(nums[i]<nums[i+1]):
            ind=i
            break

    if(i==-1):
        nums.reverse()
        return nums
    else:
        for i in range(n-1,ind,-1):
            nums[i],nums[ind]=nums[ind],nums[i]
            break
    
    nums[ind+1:]=reversed(nums[ind+1:])
    return nums

nums=[1,3,2,4]
ans=next_permutation(nums)

print(" ".join(map(str,ans)))