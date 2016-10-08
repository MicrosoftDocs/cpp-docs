---
title: "Linker Tools Error LNK1179"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: error-reference
ms.assetid: 4b1536d7-0d3d-4f29-a9c1-6fa5cf6cb665
caps.latest.revision: 8
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# Linker Tools Error LNK1179
invalid or corrupt file: duplicate COMDAT 'filename'  
  
 An object module contains two or more COMDATs with the same name.  
  
 This error can be caused by using [/H](../VS_visualcpp/-H--Restrict-Length-of-External-Names-.md), which limits the length of external names, and [/Gy](../VS_visualcpp/-Gy--Enable-Function-Level-Linking-.md), which packages functions in COMDATs.  
  
## Example  
 In the following code, `function1` and `function2` are identical in the first eight characters. Compiling with **/Gy** and **/H8** produces a link error.  
  
```  
void function1(void);  
void function2(void);  
  
int main() {  
    function1();  
    function2();  
}  
  
void function1(void) {}  
void function2(void) {}  
```