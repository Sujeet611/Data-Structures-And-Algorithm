def max_profit(prices):
    maxi=0
    mini=float('inf')

    for price in prices:
        mini=min(mini,price)
        maxi=max(maxi,price-mini)
    
    return maxi

prices=[7,1,5,3,6,4]
ans=max_profit(prices)
print(ans)