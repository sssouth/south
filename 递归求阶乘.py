def jiecheng(n):
    if n==1:
        return 1
    else:
        return jiecheng(n-1)*n

print("5!=%d"%jiecheng(5))
