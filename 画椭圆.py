import turtle 

pen=turtle.Turtle()#定义画笔实例
a=1
for i in range(120):
    if 0<=i<30 or 60<=i<90:
        a=a+0.2
        pen.lt(3)#当前位置向左转3
        pen.fd(a)#当前位置向前走a
    else:
        a=a-0.2
        pen.lt(3)
        pen.fd(a)
print(pen)
turtle.mainloop()
