---
title: "&lt;ostream&gt; functions"
ms.date: "11/04/2016"
f1_keywords: ["ostream/std::swap", "ostream/std::endl", "ostream/std::ends", "ostream/std::flush"]
ms.assetid: d6e56cc0-c8df-4dbe-be10-98e14c35ed3a
helpviewer_keywords: ["std::swap [C++]", "std::endl [C++]", "std::ends [C++]", "std::flush [C++]"]
---
# &lt;ostream&gt; functions

These are the global template functions defined in &lt;ostream&gt;. For member functions, see the [basic_ostream Class](basic-ostream-class.md) documentation.

||||
|-|-|-|
|[endl](#endl)|[ends](#ends)|[flush](#flush)|
|[swap](#swap)|

## endl

Terminates a line and flushes the buffer.

```cpp
template class<Elem, Tr>
basic_ostream<Elem, Tr>& endl(
   basic_ostream<Elem, Tr>& Ostr);
```

### Parameters

*Elem*<br/>
The element type.

*Ostr*<br/>
An object of type **basic_ostream**.

*Tr*<br/>
Character traits.

### Return Value

An object of type **basic_ostream**.

### Remarks

The manipulator calls *Ostr*.[put](../standard-library/basic-ostream-class.md#put)(*Ostr*.[widen](../standard-library/basic-ios-class.md#widen)('\n')), and then calls *Ostr*.[flush](../standard-library/basic-ostream-class.md#flush). It returns *Ostr*.

### Example

```cpp
// ostream_endl.cpp
// compile with: /EHsc
#include <iostream>

int main( )
{
   using namespace std;
   cout << "testing" << endl;
}
```

```Output
testing
```

## ends

Terminates a string.

```cpp
template class<Elem, Tr>
basic_ostream<Elem, Tr>& ends(
   basic_ostream<Elem, Tr>& Ostr);
```

### Parameters

*Elem*<br/>
The element type.

*Ostr*<br/>
An object of type `basic_ostream`.

*Tr*<br/>
Character traits.

### Return Value

An object of type `basic_ostream`.

### Remarks

The manipulator calls *Ostr*.[put](../standard-library/basic-ostream-class.md#put)(*Elem*('\0')). It returns *Ostr*.

### Example

```cpp
// ostream_ends.cpp
// compile with: /EHsc
#include <iostream>

int main( )
{
   using namespace std;
   cout << "a";
   cout << "b" << ends;
   cout << "c" << endl;
}
```

```Output
ab c
```

## flush

Flushes the buffer.

```cpp
template class<Elem, Tr>
basic_ostream<Elem, Tr>& flush(
   basic_ostream<Elem, Tr>& Ostr);
```

### Parameters

*Elem*<br/>
The element type.

*Ostr*<br/>
An object of type `basic_ostream`.

*Tr*<br/>
Character traits.

### Return Value

An object of type `basic_ostream`.

### Remarks

The manipulator calls *Ostr*.[flush](../standard-library/basic-ostream-class.md#flush). It returns *Ostr*.

### Example

```cpp
// ostream_flush.cpp
// compile with: /EHsc
#include <iostream>

int main( )
{
   using namespace std;
   cout << "testing" << flush;
}
```

```Output
testing
```

## swap

Exchanges the values of two `basic_ostream` objects.

```cpp
template <class Elem, class Tr>
void swap(
   basic_ostream<Elem, Tr>& left,
   basic_ostream<Elem, Tr>& right);
```

### Parameters

*Elem*<br/>
The element type.

*Tr*<br/>
Character traits.

*left*<br/>
An lvalue reference to a `basic_ostream` object.

*right*<br/>
An lvalue reference to a `basic_ostream` object.

### Remarks

The template function `swap` executes `left.swap(right)`.

## See also

[\<ostream>](../standard-library/ostream.md)
