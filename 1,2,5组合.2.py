for c in range(0,21):
    if c%2==0:
        for b in range(0,100-5*c,2):
            a=100-b-c
            print("%-2d+2*%-2d+5*%-2d=100"%(a,b,c))
    else:
        for b in range(1,100-5*c,2):
            a=100-b-c
            print("%-2d+2*%-2d+5*%-2d=100"%(a,b,c))
    
