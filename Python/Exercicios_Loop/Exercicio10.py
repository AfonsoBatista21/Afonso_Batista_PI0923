n= int(input("Insira um número: "))
divisores = 0

for i in range(1, n + 1):
    if n % i == 0:
        divisores += 1

print(f"O número {n} possui {divisores} divisores.")
