ch1=input("Please input ch1:")          #输入星期几第一个字母
if ch1=='M':
    print("Today is Monday.")
elif ch1=='W':
    print("Today is Wednesday.")
elif ch1=='F':
    print("Today is Friday.")
elif ch1=='T':
    ch2=input("Please input ch2:")      #输入星期几的第二个字母
    if ch2=='u':
        print("Today is Tuesday.")
    else:
        print("Today is Thursday.")
else:
    ch2=input("Please input ch2:")      #输入星期几的第二个字母
    if ch2=='a':
        print("Today is Saturday.")
    else:
        print("Today is Sunday.")
