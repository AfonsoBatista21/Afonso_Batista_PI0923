num = int(input("Introduza um número para ver sua tabuada: "))

print(f"\nA tabuada do num inserido é: {num}:")

for i in range(1, 11):
    print(f"{num} x {i} = {num * i}")
