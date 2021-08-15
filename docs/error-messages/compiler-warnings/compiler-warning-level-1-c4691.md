---
description: "Learn more about: Compiler Warning (level 1) C4691"
title: "Compiler Warning (level 1) C4691"
ms.date: "11/04/2016"
f1_keywords: ["C4691"]
helpviewer_keywords: ["C4691"]
ms.assetid: 722133d9-87f6-46c1-9e86-9825453d6999
---
# Compiler Warning (level 1) C4691

'type' : type referenced was expected in unreferenced assembly 'file', type defined in current translation unit used instead

The metadata file containing the original type definition is not referenced, and the compiler is using a local type definition.

In the case where you are rebuilding *file*, C4691 can be ignored or turned off with pragma [warning](../../preprocessor/warning.md).  That is, if the file you are building is the same as the file where the compiler expects to find the type definition, you can ignore C4691.

However, unexpected behavior can occur if the compiler uses a definition that is not from the same assembly that is referenced in metadata; CLR types are typed not only by the name of the type, but also by the assembly.  That is, a type Z from assembly z.dll is different from a type Z from assembly y.dll.

## Examples

This sample contains the original type definition.

```cpp
// C4691_a.cpp
// compile with: /clr /LD /W1
public ref class Original_Type {};
```

This sample references C4691_a.dll and declares a field of type Original_Type.

```cpp
// C4691_b.cpp
// compile with: /clr /LD
#using "C4691_a.dll"
public ref class Client {
public:
   Original_Type^ ot;
};
```

The following sample generates C4691.  Notice this sample contains a definition for Original_Type and does not reference C4691a.dll.

To resolve, reference the metadata file that contains the original type definition and remove the local declaration and definition.

```cpp
// C4691_c.cpp
// compile with: /clr /LD /W1
// C4691 expected

// Uncomment the following line to resolve.
// #using "C4691_a.dll"
#using "C4691_b.dll"

// Delete the following line to resolve.
ref class Original_Type;

public ref class MyClass : Client {};
```
