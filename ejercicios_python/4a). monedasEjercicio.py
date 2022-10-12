monto = int(input("Ingrese el monto "))
vlr = int(input("Ingrese el valor a pagar "))
v = monto - vlr
m1000 = v // 1000
m500 = (v % 1000)//500
m200 = ((v % 1000)%500)//200
m100 = (((v % 1000)%500)%200)//100

print(m1000, m500, m200, m100)
   