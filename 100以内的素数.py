for num in range(2,100,1):
    flag=0
    for a in range(2,num,1):
        if num%a==0:
            flag=1
            break
    if flag==0:
        print("%d is a prime number."%num)
    else:
        pass
