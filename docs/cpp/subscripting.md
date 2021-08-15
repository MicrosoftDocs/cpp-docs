---
description: "Learn more about: Subscripting"
title: "Subscripting"
ms.date: "11/04/2016"
helpviewer_keywords: ["subscript operator [C++], overloaded", "arrays [C++], subscripting", "subscripting [C++]", "operators [C++], overloading", "operator overloading [C++], examples", "subscript operator"]
ms.assetid: eb151281-6733-401d-9787-39ab6754c62c
---
# Subscripting

The subscript operator (**[ ]**), like the function-call operator, is considered a binary operator. The subscript operator must be a nonstatic member function that takes a single argument. This argument can be of any type and designates the desired array subscript.

## Example

The following example demonstrates how to create a vector of type **`int`** that implements bounds checking:

```cpp
// subscripting.cpp
// compile with: /EHsc
#include <iostream>

using namespace std;
class IntVector {
public:
   IntVector( int cElements );
   ~IntVector() { delete [] _iElements; }
   int& operator[](int nSubscript);
private:
   int *_iElements;
   int _iUpperBound;
};

// Construct an IntVector.
IntVector::IntVector( int cElements ) {
   _iElements = new int[cElements];
   _iUpperBound = cElements;
}

// Subscript operator for IntVector.
int& IntVector::operator[](int nSubscript) {
   static int iErr = -1;

   if( nSubscript >= 0 && nSubscript < _iUpperBound )
      return _iElements[nSubscript];
   else {
      clog << "Array bounds violation." << endl;
      return iErr;
   }
}

// Test the IntVector class.
int main() {
   IntVector v( 10 );
   int i;

   for( i = 0; i <= 10; ++i )
      v[i] = i;

   v[3] = v[9];

   for ( i = 0; i <= 10; ++i )
      cout << "Element: [" << i << "] = " << v[i] << endl;
}
```

```Output
Array bounds violation.
Element: [0] = 0
Element: [1] = 1
Element: [2] = 2
Element: [3] = 9
Element: [4] = 4
Element: [5] = 5
Element: [6] = 6
Element: [7] = 7
Element: [8] = 8
Element: [9] = 9
Array bounds violation.
Element: [10] = 10
```

## Comments

When `i` reaches 10 in the preceding program, **operator[]** detects that an out-of-bounds subscript is being used and issues an error message.

Note that the function **operator[]** returns a reference type. This causes it to be an l-value, allowing you to use subscripted expressions on either side of assignment operators.

## See also

[Operator Overloading](../cpp/operator-overloading.md)
