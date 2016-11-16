---
title: "allocate | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "allocate"
  - "allocate_cpp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__declspec keyword [C++], allocate"
  - "allocate __declspec keyword"
ms.assetid: 67828b31-de60-4c0e-b0a6-ef3aab22641d
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# allocate
**Microsoft Specific**  
  
 The **allocate** declaration specifier names a data segment in which the data item will be allocated.  
  
## Syntax  
  
```  
  
__declspec(allocate("  
segname  
")) declarator  
```  
  
## Remarks  
 The name *segname* must be declared using one of the following pragmas:  
  
-   [code_seg](../preprocessor/code-seg.md)  
  
-   [const_seg](../preprocessor/const-seg.md)  
  
-   [data_seg](../preprocessor/data-seg.md)  
  
-   [init_seg](../preprocessor/init-seg.md)  
  
-   [section](../preprocessor/section.md)  
  
## Example  
  
```  
// allocate.cpp  
#pragma section("mycode", read)  
__declspec(allocate("mycode"))  int i = 0;  
  
int main() {  
}  
```  
  
 **END Microsoft Specific**  
  
## See Also  
 [__declspec](../cpp/declspec.md)   
 [Keywords](../cpp/keywords-cpp.md)