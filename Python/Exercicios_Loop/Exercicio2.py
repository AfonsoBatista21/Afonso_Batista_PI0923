for i in range(10):
    numero = int(input(f"Insira o {i + 1}º número: "))
    if numero % 2 == 0:
        print(f"O número {numero} é par.")
    else:
        print(f"O número {numero} é ímpar.")