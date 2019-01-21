sum=4
s=4
for i in range(2,9,1):      # i表示组成的几位数
    if i==2:
        s=s*7
    else:
        s=s*8
    sum+=s
print("0-7可以组成%d个奇数."%sum)
