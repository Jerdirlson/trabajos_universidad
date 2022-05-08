import matplotlib.pyplot as plt
import numpy as np

def f(x):           #Definimos la funcion que queramos
    return 4 *x ** 2 + 6 * x  - 8 

a = 0                                       #Definimos el intervalo x1
b = 2                                       #Definimos el intervalos x2
error = 10                                  #Error inicial

i = 0 
while error > 1e-8:                         #Hace la pregunta del error y nos permitimos erro de 8 cifras decimales
    c = (a + b) / 2                         #C es una variable que esta cambiando
    fa = f(a)                               #Funcion evaluada en "a"
    fc = f(c)                               #Funcion evaluada en "c"
    
    if fc == 0:
        raiz = c 
        break
    elif fa * fc < 0:                       #Si la multiplicacion me da un valor negativo es porque en ese intervalo esta la raiz  
        b = c 
        
    else: 
        a = c 
        
    raiz = c
    
    i += 1
    
    if i > 100:                              #El algoritmo hace 100 iteraciones y deja de preguntar, ya que en el intervalo que se le proporciono, no hay ninguna raiz
        print("No hay ninguna raiz en el intervalo recibido")
        
        break
    
    print("Iteracion: ", i, "Raiz aproximada: ", raiz)
    
    error = abs(fc)                         #Abs es para declarar que fc solo pueda dar valores positivos ya que nos interesa es la distancia 
    
    

    
    
x = np.linspace(-5, 5, 101)
plt.plot(x, f(x))
plt.grid()
plt.show()