x,y,z=eval(input("Please input x,y,z:"))
if x>y:
    x,y=y,x
if x>z:
    x,z=z,x
if y>z:
    y,z=z,y
print("三个数由小到大排序;%d,%d,%d"%(x,y,z))
