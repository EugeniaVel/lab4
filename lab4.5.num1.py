def integ(i,S,x,h,n):
    def f(x):
        return (x**4)*(1+x**2)**(-1)
    while i<=n:
        i=i+1
        S=S+f(x+h/2)
        x=x+h
    S=S*h
    return S
a=1
b=2
eps=0.000001
h0=eps**0.25
n0=round((b-a)/h0)
h0=(b-a)/n0
h1=h0/2
n1=n0*2
i0=integ(1,0,a,h0,n0)
i1=integ(1,0,a,h1,n1)
while abs(i1-i0)>eps:
    h0=h1
    n0=n1
    h1=h0/2
    n1=n0*2
    i0=integ(1,0,a,h0,n0)
    i1=integ(1,0,a,h1,n1)
print("Значение интеграла по методу средних прямоугольников: " + str(i1))