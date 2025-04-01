---
title: "Inheritance (C++)"
description: "Learn more about: Inheritance (C++)"
ms.date: "11/04/2016"
helpviewer_keywords: ["derived classes [C++]", "derived classes [C++], about derived classes", "classes [C++], derived"]
---
# Inheritance (C++)

This section explains how to use derived classes to produce extensible programs.

## Overview

New classes can be derived from existing classes using a mechanism called "inheritance" (see the information beginning in [Single Inheritance](single-inheritance.md)). Classes that are used for derivation are called "base classes" of a particular derived class. A derived class is declared using the following syntax:

```cpp
class DerivedSingleBase : [virtual] [access-specifier] Base
{
    // member list
};

class DerivedMultipleBases : [virtual] [access-specifier] Base1,
    [virtual] [access-specifier] Base2, ...
{
    // member list
};
```

After the tag (name) for the class, a colon appears followed by a list of base specifications. The base classes so named must have been declared previously. The base specifications may contain an access specifier, which is one of the keywords [**`public`**](public-cpp.md), [**`protected`**](protected-cpp.md) or [**`private`**](private-cpp.md). These access specifiers appear before the base class name and apply only to that base class. These specifiers control the derived class's permission to use members of the base class. See [Member-Access Control](member-access-control-cpp.md) for information on access to base class members. If the access specifier is omitted, the access to that base is considered **`private`**. The base specifications may contain the keyword [**`virtual`**](virtual-cpp.md) to indicate virtual inheritance. This keyword may appear before or after the access specifier, if any. If virtual inheritance is used, the base class is referred to as a virtual base class.

Multiple base classes can be specified, separated by commas. If a single base class is specified, the inheritance model is [Single inheritance](single-inheritance.md). If more than one base class is specified, the inheritance model is called [Multiple inheritance](multiple-base-classes.md).

The following topics are included:

- [Single inheritance](single-inheritance.md)

- [Multiple base classes](multiple-base-classes.md)

- [Virtual functions](virtual-functions.md)

- [Explicit overrides](explicit-overrides-cpp.md)

- [Abstract classes](abstract-classes-cpp.md)

- [Summary of scope rules](summary-of-scope-rules.md)

**Microsoft Specific**

The [`__super`](super.md) and [`__interface`](interface.md) keywords are documented in this section.

**END Microsoft Specific**

## See also

[C++ Language Reference](cpp-language-reference.md)
