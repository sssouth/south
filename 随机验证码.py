import random

a=chr(random.randrange(66,122,2))#将数字转换成字符
b=random.randint(1,9)#从1到9中随机产生一个数
c=random.choice("abcefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ")#从字符串中随机选择一个字符
d=random.randint(0,9)
print("%s%d%s%d"%(a,b,c,d))
    
    
