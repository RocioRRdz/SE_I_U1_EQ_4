import random

print('*********************************************')
print('NÚMERO 1')
print('*********************************************')
v = int(input("Ingresa el tamaño del vector:"))
print('*********************************************')
l = int(input("Ingresa el limitante del digito:"))

i=0
for i in range(v):
    #bin = bin(random.randrange(0,l))
    #print(bin)

    print(random.randrange(l))

print('*********************************************')
print('NÚMERO 2')
print('*********************************************')
n = [random.randrange(0,l) for i in range(v)]
print(n)

print('*********************************************')
print('NÚMERO 3')
print('*********************************************')

#JAVA for (n=1 ; n>0 ; n--)
n1 = int(input("Ingresa un num:"))
for n1 in range (0,1):
	digito=n%2;
	n=n/2;
print("La conversion es de:" +n1)


#Otra forma es con numpy
#se puede cambiar el randrange por randInt

