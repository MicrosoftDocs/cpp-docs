---
title: "&lt;ostream&gt; functions | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: ["ostream/std::swap", "ostream/std::endl", "ostream/std::ends", "ostream/std::flush"]
ms.assetid: d6e56cc0-c8df-4dbe-be10-98e14c35ed3a
caps.latest.revision: 15
manager: "ghogen"
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

*Elem*  
The element type.

*Ostr*  
An object of type **basic_ostream**.

*Tr*  
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

*Elem*  
The element type.

*Ostr*  
An object of type **basic_ostream**.

*Tr*  
Character traits.

### Return Value

An object of type **basic_ostream**.

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

*Elem*  
The element type.

*Ostr*  
An object of type **basic_ostream**.

*Tr*  
Character traits.

### Return Value

An object of type **basic_ostream**.

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

Exchanges the values of two **basic_ostream** objects.

```cpp
template <class Elem, class Tr>
void swap(
   basic_ostream<Elem, Tr>& left,
   basic_ostream<Elem, Tr>& right);
```

### Parameters

*Elem*  
The element type.

*Tr*  
Character traits.

*left*  
An lvalue reference to a **basic_ostream** object.

*right*  
An lvalue reference to a **basic_ostream** object.

### Remarks

The template function **swap** executes `left.swap(right)`.

## See also

[\<ostream>](../standard-library/ostream.md)  
