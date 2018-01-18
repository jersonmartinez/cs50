#Este algoritmo que yo recuerde, no sa había hecho en C, como un programa independiente.
#Una vez más, la bilioteca de CS50 no funciona, no la encuentra

import sys

#Por Google me encontré esta interesante biblioteca
import crypt
from hmac import compare_digest as compare_hash

def VerificarClave(contra, clave, mihash):
    cmp_this_hash = crypt.crypt(contra, clave)

    if mihash == cmp_this_hash:
        print(contra)
        sys.exit()

def main():
    if len(sys.argv) != 2:
        print("Ingrese los argumentos correctos!")
        return 1

    cadena_cifrada = sys.argv[1]
    password = ""
    valor = '50'
    cap = [0] * 52
    mayus = 65
    minus = 97

    for i in range(52):
        cap[i] = chr(minus + i)

        if i > 25:
            cap[i] = chr(mayus + i - 26)

    for A in range(52):
        password = cap[A]
        VerificarClave(password, valor, cadena_cifrada)

        for B in range(52):
            temp = cap[B]
            password2 = password + temp
            VerificarClave(password2, valor, cadena_cifrada)

            for C in range(52):
                temp2 = cap[C]
                password3 = password2 + temp2
                VerificarClave(password3, valor, cadena_cifrada)

                for D in range(52):
                    temp3 = cap[D]
                    password4 = password3 + temp3
                    VerificarClave(password4, valor, cadena_cifrada)

    print("Finalizado!")
    return 0

if __name__ == "__main__":
    main()