---
title: "How to: Obtain a Pointer to Byte Array | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "get-started-article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "pointers, to Byte array"
  - "Byte arrays"
ms.assetid: aea18073-3341-47f4-9f0e-04e03327037e
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# How to: Obtain a Pointer to Byte Array
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [How to: Obtain a Pointer to Byte Array](https://docs.microsoft.com/cpp/dotnet/how-to-obtain-a-pointer-to-byte-array).  
  
  
You can obtain a pointer to the array block in a <xref:System.Byte> array by taking the address of the first element and assigning it to a pointer.  
  
## Example  
  
```  
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
  
## See Also  
 [Using C++ Interop (Implicit PInvoke)](../dotnet/using-cpp-interop-implicit-pinvoke.md)

