---
description: "Learn more about: is, isw Routines"
title: "is, isw Routines"
ms.date: "11/04/2016"
api_location: ["msvcr110_clr0400.dll", "msvcr90.dll", "msvcr80.dll", "msvcr100.dll", "msvcr110.dll", "msvcr120.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["isw", "is"]
helpviewer_keywords: ["is routines", "isw routines"]
ms.assetid: 1e171a57-2cde-41f6-a75f-a080fa3c12e5
---
# is, isw Routines

:::row:::
   :::column span="":::
      [isalnum, iswalnum, _isalnum_l, _iswalnum_l](../c-runtime-library/reference/isalnum-iswalnum-isalnum-l-iswalnum-l.md)\
      [isalpha, iswalpha, _isalpha_l, _iswalpha_l](../c-runtime-library/reference/isalpha-iswalpha-isalpha-l-iswalpha-l.md)\
      [isascii, __isascii, iswascii](../c-runtime-library/reference/isascii-isascii-iswascii.md)\
      [isblank, iswblank, _isblank_l, _iswblank_l](../c-runtime-library/reference/isblank-iswblank-isblank-l-iswblank-l.md)\
      [iscntrl, iswcntrl, _iscntrl_l, _iswcntrl_l](../c-runtime-library/reference/iscntrl-iswcntrl-iscntrl-l-iswcntrl-l.md)\
      [iscsym, iscsymf, __iscsym, \__iswcsym, \__iscsymf, \__iswcsymf, _iscsym_l, _iswcsym_l, _iscsymf_l, _iswcsymf_l](../c-runtime-library/reference/iscsym-functions.md)\
      [_isctype, iswctype, _isctype_l, _iswctype_l](../c-runtime-library/reference/isctype-iswctype-isctype-l-iswctype-l.md)\
      [isdigit, iswdigit, _isdigit_l, _iswdigit_l](../c-runtime-library/reference/isdigit-iswdigit-isdigit-l-iswdigit-l.md)
   :::column-end:::
   :::column span="":::
      [isgraph, iswgraph, _isgraph_l, _iswgraph_l](../c-runtime-library/reference/isgraph-iswgraph-isgraph-l-iswgraph-l.md)\
      [isleadbyte, _isleadbyte_l](../c-runtime-library/reference/isleadbyte-isleadbyte-l.md)\
      [islower, iswlower, _islower_l, _iswlower_l](../c-runtime-library/reference/islower-iswlower-islower-l-iswlower-l.md)\
      [isprint, iswprint, _isprint_l, _iswprint_l](../c-runtime-library/reference/isprint-iswprint-isprint-l-iswprint-l.md)\
      [ispunct, iswpunct, _ispunct_l, _iswpunct_l](../c-runtime-library/reference/ispunct-iswpunct-ispunct-l-iswpunct-l.md)\
      [isspace, iswspace, _isspace_l, _iswspace_l](../c-runtime-library/reference/isspace-iswspace-isspace-l-iswspace-l.md)\
      [isupper, _isupper_l, iswupper, _iswupper_l](../c-runtime-library/reference/isupper-isupper-l-iswupper-iswupper-l.md)\
      [isxdigit, iswxdigit, _isxdigit_l, _iswxdigit_l](../c-runtime-library/reference/isxdigit-iswxdigit-isxdigit-l-iswxdigit-l.md)
   :::column-end:::
:::row-end:::

## Remarks

These routines test characters for specified conditions.

The **is** routines produce meaningful results for any integer argument from -1 (`EOF`) to **UCHAR_MAX** (0xFF), inclusive. The expected argument type is **`int`**.

> [!CAUTION]
> For the **is** routines, passing an argument of type **`char`** may yield unpredictable results. An SBCS or MBCS single-byte character of type **`char`** with a value greater than 0x7F is negative. If a **`char`** is passed, the compiler may convert the value to a **`signed int`** or a **`signed long`**. This value may be sign-extended by the compiler, with unexpected results.

The **isw** routines produce meaningful results for any integer value from - 1 (**WEOF**) to 0xFFFF, inclusive. The **wint_t** data type is defined in WCHAR.H as an **`unsigned short`**; it can hold any wide character or the wide-character end-of-file (**WEOF**) value.

The output value is affected by the setting of the `LC_CTYPE` category setting of the locale; see [setlocale](../c-runtime-library/reference/setlocale-wsetlocale.md) for more information. The versions of these functions without the **_l** suffix use the current locale for this locale-dependent behavior; the versions with the **_l** suffix are identical except that they use the locale parameter passed in instead.

In the "C" locale, the test conditions for the **is** routines are as follows:

`isalnum`<br/>
Alphanumeric (A - Z, a - z, or 0 - 9).

`isalpha`<br/>
Alphabetic (A - Z or a - z).

`__isascii`<br/>
ASCII character (0x00 - 0x7F).

`isblank`<br/>
Horizontal tab or space character (0x09 or 0x20).

`iscntrl`<br/>
Control character (0x00 - 0x1F or 0x7F).

`__iscsym`<br/>
Letter, underscore, or digit.

`__iscsymf`<br/>
Letter or underscore.

`isdigit`<br/>
Decimal digit (0 - 9).

`isgraph`<br/>
Printable character except space ( ).

`islower`<br/>
Lowercase letter (a - z).

`isprint`<br/>
Printable character including space (0x20 - 0x7E).

`ispunct`<br/>
Punctuation character.

`isspace`<br/>
White-space character (0x09 - 0x0D or 0x20).

`isupper`<br/>
Uppercase letter (A - Z).

`isxdigit`<br/>
Hexadecimal digit (A - F, a - f, or 0 - 9).

For the **isw** routines, the result of the test for the specified condition is independent of locale. The test conditions for the **isw** functions are as follows:

`iswalnum`<br/>
`iswalpha` or `iswdigit`.

`iswalpha`<br/>
Any wide character that is one of an implementation-defined set for which none of `iswcntrl`, `iswdigit`, `iswpunct`, or `iswspace` is nonzero. `iswalpha` returns nonzero only for wide characters for which `iswupper` or `iswlower` is nonzero.

`iswascii`<br/>
Wide-character representation of ASCII character (0x0000 - 0x007F).

`iswblank`<br/>
Wide character that corresponds to the standard space character or is one of an implementation-defined set of wide characters for which `iswalnum` is false. Standard blank characters are space (L' ') and horizontal tab (L'\t').

`iswcntrl`<br/>
Control wide character.

`__iswcsym`<br/>
Any wide character for which `isalnum` is true, or the '_' character.

`__iswcsymf`<br/>
Any wide character for which `iswalpha` is true, or the '_' character.

`iswctype`<br/>
Character has property specified by the `desc` argument. For each valid value of the `desc` argument of `iswctype`, there is an equivalent wide-character classification routine, as shown in the following table:

### Equivalence of iswctype(c, desc) to Other isw Testing Routines

|Value of *desc* argument|iswctype( *c, desc* ) equivalent|
|------------------------------|----------------------------------------|
|**_ALPHA**|**iswalpha(** `c` **)**|
|**_ALPHA** &#124; **_DIGIT**|**iswalnum(** `c` **)**|
|**_BLANK**|**iswblank(** `c` **)**|
|**_CONTROL**|**iswcntrl(** `c` **)**|
|**_DIGIT**|**iswdigit(** `c` **)**|
|**_ALPHA** &#124; **_DIGIT** &#124; **_PUNCT**|**iswgraph(** `c` **)**|
|**_LOWER**|**iswlower(** `c` **)**|
|**_ALPHA** &#124; **_BLANK** &#124; **_DIGIT** &#124; **_PUNCT**|**iswprint(** `c` **)**|
|**_PUNCT**|**iswpunct(** `c` **)**|
|**_BLANK**|**iswblank(** `c` **)**|
|**_SPACE**|**iswspace(** `c` **)**|
|**_UPPER**|**iswupper(** `c` **)**|
|**_HEX**|**iswxdigit(** `c` **)**|

`iswdigit`<br/>
Wide character corresponding to a decimal-digit character.

`iswgraph`<br/>
Printable wide character except space wide character (L' ').

`iswlower`<br/>
Lowercase letter, or one of implementation-defined set of wide characters for which none of `iswcntrl`, `iswdigit`, `iswpunct`, or `iswspace` is nonzero. `iswlower` returns nonzero only for wide characters that correspond to lowercase letters.

`iswprint`<br/>
Printable wide character, including space wide character (L' ').

`iswpunct`<br/>
Printable wide character that is neither space wide character (L' ') nor wide character for which `iswalnum` is nonzero.

`iswspace`<br/>
Wide character that corresponds to standard white-space character or is one of implementation-defined set of wide characters for which `iswalnum` is false. Standard white-space characters are: space (L' '), form feed (L'\f'), newline (L'\n'), carriage return (L'\r'), horizontal tab (L'\t'), and vertical tab (L'\v').

`iswupper`<br/>
Wide character that is uppercase or is one of an implementation-defined set of wide characters for which none of `iswcntrl`, `iswdigit`, `iswpunct`, or `iswspace` is nonzero. `iswupper` returns nonzero only for wide characters that correspond to uppercase characters.

`iswxdigit`<br/>
Wide character that corresponds to a hexadecimal-digit character.

## Example

```C
// crt_isfam.c
/* This program tests all characters between 0x0
* and 0x7F, then displays each character with abbreviations
* for the character-type codes that apply.
*/

#include <stdio.h>
#include <ctype.h>

int main( void )
{
   int ch;
   for( ch = 0; ch <= 0x7F; ch++ )
   {
      printf( "%.2x  ", ch );
      printf( " %c", isprint( ch )  ? ch   : ' ' );
      printf( "%4s", isalnum( ch )  ? "AN" : "" );
      printf( "%3s", isalpha( ch )  ? "A"  : "" );
      printf( "%3s", __isascii( ch )  ? "AS" : "" );
      printf( "%3s", iscntrl( ch )  ? "C"  : "" );
      printf( "%3s", __iscsym( ch )  ? "CS "  : "" );
      printf( "%3s", __iscsymf( ch )  ? "CSF"  : "" );
      printf( "%3s", isdigit( ch )  ? "D"  : "" );
      printf( "%3s", isgraph( ch )  ? "G"  : "" );
      printf( "%3s", islower( ch )  ? "L"  : "" );
      printf( "%3s", ispunct( ch )  ? "PU" : "" );
      printf( "%3s", isspace( ch )  ? "S"  : "" );
      printf( "%3s", isprint( ch )  ? "PR" : "" );
      printf( "%3s", isupper( ch )  ? "U"  : "" );
      printf( "%3s", isxdigit( ch ) ? "X"  : "" );
      printf( ".\n" );
   }
}
```

## Output

```Output
00            AS  C                              .
01            AS  C                              .
02            AS  C                              .
03            AS  C                              .
04            AS  C                              .
05            AS  C                              .
06            AS  C                              .
07            AS  C                              .
08            AS  C                              .
09            AS  C                    S         .
0a            AS  C                    S         .
0b            AS  C                    S         .
0c            AS  C                    S         .
0d            AS  C                    S         .
0e            AS  C                              .
0f            AS  C                              .
10            AS  C                              .
11            AS  C                              .
12            AS  C                              .
13            AS  C                              .
14            AS  C                              .
15            AS  C                              .
16            AS  C                              .
17            AS  C                              .
18            AS  C                              .
19            AS  C                              .
1a            AS  C                              .
1b            AS  C                              .
1c            AS  C                              .
1d            AS  C                              .
1e            AS  C                              .
1f            AS  C                              .
20            AS                       S PR      .
21   !        AS              G    PU    PR      .
22   "        AS              G    PU    PR      .
23   #        AS              G    PU    PR      .
24   $        AS              G    PU    PR      .
25   %        AS              G    PU    PR      .
26   &        AS              G    PU    PR      .
27   '        AS              G    PU    PR      .
28   (        AS              G    PU    PR      .
29   )        AS              G    PU    PR      .
2a   *        AS              G    PU    PR      .
2b   +        AS              G    PU    PR      .
2c   ,        AS              G    PU    PR      .
2d   -        AS              G    PU    PR      .
2e   .        AS              G    PU    PR      .
2f   /        AS              G    PU    PR      .
30   0  AN    AS   CS      D  G          PR     X.
31   1  AN    AS   CS      D  G          PR     X.
32   2  AN    AS   CS      D  G          PR     X.
33   3  AN    AS   CS      D  G          PR     X.
34   4  AN    AS   CS      D  G          PR     X.
35   5  AN    AS   CS      D  G          PR     X.
36   6  AN    AS   CS      D  G          PR     X.
37   7  AN    AS   CS      D  G          PR     X.
38   8  AN    AS   CS      D  G          PR     X.
39   9  AN    AS   CS      D  G          PR     X.
3a   :        AS              G    PU    PR      .
3b   ;        AS              G    PU    PR      .
3c   <        AS              G    PU    PR      .
3d   =        AS              G    PU    PR      .
3e   >        AS              G    PU    PR      .
3f   ?        AS              G    PU    PR      .
40   @        AS              G    PU    PR      .
41   A  AN  A AS   CS CSF     G          PR  U  X.
42   B  AN  A AS   CS CSF     G          PR  U  X.
43   C  AN  A AS   CS CSF     G          PR  U  X.
44   D  AN  A AS   CS CSF     G          PR  U  X.
45   E  AN  A AS   CS CSF     G          PR  U  X.
46   F  AN  A AS   CS CSF     G          PR  U  X.
47   G  AN  A AS   CS CSF     G          PR  U   .
48   H  AN  A AS   CS CSF     G          PR  U   .
49   I  AN  A AS   CS CSF     G          PR  U   .
4a   J  AN  A AS   CS CSF     G          PR  U   .
4b   K  AN  A AS   CS CSF     G          PR  U   .
4c   L  AN  A AS   CS CSF     G          PR  U   .
4d   M  AN  A AS   CS CSF     G          PR  U   .
4e   N  AN  A AS   CS CSF     G          PR  U   .
4f   O  AN  A AS   CS CSF     G          PR  U   .
50   P  AN  A AS   CS CSF     G          PR  U   .
51   Q  AN  A AS   CS CSF     G          PR  U   .
52   R  AN  A AS   CS CSF     G          PR  U   .
53   S  AN  A AS   CS CSF     G          PR  U   .
54   T  AN  A AS   CS CSF     G          PR  U   .
55   U  AN  A AS   CS CSF     G          PR  U   .
56   V  AN  A AS   CS CSF     G          PR  U   .
57   W  AN  A AS   CS CSF     G          PR  U   .
58   X  AN  A AS   CS CSF     G          PR  U   .
59   Y  AN  A AS   CS CSF     G          PR  U   .
5a   Z  AN  A AS   CS CSF     G          PR  U   .
5b   [        AS              G    PU    PR      .
5c   \        AS              G    PU    PR      .
5d   ]        AS              G    PU    PR      .
5e   ^        AS              G    PU    PR      .
5f   _        AS   CS CSF     G    PU    PR      .
60   `        AS              G    PU    PR      .
61   a  AN  A AS   CS CSF     G  L       PR     X.
62   b  AN  A AS   CS CSF     G  L       PR     X.
63   c  AN  A AS   CS CSF     G  L       PR     X.
64   d  AN  A AS   CS CSF     G  L       PR     X.
65   e  AN  A AS   CS CSF     G  L       PR     X.
66   f  AN  A AS   CS CSF     G  L       PR     X.
67   g  AN  A AS   CS CSF     G  L       PR      .
68   h  AN  A AS   CS CSF     G  L       PR      .
69   i  AN  A AS   CS CSF     G  L       PR      .
6a   j  AN  A AS   CS CSF     G  L       PR      .
6b   k  AN  A AS   CS CSF     G  L       PR      .
6c   l  AN  A AS   CS CSF     G  L       PR      .
6d   m  AN  A AS   CS CSF     G  L       PR      .
6e   n  AN  A AS   CS CSF     G  L       PR      .
6f   o  AN  A AS   CS CSF     G  L       PR      .
70   p  AN  A AS   CS CSF     G  L       PR      .
71   q  AN  A AS   CS CSF     G  L       PR      .
72   r  AN  A AS   CS CSF     G  L       PR      .
73   s  AN  A AS   CS CSF     G  L       PR      .
74   t  AN  A AS   CS CSF     G  L       PR      .
75   u  AN  A AS   CS CSF     G  L       PR      .
76   v  AN  A AS   CS CSF     G  L       PR      .
77   w  AN  A AS   CS CSF     G  L       PR      .
78   x  AN  A AS   CS CSF     G  L       PR      .
79   y  AN  A AS   CS CSF     G  L       PR      .
7a   z  AN  A AS   CS CSF     G  L       PR      .
7b   {        AS              G    PU    PR      .
7c   |        AS              G    PU    PR      .
7d   }        AS              G    PU    PR      .
7e   ~        AS              G    PU    PR      .
7f            AS  C                              .
```

## See also

[Character Classification](../c-runtime-library/character-classification.md)<br/>
[Locale](../c-runtime-library/locale.md)<br/>
[setlocale, _wsetlocale](../c-runtime-library/reference/setlocale-wsetlocale.md)<br/>
[Interpretation of Multibyte-Character Sequences](../c-runtime-library/interpretation-of-multibyte-character-sequences.md)<br/>
[to Functions](../c-runtime-library/to-functions.md)
