This is the third project of the 42 Curriculum. This project is pretty straight forward, recode the printf function. The versatility of the printf function in C represents a great exercise in programming for us. This project is of moderate difficulty. It will enable you to discover variadic functions in C. The key to a successful ft_printf is a well-structured and good extensible code.

# Prototype

int ft_printf(const char *, ...);

# Description

Write a library that contains ft_printf, a function that will mimic the real printf.

External functs.
malloc, free, write, va_start, va_arg, va_copy, va_end

See the subjects for further information

SUBJECT

# 📑 Mandatory part

 It must not do the buffer management like the real printf.
 
 It will manage the following conversions: cspdiuxX%.
 
 It will be compared with the real printf.
 
 %c print a single character.
 
 %s print a string of characters.
 
 %p The void * pointer argument is printed in hexadecimal.
 
 %d print a decimal (base 10) number.
 
 %i print an integer in base 10.
 
 %u print an unsigned decimal (base 10) number.
 
 %x print a number in hexadecimal (base 16), with lowercase.
 
 %X print a number in hexadecimal (base 16), with uppercase.
 
 %% print a percent sign.
 
# RESULTS : 100/100
