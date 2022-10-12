"""
Requerimientos de logica


requerimientos de interfaz





"""




def msgOpcionEntradaoSalida():
   opcion = int(input(
      """Ingresa una opción: 
         \n1.) Ingresar un auto 
         \n2.) Salida de auto 
         \n3.) salir del programa """))
   return opcion

#Mensaje de despedida en la opcion 3
def msgDespedida():
   msg = 'El sistema se apago !!Adios¡¡'
   return msg

def pedirDatosCarro():
   placa = input('Ingresar placa del carro ')
   horaEntrada = input ('Ingrese hora de entrada (Formato: hh:mm)  ')
   datosEntrada = (placa , horaEntrada )
   return datosEntrada

def main():
   encendido = True
   while encendido:
      opcion = msgOpcionEntradaoSalida()

      if opcion == 1:
         datosEntrada = pedirDatosCarro()

      if opcion == 3:
         encendido = False
         print (msgDespedida())


#el if __name__ es para que solo se ejecute lo que esta en la funcion
if __name__ == "__main__":
   main()


#Para tener en cuenta la hora de entrada y de salida la asigna la persona
#pero eso mismo se podria reemplazar por un datatime.now()
""""   
from datetime import datetime, date, time, timedelta
import calendar

      ahora = datetime.now()
         print("Hora:" , ahora.hour)"""
