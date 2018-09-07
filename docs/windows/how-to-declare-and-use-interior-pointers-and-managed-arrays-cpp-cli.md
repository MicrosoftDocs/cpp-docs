---
title: "How to: Declare and Use Interior Pointers and Managed Arrays (C++/CLI) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
dev_langs: ["C++"]
helpviewer_keywords: ["pointers, interior", "arrays [C++], managed"]
ms.assetid: e61a2c09-a7d0-4867-91ea-6b8788a01079
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# How to: Declare and Use Interior Pointers and Managed Arrays (C++/CLI)

The following C++/CLI sample shows how you can declare and use an interior pointer to an array.

> [!IMPORTANT]
> This language feature is supported by the `/clr` compiler option, but not by the `/ZW` compiler option.

## Example

### Code

```cpp
// interior_ptr_arrays.cpp
// compile with: /clr
#define SIZE 10

int main() {
   // declare the array
   array<int>^ arr = gcnew array<int>(SIZE);

   // initialize the array
   for (int i = 0 ; i < SIZE ; i++)  
      arr[i] = i + 1;

   // create an interior pointer into the array
   interior_ptr<int> ipi = &arr[0];

   System::Console::WriteLine("1st element in arr holds: {0}", arr[0]);
   System::Console::WriteLine("ipi points to memory address whose value is: {0}", *ipi);

   ipi++;
   System::Console::WriteLine("after incrementing ipi, it points to memory address whose value is: {0}", *ipi);
}
```

```Output
1st element in arr holds: 1
ipi points to memory address whose value is: 1
after incrementing ipi, it points to memory address whose value is: 2
```

## See Also

[interior_ptr (C++/CLI)](../windows/interior-ptr-cpp-cli.md)