result=0
contador=0
with open('fichero', 'r') as f:
    for line in f:
        valor=int(line)
        if(contador!=0):
            if(valor>previous_value):
                result+=1
        previous_value=valor
        contador+=1
    print(result)