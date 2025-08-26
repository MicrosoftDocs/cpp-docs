---
title: Compiler warning (level 2) C4150
description: "Learn more about: Compiler Warning (level 2) C4150"
ms.date: 11/04/2016
f1_keywords: ["C4150"]
helpviewer_keywords: ["C4150"]
---
# Compiler Warning (level 2) C4150

> deletion of pointer to incomplete type 'type'; no destructor called

## Remarks

The `delete` operator is called to delete a type that was declared but not defined. The compiler can't find the destructor to call because the definition isn't in the same translation unit as the `delete`.

## Example

The following example generates C4150 by declaring but not defining `class IncClass`:

```cpp
// compile with: /W2
class IncClass;

void NoDestruct( IncClass* pIncClass )
{
   delete pIncClass; // C4150
}
```

To fix the issue, put the definition of `IncClass` in the same file as the `delete`. If the class is declared in a header file, it can be added to the file using `#include`. If the class isn't declared in a header file, the `NoDestruct` function definition may need to be moved into the same file as the `IncClass` definition.

```cpp
// compile with: /W2
#include "IncClass.h"

void NoDestruct( IncClass* pIncClass )
{
   delete pIncClass;
}
```

C4150 will be emitted when the class is defined after the destructor call in the same file. In the following example `IncClass` is declared before being used, but defined after the `delete`:

```cpp
// C4150.cpp
// compile with: /W2
class IncClass;

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
In this scenario, the use of `delete` needs to be after the class definition.
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

## See also

* [Projects and build systems](../../build/projects-and-build-systems-cpp.md)
* [Source files and source programs](../../c-language/source-files-and-source-programs.md)
