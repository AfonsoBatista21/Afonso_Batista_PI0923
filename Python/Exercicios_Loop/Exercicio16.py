soma = 0
cont = 0

print("Insira 30 números pares entre 1 e 50:")

while cont < 30:
    num = int(input(f"Número {cont + 1}: "))

    if num < 1 or num > 50 or num % 2 != 0:
        print("Entrada inválida! O número deve ser par e estar entre 1 e 50.")
    else:
        soma += num
        contador += 1

media = soma / 30
print(f"\nA média dos 30 números pares inseridos é: {media:.2f}")
