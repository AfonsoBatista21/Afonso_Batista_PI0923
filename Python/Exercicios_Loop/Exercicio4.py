n= int(input(f"Introduza o numero: "))

primo = True

for i in range(2, n):
    if n% i == 0 or i == 1:
        primo = False
        
if primo:
    print(f"O num introduzido: {n} é primo")
else:
    print(f"O num introduzido: {n} não é primo")