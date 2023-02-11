import numpy as np

m = 3  # Número de vectores binarios a generar
n = 4  # Tamaño de cada vector binario

binaries = np.random.randint(2, size=(m, n))
print(binaries)
