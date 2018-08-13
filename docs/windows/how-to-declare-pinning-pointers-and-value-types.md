---
title: "How to: Declare Pinning Pointers and Value Types | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
dev_langs: ["C++"]
helpviewer_keywords: ["value types, declaring", "pinning pointers"]
ms.assetid: 57c5ec8a-f85a-48c4-ba8b-a81268bcede0
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# How to: Declare Pinning Pointers and Value Types
A value type can be implicitly boxed. You can then declare a pinning pointer to the value type object itself and use a **pin_ptr** to the boxed value type.  
  
## Example  
  
### Code  
  
```cpp  
// pin_ptr_value.cpp  
// compile with: /clr  
value struct V {  
   int i;  
};  
  
int main() {  
   V ^ v = gcnew V;   // imnplicit boxing  
   v->i=8;  
   System::Console::WriteLine(v->i);  
   pin_ptr<V> mv = &*v;  
   mv->i = 7;  
   System::Console::WriteLine(v->i);  
   System::Console::WriteLine(mv->i);  
}  
```  
  
```Output  
8  
7  
7  
```  
  
## See Also  
 [pin_ptr (C++/CLI)](../windows/pin-ptr-cpp-cli.md)