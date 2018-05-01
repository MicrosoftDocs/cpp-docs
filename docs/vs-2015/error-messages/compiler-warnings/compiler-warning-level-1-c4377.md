---
title: "Compiler Warning (level 1) C4377 | Microsoft Docs"
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
  - "C4377"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4377"
ms.assetid: a1c797b8-cd5e-4a56-b430-d07932e811cf
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4377
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 1) C4377](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4377).  
  
  
native types are private by default; -d1PrivateNativeTypes is deprecated  
  
 In previous releases, native types in assemblies were public by default, and an internal, undocumented compiler option (**/d1PrivateNativeTypes**) was used to make them private.  
  
 All types, native and CLR, are now private by default in an assembly, so **/d1PrivateNativeTypes** is no longer needed.  
  
## Example  
 The following sample generates C4377.  
  
```  
// C4377.cpp  
// compile with: /clr /d1PrivateNativeTypes /W1  
// C4377 warning expected  
int main() {}  
```

