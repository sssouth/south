count=0
while count<7:
    num=int(input("Please input num:"))
    if num>=1 and num<=50:
        for a in range(0,num,1):
            print('*',end='')
        print("")
        count+=1
