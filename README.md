# Cpp-Binary-Decimal-Conversion

Two C++ programs that convert numbers between the **decimal** and **binary** number systems using loops. I wrote both myself.

## What these programs practice

- How the binary number system works: place values that are powers of 2
- Converting decimal to binary by dividing by 2 and collecting the remainders
- Converting binary to decimal by taking each digit and multiplying it by a power of 2
- Two ways to do the same job: with `pow` and `round` from `<cmath>`, and with a plain integer variable that keeps multiplying (kept as a comment in each file)

## The programs

| File | What it does | Example |
|---|---|---|
| `decimal_to_binary.cpp` | Converts a decimal number to binary | `10` gives `1010` |
| `binary_to_decimal.cpp` | Converts a binary number to decimal | `1010` gives `10` |

**Sample run: decimal to binary**
```
Enter Your Decimal Number :- 10
Decimal to Binary Conversion :-
( 10 )10 = ( 1010 )2.
```

**Sample run: binary to decimal**
```
Enter Your Binary Number :- 1010
Binary to Decimal Conversion :-
( 1010 )2 = ( 10 )10.
```

## How it works

**Decimal to binary:** divide the number by 2 again and again. Each remainder is the next binary digit, starting from the right. Each digit is placed at the next position (1, 10, 100, ...) to build the answer.

**Binary to decimal:** take the digits from the right using `% 10`. Multiply each digit by 1, 2, 4, 8, ... and add them up.

## Run any program

```bash
g++ decimal_to_binary.cpp -o decimal_to_binary
./decimal_to_binary
```

On Windows, run `decimal_to_binary.exe` instead of `./decimal_to_binary`.

## Known limitations

- **Overflow in `decimal_to_binary`.** The binary result is stored in an `int` made of 1s and 0s, so it only works up to 1023. From 1024 upward, the result has more digits than an `int` can hold.
- **No check for non-binary input** in `binary_to_decimal`: a number like `123` gives an answer instead of an error.
- **Negative numbers** are not handled (both programs return `0`).
- The variable name `reminder` should be `remainder`.
- No input checking for non-numeric input.

## What I learned

- Binary is a place-value system just like decimal, with powers of 2 instead of powers of 10.
- `pow` returns a `double`, so `round` is needed to avoid small rounding errors, and a plain integer multiplication avoids the problem completely.
- Testing a big number, a negative number and `0` shows problems that normal inputs hide.

---

Part of my learning journey: [github.com/HINDOL-2007](https://github.com/HINDOL-2007)
