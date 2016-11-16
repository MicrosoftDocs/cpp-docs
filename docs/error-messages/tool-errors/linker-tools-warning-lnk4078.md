---
title: "Linker Tools Warning LNK4078 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "LNK4078"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK4078"
ms.assetid: 5a16796d-6caf-42d9-8f65-b042843eafb8
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
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
# Linker Tools Warning LNK4078
multiple 'section name' sections found with different attributes  
  
 LINK found two or more sections that have the same name but different attributes.  
  
 This warning can be caused by an import library or exports file that was created by a previous version of LINK or LIB.  
  
 Recreate the file and relink.  
  
## Example  
 LNK4078 can also be caused by a breaking change: the section named by [init_seg](../../preprocessor/init-seg.md) on x86 was read/write, it is now read only.  
  
 The following sample generates LNK4078.  
  
```  
// LNK4078.cpp  
// compile with: /W1  
// LNK4078 expected  
#include <stdio.h>  
#pragma warning(disable : 4075)  
typedef void (__cdecl *PF)(void);  
int cxpf = 0;   // number of destructors to call  
PF pfx[200];   // pointers to destructors.  
  
struct A { A() {} };  
  
int myexit (PF pf) { return 0; }  
  
#pragma section(".mine$a", read, write)  
// try the following line instead  
// #pragma section(".mine$a", read)  
__declspec(allocate(".mine$a")) int ii = 1;  
  
#pragma section(".mine$z", read, write)  
// try the following line instead  
// #pragma section(".mine$z", read)  
__declspec(allocate(".mine$z")) int i = 1;  
  
#pragma data_seg()  
#pragma init_seg(".mine$m", myexit)  
A bbbb;   
A cccc;  
int main() {}  
```