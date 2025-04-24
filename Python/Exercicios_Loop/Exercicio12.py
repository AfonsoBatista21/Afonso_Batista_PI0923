num = int(input("Introduza um número: "))
operacoes = 0

print(f"\nOperações realizadas com {num}:")

for i in range(1, num):
    soma = num + i
    subtracao = num - i
    multiplicacao = num * i
    divisao = num / i

    print(f"{num} + {i} = {soma}")
    print(f"{num} - {i} = {subtracao}")
    print(f"{num} * {i} = {multiplicacao}")
    print(f"{num} / {i} = {divisao:.2f}")  
    operacoes += 4  

print(f"\nTotal de operações efetuadas: {operacoes}")
