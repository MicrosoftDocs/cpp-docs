---
title: "allocate"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
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
  
-   [code_seg](../c/code_seg.md)  
  
-   [const_seg](../c/const_seg.md)  
  
-   [data_seg](../c/data_seg.md)  
  
-   [init_seg](../c/init_seg.md)  
  
-   [section](../c/section.md)  
  
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
 [__declspec](../cpp/__declspec.md)   
 [Keywords](../cpp/keywords--c---.md)