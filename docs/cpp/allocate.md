---
title: "allocate | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-language"]
ms.topic: "language-reference"
f1_keywords: ["allocate_cpp"]
dev_langs: ["C++"]
helpviewer_keywords: ["__declspec keyword [C++], allocate", "allocate __declspec keyword"]
ms.assetid: 67828b31-de60-4c0e-b0a6-ef3aab22641d
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# allocate
**Microsoft Specific**  
  
 The **allocate** declaration specifier names a data segment in which the data item will be allocated.  
  
## Syntax  
  
```  
   __declspec(allocate("segname")) declarator  
```  
  
## Remarks  
 The name *segname* must be declared using one of the following pragmas:  
  
-   [code_seg](../preprocessor/code-seg.md)  
  
-   [const_seg](../preprocessor/const-seg.md)  
  
-   [data_seg](../preprocessor/data-seg.md)  
  
-   [init_seg](../preprocessor/init-seg.md)  
  
-   [section](../preprocessor/section.md)  
  
## Example  
  
```cpp 
// allocate.cpp  
#pragma section("mycode", read)  
__declspec(allocate("mycode"))  int i = 0;  
  
int main() {  
}  
```  
  
 **END Microsoft Specific**  
  
## See also  
 [__declspec](../cpp/declspec.md)   
 [Keywords](../cpp/keywords-cpp.md)