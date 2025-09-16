#

╔══════════════════════════════════════════════════════════════╗
║                    DESCENDING PHASE                         ║
╠══════════════════════════════════════════════════════════════╣
║ Call 1: sum(5) → waiting for sum(4)                         ║
║ Call 2: sum(4) → waiting for sum(3)                         ║
║ Call 3: sum(3) → waiting for sum(2)                         ║
║ Call 4: sum(2) → waiting for sum(1)                         ║
║ Call 5: sum(1) → waiting for sum(0)                         ║
║ Call 6: sum(0) → BASE CASE! returns 0                       ║
║                                                            ║
║                    ASCENDING PHASE                          ║
║ Call 5: sum(1) gets 0 → returns 1 + 0 = 1                  ║
║ Call 4: sum(2) gets 1 → returns 2 + 1 = 3                  ║
║ Call 3: sum(3) gets 3 → returns 3 + 3 = 6                  ║
║ Call 2: sum(4) gets 6 → returns 4 + 6 = 10                 ║
║ Call 1: sum(5) gets 10 → returns 5 + 10 = 15               ║
╚══════════════════════════════════════════════════════════════╝


def sum_of_natural_numbers(n):
    # base case for
    if n == o ;
        return 0
    else:
        return n + sum_of_natural_numbers(n-1)
    

result = sum_of_natural_numbers(5)