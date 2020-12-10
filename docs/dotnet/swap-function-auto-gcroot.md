---
description: "Learn more about: swap Function (auto_gcroot)"
title: "swap Function (auto_gcroot)"
ms.date: "11/04/2016"
ms.topic: "reference"
f1_keywords: ["msclr::swap", "msclr.swap"]
helpviewer_keywords: ["swap function"]
ms.assetid: 2fe8146b-a7f7-445a-9ae9-53b5556be701
---
# swap Function (auto_gcroot)

Swaps objects between one `auto_gcroot` and another.

## Syntax

```
template<typename _element_type>
void swap(
   auto_gcroot<_element_type> & _left,
   auto_gcroot<_element_type> & _right
);
```

#### Parameters

*_left*<br/>
An `auto_gcroot`.

*_right*<br/>
Another `auto_gcroot`.

## Example

```cpp
// msl_swap_auto_gcroot.cpp
// compile with: /clr
#include <msclr\auto_gcroot.h>

using namespace System;
using namespace msclr;

int main() {
   auto_gcroot<String^> s1 = "string one";
   auto_gcroot<String^> s2 = "string two";

   Console::WriteLine( "s1 = '{0}', s2 = '{1}'",
      s1->ToString(), s2->ToString() );
   swap( s1, s2 );
   Console::WriteLine( "s1 = '{0}', s2 = '{1}'",
      s1->ToString(), s2->ToString() );
}
```

```Output
s1 = 'string one', s2 = 'string two'
s1 = 'string two', s2 = 'string one'
```

## Requirements

**Header file** \<msclr\auto_gcroot.h>

**Namespace** msclr

## See also

[auto_gcroot](../dotnet/auto-gcroot.md)<br/>
[auto_gcroot::swap](./auto-gcroot-class.md#swap)
