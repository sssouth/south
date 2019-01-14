for num in range(2,1000,1):
    list=[1]
    sum=1
    for a in range(2,num,1):
        if num%a==0:
            sum+=a
            list.append(a)
    if num==sum:
        print("%d its factors:"%num,list)
