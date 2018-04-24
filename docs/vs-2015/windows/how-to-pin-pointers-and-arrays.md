---
title: "How to: Pin Pointers and Arrays | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "pointers, pinning"
  - "arrays [C++], pinning"
ms.assetid: ee783260-e676-46b8-a38e-11a06f1d57b0
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# How to: Pin Pointers and Arrays
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [How to: Pin Pointers and Arrays](https://docs.microsoft.com/cpp/windows/how-to-pin-pointers-and-arrays).  
  
Pinning a sub-object defined in a managed object has the effect of pinning the entire object.  For example, if any element of an array is pinned, then the whole array is also pinned. There are no extensions to the language for declaring a pinned array. To pin an array, declare a pinning pointer to its element type, and pin one of its elements.  
  
## Example  
  
### Code  
  
```  
// pin_ptr_array.cpp  
// compile with: /clr  
#include <stdio.h>  
using namespace System;  
  
int main() {  
   array<Byte>^ arr = gcnew array<Byte>(4);  
   arr[0] = 'C';  
   arr[1] = '+';  
   arr[2] = '+';  
   arr[3] = '\0';  
   pin_ptr<Byte> p = &arr[1];   // entire array is now pinned  
   unsigned char * cp = p;  
  
   printf_s("%s\n", cp); // bytes pointed at by cp  
                         // will not move during call  
}  
```  
  
### Output  
  
```  
++  
```  
  
## See Also  
 [pin_ptr (C++/CLI)](../windows/pin-ptr-cpp-cli.md)



