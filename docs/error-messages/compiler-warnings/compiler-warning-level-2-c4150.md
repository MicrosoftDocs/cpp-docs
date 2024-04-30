---
description: "Learn more about: Compiler Warning (level 2) C4150"
title: "Compiler Warning (level 2) C4150"
ms.date: "11/04/2016"
f1_keywords: ["C4150"]
helpviewer_keywords: ["C4150"]
ms.assetid: ff1760ec-0d9f-4d45-b797-94261624becf
---
# Compiler Warning (level 2) C4150

> deletion of pointer to incomplete type 'type'; no destructor called

The `delete` operator is called to delete a type that was declared but not defined. The compiler can't find the destructor to call because the definition is not in the same translation unit as the `delete`. The pattern of declaring a class without defining is sometimes used to reduce the number of `#include` directives in order to speed up the build.

The following sample generates C4150 by declaring but not defining `class IncClass`:

```cpp
// compile with: /W2
class IncClass;

void NoDestruct( IncClass* pIncClass )
{
   delete pIncClass; // C4150
}
```

This issue should be fixed by putting the definition for the `IncClass` type in the same translation unit as the `delete`. If the class is declared in a header file, then it can be included in the translation unit. If the class is not declared in a header file then the `NoDestruct` definition may need to be moved into the same file as the `IncClass` definition.

```cpp
// compile with: /W2
#include "IncClass.h"

void NoDestruct( IncClass* pIncClass )
{
   delete pIncClass;
}
```

C4150 can also occur when the class is defined after the destructor call in the same translation unit. For example:

```cpp
// C4150.cpp
// compile with: /W2
class  IncClass;

void NoDestruct( IncClass* pIncClass )
{
   delete pIncClass; // C4150
}

class IncClass
{
public:
    IncClass() = default;
    ~IncClass() = default;
};
```
If this is the case, then the use of `delete` needs to be after the class definition.
```cpp
// C4150.cpp
// compile with: /W2
class  IncClass;

void NoDestruct( IncClass* pIncClass );

class IncClass
{
public:
    IncClass() = default;
    ~IncClass() = default;
};

void NoDestruct( IncClass* pIncClass )
{
   delete pIncClass;
}

```
