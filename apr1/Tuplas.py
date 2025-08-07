t = (3,3,3,3)

s_tupla = 0

for i in t:
  s_tupla +=t[i]
media_tupla = s_tupla / len(t)
print(media_tupla)
------------------------------------------------
import random

t = ()
for i in range(100)
  numeros = random.randint(1,15)
  t += (numeros,)
  cntg += 1
print(t)

contador_5 = 0

for i in t:
  if i == 5:
    contador_5 += 1
print(contador_5)

------------------------------------------------
exe-entrega

relatorio = ()

print("Digite (NN) para parar de registrar")
while nome.upper != "NN":
  nome = input("Digite o nome do aluno:")
  relatorio += (nome,)
  nota1 = float(input("Digite a primeira nota:"))
  relatorio += (nota1,)
  nota2 = float(input("Digite a segunda nota:"))
  relatorio += (nota2,)
  faltas = int(input("Digite o numero de faltas:"))
print(relatorio)
---------------------------------------------------

Escreva um programa que leia as seguintes informações de alunos: Nome, nota 1, nota 2, faltas. Essas informações devem ser agrupadas em uma tupla para cada aluno. As tuplas devem ser armazenadas em uma lista, contendo todos os alunos. Imprima um relatório contendo:
a)Nome, média e conceito de cada aluno (Aprovado se média >=6 e faltas < 20).
b)Porcentagem de alunos aprovados
c)Maior e menor média
d)Nome dos alunos que tiraram a maior nota
e)Nome dos alunos que não tiveram faltas
f)Nome e quantidade de faltas dos alunos que reprovaram por falta.


alunos = []
nome = ""

while nome.lower() != "sair":
    nome = input("Nome do aluno (ou 'sair' para terminar): ")
    if nome.lower() != "sair":
        nota1 = float(input("Nota 1: "))
        nota2 = float(input("Nota 2: "))
        faltas = int(input("Faltas: "))
        aluno = (nome, nota1, nota2, faltas)
        alunos.append(aluno)

print("\n--- RELATÓRIO ---")

aprovados = 0
medias = []
maior_media = 0
menor_media = 10
maior_nota = 0
nomes_maior_nota = []
nomes_sem_faltas = []
reprovados_por_falta = []

for aluno in alunos:
    nome = aluno[0]
    nota1 = aluno[1]
    nota2 = aluno[2]
    faltas = aluno[3]

    media = (nota1 + nota2) / 2
    medias.append(media)

    if media > maior_media:
        maior_media = media
    if media < menor_media:
        menor_media = media

    if media >= 6 and faltas < 20:
        conceito = "Aprovado"
        aprovados += 1
    else:
        conceito = "Reprovado"

    if faltas == 0:
        nomes_sem_faltas.append(nome)

    if faltas >= 20:
        reprovados_por_falta.append((nome, faltas))

    nota_maior = nota1
    if nota2 > nota1:
        nota_maior = nota2

    if nota_maior > maior_nota:
        maior_nota = nota_maior
        nomes_maior_nota = [nome]
    elif nota_maior == maior_nota:
        nomes_maior_nota.append(nome)

    print("Nome:", nome, "Media:", media, "Conceito:", conceito)

total_alunos = len(alunos)
if total_alunos > 0:
    porcentagem_aprovados = (aprovados * 100) / total_alunos
    print("\nPorcentagem de aprovados:", porcentagem_aprovados)
    print("Maior media:", maior_media)
    print("Menor media:", menor_media)
    print("Alunos com a maior nota (", maior_nota, "):", ', '.join(nomes_maior_nota))
    print("Alunos sem faltas:", ', '.join(nomes_sem_faltas))
    print("Alunos reprovados por falta:")
    for aluno in reprovados_por_falta:
        print(aluno[0], "-", aluno[1], "faltas")
else:
    print("Nenhum aluno cadastrado.")
