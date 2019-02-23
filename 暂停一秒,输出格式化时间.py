import time

print(time.strftime("%Y-%m-%d %H:%M:%S",time.localtime()))#格式化当前时间
time.sleep(1)#暂停一秒输出
print(time.strftime("%Y-%m-%d %H:%M:%S",time.localtime()))#格式化当前时间
