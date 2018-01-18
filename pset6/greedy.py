def main():
    while 1:
        print("¿Cuánto cambio se debe entregar?: $")
        monto = float(input())

        if monto >= 0:
            break

    change_one = 0
    cents = int(round(monto * 100))

    change_one += cents // 25
    cents %=25

    change_one += cents // 10
    cents %=10

    change_one += cents // 5
    cents %=5

    change_one += cents

    print("Quarters | Dimes | Nickels")
    print("{}".format(change_one))

if __name__ == "__main__":
    main()