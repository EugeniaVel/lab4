import math
def f(x,y):
    return ((-1)**y)/(math.sin(x*y)+1+y**2)
print("Введите x: ")
x=float(input())
eps=10**(-6)
S=f(x,1)
n=2
i=1
while i<10000:
    i=i+1
    S=S+f(x,n)
    if abs(f(x,n)-f(x,n-1))<eps:
        break
    n=n+1
print("Сумма ряда: " + str(S))
print("Количество итераций: " + str(i))