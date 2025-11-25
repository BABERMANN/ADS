arq = open("clima.dat","r")
    
linha = arq.readline()

superior_30 = []
while linha != "":
    texto = linha.split()        

    numero_dia = int(texto[0])
    temp_max = float(texto[1])
    umi_max = int(texto[3])
    umi_min = int(texto[4])
    press_min = float(texto[6])
    velo_vento = float(texto[7])

        #1
    if temp_max > 30:
                superior_30.append(numero_dia)

        #2
    dias_diff6 = 0 
    if (umi_max - umi_min) > 6:
            dias_diff6 += 1


        #3
    soma_vento = 0
    soma_vento += velo_vento

        #4

    menor_press = 999
    if menor_press > press_min:
        menor_press = press_min
        menor_dia = numero_dia
        

    linha = arq.readline()
    
media_vento = soma_vento / 50

arq.close()


print(superior_30)
print(dias_diff6)
print(media_vento)
print(menor_press)


prova_arq = open('relatorio.txt',"w")
prova_arq.write("="*60+"\n")
prova_arq.write("dias quais a temperatura maxima superou 30 graus:\n")
prova_arq.write(str(superior_30)+"\n")
prova_arq.write("Quantidades de dias que a diferenca entre umidade maxima e minima foi maior de 6:"+ str(dias_diff6)+'\n')
prova_arq.write("Media da velocidade do vento nos 50 dias:"+str(media_vento)+"\n")
prova_arq.write("Menor pressao registrada:"+str(menor_press)+";"+"Dia ocorrido:"+str(menor_dia)+"\n")
prova_arq.write("="*60)

arq.close()


------------------------------------------------------------------------------------------


def calcula_pontos(M,D):
    soma_verde = 0
    soma_azul = 0
    for i in range(8):
        for j in range(8):
            if M[i][j] != 0:
                if M[i][j][1] == "verde":
                    valor_verde = D.get(M[i][j][0])
                    soma_verde += valor_verde
                elif M[i][j][1] == "azul":
                    valor_azul = D.get(M[i][j][0])
                    soma_azul += valor_azul
    print("Azul:",soma_azul)
    print("Verde:",soma_verde)
                    
                
                
                 

    

def main():
    D={'anjo':17,'bruxa':12,'cavaleiro':20,'dragão':18,'duende':5,'fada':10,'feiticeiro':12,
       'gnomo':8,'lobisomem':9,'mago':15,'princesa':4,'vampiro':13,'wendigo':16}
    M1 = [[0, 0, 0, 0, 0, ('fada', 'azul'), 0, 0],
         [0, 0, ('dragão', 'verde'), 0, 0, ('bruxa', 'verde'), 0, 0],
         [0, 0, 0, 0, ('mago', 'verde'), 0, 0, 0],
         [0, 0, 0, 0, 0, 0, ('feiticeiro', 'azul'), 0],
         [0, 0, 0, ('cavaleiro', 'azul'), 0, 0, 0, 0],
         [0, 0, 0, 0, ('duende', 'verde'), 0, 0, 0],
         [0, 0, 0, 0, 0, 0, ('vampiro', 'azul'),  0],
         [0, 0, 0, 0, 0, ('anjo', 'azul'), ('lobisomem', 'verde'), 0],
         [0, 0, ('gnomo', 'azul'), 0, 0, 0, 0, 0],
         [0, 0, ('cavaleiro', 'verde'), 0, 0, 0, 0, 0]]
    M2 = [[('fada', 'verde'), 0, 0, 0, 0, 0, 0, ('lobisomem', 'verde')],
          [0, 0, ('princesa', 'verde'), 0, 0, ('bruxa', 'azul'), 0, 0],
          [0, 0, 0, 0, 0, ('mago', 'verde'), 0, 0],
          [0, 0, 0, 0, 0, ('feiticeiro', 'azul'), 0, 0],
          [0, 0, 0, 0, 0, ('wendigo', 'azul'), 0, 0],
          [0, ('duende', 'verde'), 0, 0, 0, 0, 0, 0],
          [0, 0, ('gnomo', 'verde'), 0, 0, 0, ('vampiro', 'azul'), 0],
          [('cavaleiro', 'verde'), 0, 0, 0, 0, 0, 0, ('anjo', 'azul')]]
    calcula_pontos(M1,D)
    print()
    calcula_pontos(M2,D)


main()
    





