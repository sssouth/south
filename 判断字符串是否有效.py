strin=input("请输入只包括'(',')','[',']','{','}'的字符串：")
a_string=strin
if a_string.strip()=='':
    print("%s是一个有效的字符串."%strin)
else:
    if len(a_string)%2==1:                                              #判断字符串的个数（奇数必无效)
        print("%s是一个无效的字符串."%strin)
    else:
        for n in range(len(a_string)):
            for i in range(len(a_string)-1):
                if a_string[i]=='(' and a_string[i+2]==')' or a_string[i]=='[' and a_string[i+1]==']' or a_string[i]=='{' and a_string[i+1]=='}':
                    a_string = a_string[:i]+a_string[i+2:]              #字符串拼接
                    break
        if len(a_string)>2:
            print("%s是一个无效的字符串."%strin)
        if len(a_string)==2:
            d=['()','[]','{}']
            if a_string not in d:
                print("%s是一个无效的字符串."%strin)
            else:
                print("%s是一个有效的字符串."%strin)
