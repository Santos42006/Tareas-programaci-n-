tO = None  #none quiere decir que la variable no tiene un valor definido 
tA = None
tD = None

def mostrarTorres():   # def es una palabra reservada que indica a Python que una nueva función está siendo definida
    print(tO, tA, tD)

def moverHanoi(numeroDiscos, torreOrigen, torreAuxiliar, torreDestino):  # parámetros
    if (numeroDiscos == 1):
        torreDestino.append(torreOrigen.pop())
        mostrarTorres()
    else:
        moverHanoi(numeroDiscos - 1, torreOrigen, torreDestino, torreAuxiliar)
        torreDestino.append(torreOrigen.pop())
        mostrarTorres()
        moverHanoi(numeroDiscos - 1, torreAuxiliar, torreOrigen, torreDestino)


def hanoi(numeroDiscos):  # este bloque es el proceso de resolucion del juego 
    global tA, tD, tO

    torreOrigen = []
    torreAuxiliar = []
    torreDestino = []
    tA = torreAuxiliar
    tD = torreDestino
    tO = torreOrigen
    # Colocar los discos en torreOrigen
    i = numeroDiscos
    while (i > 0):
        torreOrigen.append(i)
        i = i - 1
    # Mostrar las torres inicialmente
    mostrarTorres()
    moverHanoi(numeroDiscos, torreOrigen, torreAuxiliar, torreDestino)


hanoi(3)