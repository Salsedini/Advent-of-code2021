lista=[]

with open('fichero', 'r') as f:
    for line in f:
        lista.append(line)

ejeX=0
ejeY=0
aim=0
Movimiento=[]

for index,current in enumerate(lista):
    Movimiento=lista[index].split()
    direccion=Movimiento[0]
    avance=int(Movimiento[1])
    if(direccion=='up'):
        aim=aim-avance
    elif(direccion=='down'):
        aim=aim+avance
    else:
        ejeX=ejeX+avance
        ejeY+=(avance*aim)
        

resultado=ejeX*ejeY
print(f"El resultado es {resultado}")


