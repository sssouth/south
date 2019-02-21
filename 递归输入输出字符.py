def digui(count):
    if count==1:
        a=input("请输入第%d个字母:"%count)
        print("第%d个字母是%s:"%(count,a))
    else:
        a=input("请输入第%d个字母:"%count)
        digui(count-1)
        print("第%d个字母是%s:"%(count,a))

num=int(input("请输入一个数字:"))
digui(num)
