for a in range(1,5,1):
    for b in range(1,5-a,1):
        print(" ",end='')
    for c in range(1,2*a,1):
        print("*",end='')
    print("")
for a in range(5,8,1):
    for b in range(1,a-3,1):
        print(" ",end='')
    for c in range(1,2*(8-a),1):
        print("*",end='')
    print("")
