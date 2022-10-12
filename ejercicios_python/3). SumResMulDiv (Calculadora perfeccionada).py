"""num_1 = float(input("Ingrese numero: "))

num_2 = float(input("ingrese otro numero: "))

operacion = input ("Elija entre: suma, resta, division, multiplicacion ")

if operacion == "suma":
   print(num_1 + num_2)

if operacion == "resta": 
   print(num_1 - num_2)

if operacion == "division":
      print(num_1 / num_2)


if operacion == "multiplicacion": 
   print(num_1 * num_2)  """


"""while True:
   try: 
      n1 = int(input("Introduce tu primer número: ") )
      break
   except ValueError:
      print("¡¡Pilas debes ingresar un número!!")

while True:
   try: 
      n2 = int(input("Introduce tu segundo número: ") )
      break
   except ValueError:
      print("¡¡Pilas debes ingresar un número!!")

opcion = 0

while True:
   print(
   Dime, ¿qué quieres hacer?
   
   1) Sumar los dos números
   2) Restar los dos números
   3) Multiplicar los dos números
   4) Dividir los dos números
   5) Cambiar los números elegidos
   6) Apagar calculadora

   ) #Pregunta que es lo que quiere hacer
   
   opcion = int(input("Elige una opción: ") )

   if opcion == 1:   #Sumar los dos numeros
      print(" ")
      print("RESULTADO: La suma de",n1,"+",n2,"es igual a",n1+n2)
   elif opcion == 2:    #Restar los dos numeros
      print(" ")
      print("RESULTADO: La resta de",n1,"-",n2,"es igual a",n1-n2)
   elif opcion == 3:    #Multiplica los dos numeros
      print(" ")
      print("RESULTADO: El producto de",n1,"*",n2,"es igual a",n1*n2)
   elif opcion == 4:    #Divide los dos numeros
      if n2 == 0:       #Este else identifica si el valor a dividir es 0
         print("No se puede dividir por 0")
      else:
         print("RESULTADO: El producto de",n1,"/",n2,"es igual a",n1/n2)
   elif opcion == 5:       #Vuelve a preguntar los dos numeros
      n1 = float(input("Introduce tu primer número: ") )
      n2 = float(input("Introduce tu segundo número: ") )
   elif opcion == 6:    #Cierra la calculadora
      break
   else:
      print("Opción incorrecta")"""

def opcion_variable():
   while True:
      try:
         opcion= int(input("Elije una opcion "))
         break
         return opcion
      except ValueError:
         print("Solo numeros!! ")


def cambiar_numeros():
   while True:
      try:
         n2 = int(input("Introduce tu primer número: "))
         break
         return n2
      except ValueError:
         print("¡¡Pilas debes ingresar un número!!")

def cambiar_numeros1():
   while True:
      try:
         n1 =int(input("Introduce tu segundo número: "))
         break
         return n2 
      except ValueError:
         print("¡¡Pilas debes ingresar un número!!")

"""Estas dos variables fueron declaradas para que al momento
      de ejecutar la función numero 5, el while true no nos chocara""" 


while True:
   try: 
      n1 = int(input("Introduce tu primer número: ") )
      break
   except ValueError:
      print("¡¡Pilas debes ingresar un número!!")

while True:
   try: 
      n2 = int(input("Introduce tu segundo número: ") )
      break
   except ValueError:
      print("¡¡Pilas debes ingresar un número!!")

opcion = 0

while True:
   print("""Dime, ¿qué quieres hacer?
   
   1) Sumar los dos números
   2) Restar los dos números
   3) Multiplicar los dos números
   4) Dividir los dos números
   5) Cambiar los números elegidos
   6) Apagar calculadora

   """) #Pregunta que es lo que quiere hacer
   while True:
      try: 
         opcion = int(input("Elige una opción: ") )
         break
      except ValueError:
         print("Elige solo numeros del 1 al 6")


   if opcion == 1:   #Sumar los dos numeros
      print(" ")
      print("RESULTADO: La suma de",n1,"+",n2,"es igual a",n1+n2)
   elif opcion == 2:    #Restar los dos numeros
      print(" ")
      print("RESULTADO: La resta de",n1,"-",n2,"es igual a",n1-n2)
   elif opcion == 3:    #Multiplica los dos numeros
      print(" ")
      print("RESULTADO: El producto de",n1,"*",n2,"es igual a",n1*n2)
   elif opcion == 4:    #Divide los dos numeros
      if n2 == 0:       #Este else identifica si el valor a dividir es 0
         print("No se puede dividir por 0")
      else:
         print("RESULTADO: El producto de",n1,"/",n2,"es igual a",n1/n2)
   elif opcion == 5:       #Vuelve a preguntar los dos numeros
      while True:
         try:
            n1 = int(input("Introduce tu primer número: ") )
            break
         except ValueError:
            print("¡¡Solo puedes colocar numeros!!")
      while True:
         try:
            n2 = int(input("Introduce tu segundo número: ") )
            break
         except ValueError:
            print("¡¡Solo puedes colocar numeros!!")
#Se coloca n1 y n2 separados para que al momento de fallar introducir
#mal algun input no vuelva a pedir el primero
   elif opcion == 6:    #Cierra la calculadora
      break
   else:
      print("Opción incorrecta")
