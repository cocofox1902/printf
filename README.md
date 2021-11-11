# 0X11.C - Printf
### We have rewrite the printf function in C

## Return of Printf 
```
Let's try to printf a simple sentence.
Let's try to printf a simple sentence.
Length:[39, 39]
Length:[39, 39]
Negative:[-762534]
Negative:[-762534]
Unsigned:[2147484671]
Unsigned:[2147484671]
Unsigned octal:[20000001777]
Unsigned octal:[20000001777]
Unsigned hexadecimal:[800003ff, 800003FF]
Unsigned hexadecimal:[800003ff, 800003FF]
Character:[H]
Character:[H]
String:[I am a string !]
String:[I am a string !]
Address:[0x7ffe637541f0]
Address:[0x7ffe637541f0]
Percent:[%]
Percent:[%]
Len:[12]
Len:[12]
Unknown:[%r]
Unknown:[%r]
```

## Mandatory 
***
## 0. I'm not going anywhere. You can print that wherever you want  to. I'm here and I'm a Spur for life
## [_printf.c](./_printf.c)
### Write a function that produces output according to a format.
```
Prototype: int _printf(const char *format, ...); 
Returns: the number of characters printed (excluding the null byte used to end output to strings)
write output to stdout, the standard output stream
format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. You need to handle the following conversion specifiers:
c
s
%
You don’t have to reproduce the buffer handling of the C library printf function
You don’t have to handle the flag characters
You don’t have to handle field width
You don’t have to handle precision
You don’t have to handle the length modifiers
```

***
## 1. Education is when you read the fine print. Experience is what you get if you don't
## [_printf.c](./_printf.c)
### Handle the following conversion specifiers:
```
d
i
You don’t have to handle the flag characters
You don’t have to handle field width
You don’t have to handle precision
You don’t have to handle the length modifiers
```
***

## 2. Just because it's in print doesn't mean it's the gospel
## [man_3_printf](./man_3_printf)
### Create a man page for your function.
```
NAME
SYNOPSIS
DESCRIPTION
EXAMPLES
AUTHOR
```
***

## Advanced
***
## 3. With a face like mine, I do better in print
## [print_flag.c](./print_flag.c)
### Handle the following custom conversion specifiers:
```
b: the unsigned int argument is converted to binary
```
***
## 4. What one has not experienced, one will never understand in print
## [print_flag.c](./print_flag.c)
### Handle the following conversion specifiers:
```
u
o
x
X
You don’t have to handle the flag characters
You don’t have to handle field width
You don’t have to handle precision
You don’t have to handle the length modifiers
```
***
## 5. Nothing in fine print is ever good news
## [print_flag.c](./print_flag.c)
### Use a local buffer of 1024 chars in order to call write as little as possible.
```
1024 chars
```
*** 
## 6. How is the world ruled and led to war? Diplomats lie to journalists and believe these lies when they see them in print
## [print_flag.c](./print_flag.c)
### Handle the following conversion specifier: p.
```
You don’t have to handle the flag characters
You don’t have to handle field width
You don’t have to handle precision
You don’t have to handle the length modifiers
```
***
## 7. My weakness is wearing too much leopard print
## [print_flag.c](./print_flag.c)
### Handle the following custom conversion specifier:
```
S : prints the string.
Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way: \x, followed by the ASCII code value in hexadecimal (upper case - always 2 characters)
```

***
## 8. The big print gives and the small print takes away
## [print_flag.c](./print_flag.c)
### Handle the following flag characters for non-custom conversion specifiers:
```
+
space
#
```
***
## 9. Sarcasm is lost in print
## [print_flag.c](./print_flag.c)
### Handle the following length modifiers for non-custom conversion specifiers:
```
l
h
Conversion specifiers to handle: d, i, u, o, x, X
```

***
## 10. Print some money and give it to us for the rain forests
## [print_flag.c](./print_flag.c)
### Handle the field width for non-custom conversion specifiers.
```
non-custom conversion specifiers.
```
***
## 11. The negative is the equivalent of the composer's score, and the print the performance
## [print_flag.c](./print_flag.c)
### Handle the precision for non-custom conversion specifiers.
```
non-custom conversion specifiers.
```
***
## 12. It's depressing when you're still around and your albums are out of print
## [print_flag.c](./print_flag.c)
### Handle the 0 flag character for non-custom conversion specifiers.
```
0 flag character, non-custom conversion specifiers.
```
***
## 13. Every time that I wanted to give up, if I saw an interesting textile, print what ever, suddenly I would see a collection
## [print_flag.c](./print_flag.c)
### Handle the - flag character for non-custom conversion specifiers.
```
- flag character, non-custom conversion specifiers.
```
***
## 14. Print is the sharpest and the strongest weapon of our party
## [print_flag.c](./print_flag.c)
### Handle the following custom conversion specifier:
```
r : prints the reversed string
```
***
## 15. The flood of print has turned reading into a process of gulping rather than savoring
## [print_flag.c](./print_flag.c)
### Handle the following custom conversion specifier:
```
R: prints the rot13'ed string
```
***
## 16. *
## [print_flag.c](./print_flag.c)
### All the above options work well together.
```
83 checks
```
***
## Contributors

 ### [Colas Renard](https://github.com/cocofox1902) && [Axel Valentin](https://github.com/Pixeloceax)

# for Holberton School