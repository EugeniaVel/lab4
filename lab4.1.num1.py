def f(k):
    return 3/(2**(k-1)) + ((-1)**(k-1))/(2*3**(k-1))
eps=10**(-6)
S=0
i=0
k=1
while i<10000:
    i=i+1
    S=S+f(k)
    if abs(f(k)-f(k-1))<eps:
        break
    k=k+1
print ("Сумма ряда с указанной точностью: " + str(S))
print ("Количество итераций: " + str(i))