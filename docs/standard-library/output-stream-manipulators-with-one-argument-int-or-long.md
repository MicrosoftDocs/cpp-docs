---
description: "Learn more about: Output Stream Manipulators with One Argument (int or long)"
title: "Output Stream Manipulators with One Argument (int or long)"
ms.date: "11/04/2016"
helpviewer_keywords: ["output streams, int or long argument manipulators"]
ms.assetid: 338f3164-b5e2-4c5a-a605-7d9dc3629ca1
---
# Output Stream Manipulators with One Argument (int or long)

The iostream class library provides a set of macros for creating parameterized manipulators. Manipulators with a single **`int`** or **`long`** argument are a special case. To create an output stream manipulator that accepts a single **`int`** or **`long`** argument (like `setw`), you must use the _Smanip macro, which is defined in \<iomanip>. This example defines a `fillblank` manipulator that inserts a specified number of blanks into the stream:

## Example

```cpp
// output_stream_manip.cpp
// compile with: /GR /EHsc
#include <iostream>
#include <iomanip>
using namespace std;

void fb( ios_base& os, int l )
{
   ostream *pos = dynamic_cast<ostream*>(&os);
   if (pos)
   {
      for( int i=0; i < l; i++ )
      (*pos) << ' ';
   };
}

_Smanip<int>
   __cdecl fillblank(int no)
   {
   return (_Smanip<int>(&fb, no));
   }

int main( )
{
   cout << "10 blanks follow" << fillblank( 10 ) << ".\n";
}
```

## See also

[Custom Manipulators with Arguments](../standard-library/custom-manipulators-with-arguments.md)
