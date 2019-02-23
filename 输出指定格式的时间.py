import time

#输出时间戳
print(time.time())
#输出当前时间
print(time.localtime(time.time()))
#输出格式化时间
print(time.strftime("%H-%m-%d %H:%M:%S",time.localtime()))
