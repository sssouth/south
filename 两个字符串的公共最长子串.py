str_a=input("Please input str-a:")#任意输入两个字符串
str_b=input("Please input str-b:")
alist=[]#列表用来存储所有公共子串
for i in range(0,len(str_a)):#遍历每字符串每一个元素
    for j in range(0,len(str_b)):
        mutual=''
        if str_a[i]==str_b[j]:#判断元素是否相等,若相等,继续执行while,否则新一轮循环
            m,n=i+1,j+1
            mutual=mutual+str_a[i]#暂时存储公共子串
            while 1:
                if m>=len(str_a) or n>=len(str_b):#防止下标越界
                    alist.append(mutual)#添加公共子串
                    break
                if str_a[m]==str_b[n]:#判断元素是否相等
                    mutual=mutual+str_a[m]
                    m+=1
                    n+=1
                else:
                    alist.append(mutual)
                    break
print("两个字符串的所有公共子串:",end='')
print(alist)
MAX=0
for i in alist:#在公共子串中寻找最长公共子串
    if MAX<len(i):
        M_string=i
        MAX=len(i)
print("两个字符串的最长公共子串:%s"%M_string)
