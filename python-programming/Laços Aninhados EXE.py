1. Faça um programa que imprima a
seguinte sequência:
11
12
13
21
22
23
31
32
33

for i in range(1,4):
  for j in range(1,4):
     print(f"{i}{j}")


2. Faça um programa que imprima a
seguinte sequência:
1
22
333
4444
55555
666666
7777777
88888888
999999999

for i in range(1,10):
  for j in range(i):
    print(i, end = " ")
  print()

3. Escreva um programa para gerar as sequências a seguir:

137
134
157
154
177
174
237
234
257
254
277
274


for i in range(1,3,1):
  for j in range(3,8,2):
    for h in range(7,3,-3):
      print(f"{i}{j}{h}")


358
356
354
758
756
754
1158
1156
1154


for i in range(3,12,4):
  for h in range(8,3,-2):
    print(i,5,h,sep="")


4. Escreva programas para
desenhar as figuras a seguir:

Quadrado.

for i in range(10):
  linha = ""
  for j in range(10):
    linha += "*"
  print(linha)


retangulo.

for i in range(5):
  linha = ""
  for j in range(10):
    linha += "*"
  print(linha)


triangulo. 1

for i in range(1,10):
  for j in range(i):
    print(end = "*")
  print()

triangulo. 2

for i in range (1,10):
  for j in range(9-i):
    print(end=" ")
  for j in range(i):
    print(end="*")
  print()


triangulo. 3

for x in range(1, 20, 2):
    for y in range((19 - x) // 2):       
        print(end=' ')
    for y in range(x):                   
        print(end='*')
    print() 


triangulo. 4

for x in range(19, -1, -2):
    for y in range((19 - x) // 2):       
        print(end=' ')
    for y in range(x):                   
        print(end='*')
    print() 











