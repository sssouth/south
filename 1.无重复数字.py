count=0
for a in range(1,5):
    for b in range(1,5):
        for c in range(1,5):
            if (a!=b and a!=c and b!=c):
                num=a*100+b*10+c
                print("%d"%num)
                count+=1
            
print("%d"%count)
