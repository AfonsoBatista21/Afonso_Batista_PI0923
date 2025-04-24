limite = int(input("Digite um número limite: "))
contador_perfeitos = 0

print("Números perfeitos encontrados:")

for numero in range(1, limite + 1):
    soma_divisores = 0
    for i in range(1, numero):
        if numero % i == 0:
            soma_divisores += i

    if soma_divisores == numero:
        print(numero)
        contador_perfeitos += 1

print(f"\nTotal de números perfeitos encontrados até {limite}: {contador_perfeitos}")
