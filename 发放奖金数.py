I=float(input("Please input:"))
if I<=100000:
    prize=1.1*I
else:
    if I<200000:
        prize=I+10000+(I-100000)*0.075
    elif 200000<=I<=400000:
        prize=I+17500+(I-200000)*0.05
    elif 400000<I<=600000:
        prize=I+27500+(I-400000)*0.03
    elif 600000<I<=1000000:
        prize=I+33500+(I-600000)*0.015
    else:
        prize=I+10000+7500+10000+6000+6000+(I-1000000)*0.01
print("所得奖金总数为%f"%prize)
