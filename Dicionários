A tabela a seguir apresenta as informações dos produtos de umapapelaria. Faça um programa que armazene as informações utilizandoum dicionário.
Em seguida, implemente o sistema de vendas. Para cada novo cliente, oprograma apresenta os produtos e o usuário escolhe a quantidade de cadaum.

Ao final, o programa deve informar o valor total da compra eatualiza o estoque. 
Quando for informado “fim do dia”, o programa deveexibir o valor total de vendas no dia e a tabela com o estoque atualizado.


Estoque = {
    'Lápis HB': (300, 1.20),
    'Caneta Azul': (500, 1.80),
    'Borracha': (150, 0.90),
    'Agenda': (80, 12.50),
    'Caderno': (100, 22.80),
    'Apontador': (30, 6.40)
}

print("Produto      Quantidade  Valor ")
print()
for produto in Estoque:
    quantidade, valor = Estoque[produto]
    print(f"{produto:12} {quantidade:10}{valor:7.2f} ")

finalizar = False
num_cliente = 1
total_compra = 0  

while not finalizar:
    print("\nCliente", num_cliente)
    total_cliente = 0  
    print("Selecione a quantidade de produtos:")
    for produto in Estoque:
        qtd = int(input(produto + ": "))
        quantidade_estoque, valor = Estoque[produto]
        total_cliente += qtd * valor
    print("Total do cliente:", f"R${total_cliente:.2f}")
    total_compra += total_cliente
    num_cliente += 1
    print("Fim da Compra?")
    finalizar = input("S/N: ").upper() == "S"

print("\nTotal de todas as compras:", f"R${total_compra:.2f}")

Escreva um programa que leia nome e duas notas de vários alunos, armazenando esses dados um dicionário, 
onde a chave é o nome do aluno, e as notas estão numa lista. A entrada de dados deve terminar quando 
for digitado “fim” para o nome do aluno.
Em seguida, peça para o usuário digitar um nome, e exiba as notas e a média das notas daquele aluno. 
Repita esse processo até que, novamente, o usuário digite “fim” para o nome do aluno.


alunos = {}

# Cadastro dos alunos
terminar = False
while not terminar:
    nome = input("Digite o nome do aluno (ou 'fim' para encerrar): ")
    if nome.lower() == "fim":
        terminar = True
    else:
        nota1 = float(input("Digite a primeira nota: "))
        nota2 = float(input("Digite a segunda nota: "))
        alunos[nome] = [nota1, nota2]

# Consulta dos alunos
terminar = False
while not terminar:
    nome_busca = input("\nDigite o nome do aluno para ver as notas (ou 'fim' para encerrar): ")
    if nome_busca.lower() == "fim":
        terminar = True
    elif nome_busca in alunos:
        notas = alunos[nome_busca]
        media = sum(notas) / len(notas)
        print(f"Notas de {nome_busca}: {notas}")
        print(f"Média: {media:.2f}")
    else:
        print("Aluno não encontrado.")




Escreva um programa que conte a quantidade de cada vogal em um texto earmazene em um dicionário, 
onde a chave é cada vogal encontrada no texto, incluindoas vogais acentuadas. 
No final, exiba o conteúdo do dicionário de forma formatada.Exemplo: vogal a - 10 vezes
vogal 

vogais = "aeiou"

contador = {}

for vogal in vogais:
  contador[vogal] = 0

texto =  input("Digite um texto: ").lower()

for letra in texto:
  if letra in vogais:
    contador[letra] += 1
print(contador)

for vogal in contador:
  print(vogal,":", contador[vogal])


3. Uma pista de Kart permite 10 voltas para cada um de 6 corredores. 
Escreva umprograma que leia todos os tempos em segundos e os guarde em um dicionário, 
onde achave é o nome do corredor. Ao final diga de quem foi a melhor volta da prova e emque volta.




4. Elabore um programa para armazenar uma agenda de telefones em um dicionário.Cada pessoa pode ter um ou mais telefones (lista) e a chave do dicionário é o nome dapessoa. O programa deve conter um menu com as opções listadas abaixo:
a) Incluir novo nome: acrescenta um novo nome na agenda, com um ou mais
telefones.
b) Incluir telefone: acrescenta um telefone em um nome existente na agenda. Caso o nome não exista na agenda, emitir uma mensagem de erro.
c) Excluir nome: exclui uma pessoa da agenda.
d) Consultar telefone: retorna os telefones de uma pessoa na agenda.
e) Exibir agenda: exibe todas as pessoas cadastradas e seus telefones.
f) Fim: termina a execução do programa

agenda = {}

print("a Incluir novo nome: acrescenta um novo nome na agenda, com um ou mais telefones.")
print("b Incluir telefone: acrescenta um telefone em um nome existente na agenda. Caso o nome não exista na agenda, emitir uma mensagem de erro.")
print("c Excluir nome: exclui uma pessoa da agenda.")
print("d Consultar telefone: retorna os telefones de uma pessoa na agenda.")
print("e Exibir agenda: exibe todas as pessoas cadastradas e seus telefones.")
print("f Fim: termina a execução do programa")
print("-" * 50)

while True:
    opc = input("Selecione uma opção: ").lower()

    if opc == "a":
        nome = input("Digite o nome: ").lower()
        num_telcadastrado = int(input("Quantos telefones você deseja cadastrar: "))
        lista_tell = []  # Inicialize a lista de telefones dentro do bloco 'a'
        for i in range(num_telcadastrado):
            telefone = input(f"Digite o {i+1}º telefone: ")
            lista_tell.append(telefone)
        agenda[nome] = lista_tell

    elif opc == "b":
        nome_b = input("Digite o nome: ").lower()
        if nome_b in agenda:
            add_tell = input("Digite o telefone a adicionar: ")
            agenda[nome_b].append(add_tell)
            print("Telefone adicionado com sucesso!")
        else:
            print("Nome não encontrado na agenda.")

    elif opc == "c":
        nome_del = input("Digite o nome que deseja apagar: ").lower()
        if nome_del in agenda:
            del agenda[nome_del]
            print("Nome deletado com sucesso!")
        else:
            print("Nome não encontrado na agenda.")

    elif opc == "d":
        nome_d = input("Digite o nome: ").lower()
        if nome_d in agenda:
            telefones = agenda[nome_d]
            print(f"Telefones de {nome_d}: {telefones}")
        else:
            print("Nome não encontrado na agenda.")

    elif opc == "e":
        if agenda:
            print("\nAgenda:")
            for nome, telefones in agenda.items():
                print(f"{nome}: {telefones}")
        else:
            print("A agenda está vazia.")

    elif opc == "f":
        print("Encerrando o programa.")
        break  # Sai do loop while

    else:
        print("Opção inválida. Por favor, tente novamente.")


--Escreva um programa que leia uma frase digitada pelo usuário e conte quantas vezes cada palavra aparece nessa frase.

Exemplo:

Digite uma frase: o cara bateu na cara do outro cara e o outro cara ficou de cara no chão

Saída:

o : 2
cara : 5
bateu : 1
na : 1
do : 1
outro : 2
e : 1
ficou : 1
de : 1
no : 1
chão : 1
    
contador_de_palavras = {}

frase = input("Digite sua frase amigo:")

lista_palavras = frase.split()

for palavras in lista_palavras:
  if palavras in contador_de_palavras:
    contador_de_palavras[palavras] += 1
  else:
    contador_de_palavras[palavras] = 1

for frases in contador_de_palavras:
  print(frases,":",contador_de_palavras[frase])




