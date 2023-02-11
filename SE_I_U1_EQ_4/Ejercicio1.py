def getVectorBinario(n):
    import random as rnd
    return[rnd.randint(0,1) for i in range(n)]

if __name__ == 'main':
    n = int(input(" "))
    print(getVectorBinario(n))


    #C LAMBDA