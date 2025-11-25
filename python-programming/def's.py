1 – Modifique a função linha(c) para que o tamanho da linha seja definido na chamada
da função. Se o parâmetro não for fornecido, a linha deverá ter tamanho 20.

  def linha(quantidade=20):
  for i in range(quantidade):
    print("=",end="")
    

linha()


2- Crie uma função mensagem(M), que exibe a mensagem M com uma linha acima e
outra abaixo

    def mensagem(m):
  print(20*"-")
  print(m)
  print(20*"-")

mensagem("biridindark")


3- Escreva a função somaSequência(n) que retorna a soma S = 1+2+3+...+N

    def somaseq(n):
  s = 0
  for i in range(1,n+1):
    s += i
  return s

somaseq(5)

4- Crie a função fatorial(N) que retorna N!

def fatorial(f):
  fato = 1
  for i in range(1,f+1):
    fato = fato*i 
  return fato

fatorial(3)


5- Crie uma função que receba como parâmetro uma lista, com valores de qualquer
tipo. A função deve imprimir todos os elementos da lista numerando-os.

def lista_ordem(*lista):
  contador = 1
  for i in range(len(lista)):
    print(i+1,"-",lista[i])

lista_ordem(1,2,3,4,5,6,7,8)



    
