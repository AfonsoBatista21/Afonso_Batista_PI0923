num = 0
n = 2

print("Os Dez primeiros numeros são: ")

while num < 10:
    primo = True
    for i in range(2, int(n ** 0.5) + 1):
        if n % i == 0:
            primo = False
            break
    
    if primo:
        print(n)
        num += 1
    
    n+= 1
