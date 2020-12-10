---
description: "Learn more about: Compiler Error C3846"
title: "Compiler Error C3846"
ms.date: "11/04/2016"
f1_keywords: ["C3846"]
helpviewer_keywords: ["C3846"]
ms.assetid: c470f8a5-106b-4efb-b8dc-e1319e04130f
---
# Compiler Error C3846

'symbol' : cannot import symbol from 'assembly2': as 'symbol' has already been imported from another assembly 'assembly1'

A symbol could not be imported from a referenced assembly because it was previously imported from a referenced assembly.

## Example

The following sample generates C3846:

```cpp
// C3846a.cpp
// compile with: /LD /clr
public ref struct G
{
};
```

And then compile this:

```cpp
// C3846b.cpp
// compile with: /clr
#using "c3846a.dll"
#using "c3846a.obj"   // C3846

int main()
{
}
```
