#Este ya está finalizado.
#Una vez más, la bilioteca de CS50 no funciona, no la encuentra

import sys

def main():
    if len(sys.argv) != 2:
        print("Pase los argumentos correctos!")
        exit(1)

    clave = int(sys.argv[1])
    LstArray = []
    mensaje = input()

    for cap_simbolo in mensaje:
        if cap_simbolo.isalpha():
            LstArray.append(caesar(cap_simbolo, clave))
        else:
            LstArray.append(cap_simbolo)

    print("".join(LstArray))
    exit(0)

def caesar(caracter, clave):
    if caracter.isupper():
        return chr(((ord(caracter) - 65 + clave) % 26) + 65)
    else:
        return chr(((ord(caracter) - 97 + clave) % 26) + 97)

if __name__ == "__main__":
    main()