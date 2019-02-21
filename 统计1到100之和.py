def add(num):
    if num==1:
        sum=1
        return sum
    else:
        sum=num+add(num-1)
        return sum
print("1+2+3+...+100=%d"%add(100))
