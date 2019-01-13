for a in range(1,10,1):
    for b in range(0,10,1):
        for c in range(0,10,1):
            if a**3+b**3+c**3==a*100+b*10+c:
                print("%d 是水仙花数"%(a*100+b*10+c))
