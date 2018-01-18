import sys

def main():
    if len(sys.argv) != 2:
        print("Pase los argumentos correctos!")
        exit(1)

    if sys.argv[1].isalpha() == False:
        print("Ingresa un parámetro válido, un caracter!")
        exit(1)

    mensaje = input("Mensaje a cifrar: ")
    LstArray = []
    ClaveInicial = 0
    LongClave = len(sys.argv[1])

    for cap in mensaje:
        if cap.isalpha():
            clave = ord(sys.argv[1][ClaveInicial % LongClave].lower()) -97
            ClaveInicial += 1
            LstArray.append(caesar(cap, clave))
        else:
            LstArray.append(cap)

    print("".join(LstArray))
    exit(0)

def caesar(caracter, clave):
    if caracter.isupper():
        return chr(((ord(caracter) - 65 + clave) % 26) + 65)
    else:
        return chr(((ord(caracter) - 97 + clave) % 26) + 97)

if __name__ == "__main__":
    main()