def even_fibonacci_sum(limit):
    """
    Calculates the sum of even-valued Fibonacci numbers up to the specified limit.

    Args:
        limit: The maximum value of Fibonacci numbers to consider.

    Returns:
        The sum of the even-valued Fibonacci numbers.
    """
    a, b = 1, 2  
    even_sum = 0

    while b <= limit:
        if b % 2 == 0:
            even_sum += b
        a, b = b, a + b  

    return even_sum

if __name__ == "__main__":
    limit = 4000000
    result = even_fibonacci_sum(limit)
    print(result) 

