limite_inicial = 0
limite_final = 20

while True:
    for codigo in range(limite_inicial, limite_final):
        if codigo > 255:
            break
        print(f"Código ASCII: {codigo}, Caracter: {chr(codigo)}")

    escolha = input("\nPretende continuar (S para sim, qualquer outra tecla para sair): ")

    if escolha != 'S':
        print("A sair do programa")
        break
    else:
        limite_inicial += 20
        limite_final += 20

        if limite_inicial > 255:
            print("Todos os códigos ASCII de 0 a 255 foram exibidos.")
            break
