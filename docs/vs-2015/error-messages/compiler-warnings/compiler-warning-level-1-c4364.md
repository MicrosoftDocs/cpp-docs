---
title: "Compiler Warning (level 1) C4364 | Microsoft Docs"
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
  - "C4364"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4364"
ms.assetid: 1477634c-d60f-4570-ad16-1aaeae24ac7f
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4364
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 1) C4364](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4364).  
  
  
using for assembly 'file' previously seen at location(line_number) without as_friend attribute; as_friend not applied  
  
 A `#using` directive was repeated for a given metadata file, but the `as_friend` qualifier was not used in the first occurrence; the compiler will ignore the second `as_friend`.  
  
 For more information, see [Friend Assemblies (C++)](../../dotnet/friend-assemblies-cpp.md).  
  
## Example  
 The following sample creates a component.  
  
```  
// C4364.cpp  
// compile with: /clr /LD  
ref class A {};  
```  
  
## Example  
 The following sample generates C4364.  
  
```  
// C4364_b.cpp  
// compile with: /clr /W1 /c  
#using " C4364.dll"  
#using " C4364.dll" as_friend   // C4364  
```

