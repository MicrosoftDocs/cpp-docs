---
description: "Learn more about: Compiler Warning (level 1) C4286"
title: "Compiler Warning (level 1) C4286"
ms.date: "11/04/2016"
f1_keywords: ["C4286"]
helpviewer_keywords: ["C4286"]
ms.assetid: 93eadd6c-6f36-413b-ba91-c9aa2314685a
---
# Compiler Warning (level 1) C4286

'type1' : is caught by base class ('type2') on line number

The specified exception type is handled by a previous handler. The type for the second catch is derived from the type of the first. Exceptions for a base class catch exceptions for a derived class.

## Example

```cpp
//C4286.cpp
// compile with: /W1
#include <eh.h>
class C {};
class D : public  C {};
int main()
{
    try
    {
        throw "ooops!";
    }
    catch( C ) {}
    catch( D ) {}  // warning C4286, D is derived from C
}
```
