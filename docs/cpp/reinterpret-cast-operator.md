---
description: "Learn more about: reinterpret_cast Operator"
title: "reinterpret_cast Operator"
ms.date: "11/04/2016"
f1_keywords: ["reinterpret_cast_cpp"]
helpviewer_keywords: ["reinterpret_cast keyword [C++]"]
ms.assetid: eb3283c7-7f88-467e-affd-407d37b46d6c
---
# reinterpret_cast Operator

Allows any pointer to be converted into any other pointer type. Also allows any integral type to be converted into any pointer type and vice versa.

## Syntax

```
reinterpret_cast < type-id > ( expression )
```

## Remarks

Misuse of the **`reinterpret_cast`** operator can easily be unsafe. Unless the desired conversion is inherently low-level, you should use one of the other cast operators.

The **`reinterpret_cast`** operator can be used for conversions such as **`char*`** to **`int*`**, or `One_class*` to `Unrelated_class*`, which are inherently unsafe.

The result of a **`reinterpret_cast`** cannot safely be used for anything other than being cast back to its original type. Other uses are, at best, nonportable.

The **`reinterpret_cast`** operator cannot cast away the **`const`**, **`volatile`**, or **`__unaligned`** attributes. See [const_cast Operator](../cpp/const-cast-operator.md) for information on removing these attributes.

The **`reinterpret_cast`** operator converts a null pointer value to the null pointer value of the destination type.

One practical use of **`reinterpret_cast`** is in a hash function, which maps a value to an index in such a way that two distinct values rarely end up with the same index.

```cpp
#include <iostream>
using namespace std;

// Returns a hash code based on an address
unsigned short Hash( void *p ) {
   unsigned int val = reinterpret_cast<unsigned int>( p );
   return ( unsigned short )( val ^ (val >> 16));
}

using namespace std;
int main() {
   int a[20];
   for ( int i = 0; i < 20; i++ )
      cout << Hash( a + i ) << endl;
}

Output:
64641
64645
64889
64893
64881
64885
64873
64877
64865
64869
64857
64861
64849
64853
64841
64845
64833
64837
64825
64829
```

The **`reinterpret_cast`** allows the pointer to be treated as an integral type. The result is then bit-shifted and XORed with itself to produce a unique index (unique to a high degree of probability). The index is then truncated by a standard C-style cast to the return type of the function.

## See also

[Casting Operators](../cpp/casting-operators.md)<br/>
[Keywords](../cpp/keywords-cpp.md)
