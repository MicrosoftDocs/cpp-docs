---
title: "Linker Tools Error LNK1179 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "LNK1179"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK1179"
ms.assetid: 4b1536d7-0d3d-4f29-a9c1-6fa5cf6cb665
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Linker Tools Error LNK1179
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Linker Tools Error LNK1179](https://docs.microsoft.com/cpp/error-messages/tool-errors/linker-tools-error-lnk1179).  
  
  
invalid or corrupt file: duplicate COMDAT 'filename'  
  
 An object module contains two or more COMDATs with the same name.  
  
 This error can be caused by using [/H](../../build/reference/h-restrict-length-of-external-names.md), which limits the length of external names, and [/Gy](../../build/reference/gy-enable-function-level-linking.md), which packages functions in COMDATs.  
  
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

