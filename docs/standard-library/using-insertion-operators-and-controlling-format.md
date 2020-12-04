---
description: "Learn more about: Using Insertion Operators and Controlling Format"
title: "Using Insertion Operators and Controlling Format"
ms.date: "11/04/2016"
helpviewer_keywords: ["insertion operators"]
ms.assetid: cdefe986-6548-4cd1-8a67-b431d7d36a1c
---
# Using Insertion Operators and Controlling Format

This topic shows how to control format and how to create insertion operators for your own classes. The insertion (**<<**) operator, which is preprogrammed for all standard C++ data types, sends bytes to an output stream object. Insertion operators work with predefined "manipulators," which are elements that change the default format of integer arguments.

You can control the format with the following options:

- [Output Width](#vclrfoutputwidthanchor3)

- [Alignment](#vclrfalignmentanchor4)

- [Precision](#vclrfprecisionanchor5)

- [Radix](#vclrfradixanchor6)

## <a name="vclrfoutputwidthanchor3"></a> Output Width

To align output, you specify the output width for each item by placing the `setw` manipulator in the stream or by calling the `width` member function. This example right-aligns the values in a column at least 10 characters wide:

```cpp
// output_width.cpp
// compile with: /EHsc
#include <iostream>
using namespace std;

int main( )
{
   double values[] = { 1.23, 35.36, 653.7, 4358.24 };
   for( int i = 0; i < 4; i++ )
   {
      cout.width(10);
      cout << values[i] << '\n';
   }
}
```

```Output
      1.23
     35.36
     653.7
   4358.24
```

Leading blanks are added to any value fewer than 10 characters wide.

To pad a field, use the `fill` member function, which sets the value of the padding character for fields that have a specified width. The default is a blank. To pad the column of numbers with asterisks, modify the previous **`for`** loop as follows:

```cpp
for (int i = 0; i <4; i++)
{
    cout.width(10);
    cout.fill('*');
    cout << values[i] << endl;
}
```

The `endl` manipulator replaces the newline character (`'\n'`). The output looks like this:

```Output
******1.23
*****35.36
*****653.7
***4358.24
```

To specify widths for data elements in the same line, use the `setw` manipulator:

```cpp
// setw.cpp
// compile with: /EHsc
#include <iostream>
#include <iomanip>
using namespace std;

int main( )
{
   double values[] = { 1.23, 35.36, 653.7, 4358.24 };
   char *names[] = { "Zoot", "Jimmy", "Al", "Stan" };
   for( int i = 0; i < 4; i++ )
      cout << setw( 7 )  << names[i]
           << setw( 10 ) << values[i] << endl;
}
```

The `width` member function is declared in \<iostream>. If you use `setw` or any other manipulator with arguments, you must include \<iomanip>. In the output, strings are printed in a field of width 6 and integers in a field of width 10:

```Output
   Zoot      1.23
  Jimmy     35.36
     Al     653.7
   Stan   4358.24
```

Neither `setw` nor `width` truncates values. If formatted output exceeds the width, the entire value prints, subject to the stream's precision setting. Both `setw` and `width` affect the following field only. Field width reverts to its default behavior (the necessary width) after one field has been printed. However, the other stream format options remain in effect until changed.

## <a name="vclrfalignmentanchor4"></a> Alignment

Output streams default to right-aligned text. To left-align the names in the previous example and right-align the numbers, replace the **`for`** loop as follows:

```cpp
for (int i = 0; i <4; i++)
    cout << setiosflags(ios::left)
         << setw(6) << names[i]
         << resetiosflags(ios::left)
         << setw(10) << values[i] << endl;
```

The output looks like this:

```Output
Zoot        1.23
Jimmy      35.36
Al         653.7
Stan     4358.24
```

The left-align flag is set by using the [setiosflags](../standard-library/iomanip-functions.md#setiosflags) manipulator with the `left` enumerator. This enumerator is defined in the [ios](../standard-library/basic-ios-class.md) class, so its reference must include the **ios::** prefix. The [resetiosflags](../standard-library/iomanip-functions.md#resetiosflags) manipulator turns off the left-align flag. Unlike `width` and `setw`, the effect of `setiosflags` and `resetiosflags` is permanent.

## <a name="vclrfprecisionanchor5"></a> Precision

The default value for floating-point precision is six. For example, the number 3466.9768 prints as 3466.98. To change the way this value prints, use the [setprecision](../standard-library/iomanip-functions.md#setprecision) manipulator. The manipulator has two flags: [fixed](../standard-library/ios-functions.md#fixed) and [scientific](../standard-library/ios-functions.md#scientific). If [fixed](../standard-library/ios-functions.md#fixed) is set, the number prints as 3466.976800. If `scientific` is set, it prints as 3.4669773+003.

To display the floating-point numbers shown in [Alignment](#vclrfalignmentanchor4) with one significant digit, replace the **`for`** loop as follows:

```cpp
for (int i = 0; i <4; i++)
    cout << setiosflags(ios::left)
         << setw(6)
         << names[i]
         << resetiosflags(ios::left)
         << setw(10)
         << setprecision(1)
         << values[i]
         << endl;
```

The program prints this list:

```Output
Zoot          1
Jimmy     4e+01
Al        7e+02
Stan      4e+03
```

To eliminate scientific notation, insert this statement before the **`for`** loop:

```cpp
cout << setiosflags(ios::fixed);
```

With fixed notation, the program prints with one digit after the decimal point.

```Output
Zoot         1.2
Jimmy       35.4
Al         653.7
Stan      4358.2
```

If you change the `ios::fixed` flag to `ios::scientific`, the program prints this:

```cpp
Zoot    1.2e+00
Jimmy   3.5e+01
Al      6.5e+02
Stan    4.4e+03
```

Again, the program prints one digit after the decimal point. If either `ios::fixed` or `ios::scientific` is set, the precision value determines the number of digits after the decimal point. If neither flag is set, the precision value determines the total number of significant digits. The `resetiosflags` manipulator clears these flags.

## <a name="vclrfradixanchor6"></a> Radix

The `dec`, `oct`, and `hex` manipulators set the default radix for input and output. For example, if you insert the `hex` manipulator into the output stream, the object correctly translates the internal data representation of integers into a hexadecimal output format. The numbers are displayed with digits a through f in lower case if the [uppercase](../standard-library/ios-functions.md#uppercase) flag is clear (the default); otherwise, they are displayed in upper case. The default radix is `dec` (decimal).

## Quoted strings (C++14)

When you insert a string into a stream, you can easily retrieve the same string back by calling the stringstream::str() member function. However, if you want to use the extraction operator to insert the stream into a new string at a later point, you may get an unexpected result because the >> operator by default will stop when it encounters the first whitespace character.

```cpp
std::stringstream ss;
std::string inserted = "This is a sentence.";
std::string extracted;

ss << inserted;
ss >> extracted;

std::cout << inserted;     //  This is a sentence.
std::cout << extracted;    //  This
```

This behavior can be overcome manually, but to make string round-tripping more convenient, C++14 adds the `std::quoted` stream manipulator in \<iomanip>. Upon insertion, `quoted()` surrounds the string with a delimiter (double quote ' " ' by default) and upon extraction manipulates the stream to extract all characters until the final delimiter is encountered. Any embedded quotes are escaped with an escape character ('\\\\' by default).

The delimiters are present only in the stream object; they are not present in the extracted string but they are present in the string returned by [basic_stringstream::str](../standard-library/basic-stringstream-class.md#str).

The whitespace behavior of the insertion and extraction operations is independent of how a string is represented in code, so the quoted operator is useful regardless of whether the input string is a raw string literal or a regular string. The input string, whatever its format, can have embedded quotes, line breaks, tabs, and so on and all these will be preserved by the quoted() manipulator.

For more information and full code examples, see [quoted](../standard-library/iomanip-functions.md#quoted).

## See also

[Output Streams](../standard-library/output-streams.md)
