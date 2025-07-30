from sys import argv

def is_prime(num: int) -> bool:
    """
    Checks if a number is prime.
    """

    if num <= 1:
        return False
    for i in range(2, int(num ** 0.5) + 1):
        if num % i == 0:
            return False
    return True

    
def sum_primes(num: int) -> int:
    """
    Calculates the sum of all prime numbers up to n.
    """

    total = 0
    
    for n in range(num + 1):
        if is_prime(n):
            total += n
            # print(f"{n} is a prime, adding it to the total. Current total: {total}")

    return total

def main():
    number = int(argv[1])

    sum_of_primes = sum_primes(number)

    print(sum_of_primes)
    
    pass

if __name__ == "__main__":
    main()
