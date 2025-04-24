num1, num2 = 1, 1

print("Construção da sequência de Fibonacci:\n")

for i in range(60):  
    print(" " * i + f"{num1} + {num2} = {num1 + num2}")  
    proximo = num1 + num2  
    num1 = num2  
    num2 = proximo  