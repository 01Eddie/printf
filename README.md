
**_PRINTF

Format placeholder specification

Formatting takes place via placeholders within the format string. For example, if a program wanted to print out a person's age, it could present the output by prefixing it with "Your age is ", and using the signed decimal specifier character d to denote that we want the integer for the age to be shown immediately after that message, we may use the format string:

Printf

SYNOPSIS
_printf, ( string $format , mixed ...$values )arg0 arg2 ...

DESCRIPTION
Print ARGUMENT(s) according to FORMAT, or execute according to OPTION:

CONVERSION CUSTOM SPECIFIER
-c For print chars.
-s for print strings.
-% to declare a conversion specifier.


FLAGS

-- For non-custom conversion specifiers.
-0, +, space, # for non-custom conversion specifiers.
