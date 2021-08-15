---
description: "Learn more about: swap Function (auto_handle)"
title: "swap Function (auto_handle)"
ms.date: "11/04/2016"
ms.topic: "reference"
helpviewer_keywords: ["swap function"]
ms.assetid: 7dd91b5c-f0de-4634-a2e2-642626706e27
---
# swap Function (auto_handle)

Swaps objects between one `auto_handle` and another.

## Syntax

```
template<typename _element_type>
void swap(
   auto_handle<_element_type> % _left,
   auto_handle<_element_type> % _right
);
```

#### Parameters

*_left*<br/>
An `auto_handle`.

*_right*<br/>
Another `auto_handle`.

## Example

```cpp
// msl_swap_auto_handle.cpp
// compile with: /clr
#include <msclr\auto_handle.h>

using namespace System;
using namespace msclr;

int main() {
   auto_handle<String> s1 = "string one";
   auto_handle<String> s2 = "string two";

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

**Header file** \<msclr\auto_handle.h>

**Namespace** msclr

## See also

[auto_handle](../dotnet/auto-handle.md)<br/>
[auto_handle::swap](./auto-handle-class.md#swap)
