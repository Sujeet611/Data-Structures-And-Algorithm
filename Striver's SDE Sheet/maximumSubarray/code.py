def max_sub_array(nums):
    sum=0
    maxi=float('-inf')

    for num in nums:
        sum+=num
        maxi=max(maxi,sum)
        if(sum<0):
            sum=0

    return maxi

nums=[-2,1,-3,4,-1,2,1,-5,4]
ans=max_sub_array(nums)
print(ans)