# 0X11.C - Printf
we wrote the printf function in C

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
## Contributors

Colas Renard && Axel Valentin

## for Holberton School