print("Números múltiplos de 5, mas não múltiplos de 3 (de 1 a 1000):")

for num in range(1, 1001):
    if num % 5 == 0 and num % 3 != 0:
        print(num)
