#No me sirve la biblioteca de CS50.

def main():
    while 1:
        print("Altura: ", end = "")
        altura = int(input())

        if altura >= 0 and altura <= 23:
            break

    for i in range(altura):
        for j in range(altura - i - 1):
            print(" ", end = "")
        for o in range(i+2):
            print("#", end = "")
        print("")

if __name__ == "__main__":
    main()