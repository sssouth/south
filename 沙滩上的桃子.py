def peach(count):
    if count==1:
        sum=6
        return sum
    else:
        sum=5*peach(count-1)+1
        return sum
print("沙滩上至少%d个桃子"%peach(5))
        
        
    
