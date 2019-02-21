def years(num):
    if num==1:
        return 10
    elif num>1:
        return years(num-1)+2
    else:
        return -1

print("第五个人%d岁"%years(5))
    
