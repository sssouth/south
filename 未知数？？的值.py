for x in range(10,100):
    a=809*x
    b=8*x
    c=9*x
    if (1000<=a and a<10000) and (10<=b and b<100) and (100<=c and c<1000) and (a==100*b+c):
        print("所求的数x=%d"%x)
        break
