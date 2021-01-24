---
description: "Learn more about: How to: Obtain a Pointer to Byte Array"
title: "How to: Obtain a Pointer to Byte Array"
ms.custom: "get-started-article"
ms.date: "11/04/2016"
helpviewer_keywords: ["pointers, to Byte array", "Byte arrays"]
ms.assetid: aea18073-3341-47f4-9f0e-04e03327037e
---
# How to: Obtain a Pointer to Byte Array

You can obtain a pointer to the array block in a <xref:System.Byte> array by taking the address of the first element and assigning it to a pointer.

## Example

```cpp
// pointer_to_Byte_array.cpp
// compile with: /clr
using namespace System;
int main() {
   Byte bArr[] = {1, 2, 3};
   Byte* pbArr = &bArr[0];

   array<Byte> ^ bArr2 = gcnew array<Byte>{1,2,3};
   interior_ptr<Byte> pbArr2 = &bArr2[0];
}
```

## See also

[Using C++ Interop (Implicit PInvoke)](../dotnet/using-cpp-interop-implicit-pinvoke.md)
