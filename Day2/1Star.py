lista=[]

with open('fichero', 'r') as f:
    for line in f:
        lista.append(line)

ejeX=0
ejeY=0
Movimiento=[]

for index,current in enumerate(lista):
    Movimiento=lista[index].split()
    direccion=Movimiento[0]
    avance=int(Movimiento[1])
    if(direccion=='up'):
        ejeY=ejeY-avance
    elif(direccion=='down'):
        ejeY=ejeY+avance
    else:
        ejeX=ejeX+avance
        

resultado=ejeX*ejeY
print(f"El resultado es {resultado}")


