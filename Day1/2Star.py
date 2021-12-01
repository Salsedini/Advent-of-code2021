result=0
lista=[]
with open('fichero', 'r') as f:
    for line in f:
        valor=int(line)
        lista.append(valor)
        
for index,current in enumerate(lista):
    if(index>2):
        sumA=lista[index-3]+lista[index-2]+lista[index-1]
        sumB=lista[index-2]+lista[index-1]+current
        if(sumA<sumB):
            result+=1
print(result)