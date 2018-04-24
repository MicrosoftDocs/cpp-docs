---
title: "Compiler Error C2757 | Microsoft Docs"
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
  - "C2757"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2757"
ms.assetid: 421f102f-8a32-4d47-a109-811ddf2c909d
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2757
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2757](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2757).  
  
  
symbol' : a symbol with this name already exists and therefore this name cannot be used as a namespace name  
  
 A symbol used in the current compilation as a namespace identifier is already being used in a referenced assembly.  
  
 The following sample generates C2757:  
  
```  
// C2757a.cpp  
// compile with: /clr /LD  
public ref class Nes {};  
```  
  
 And then,  
  
```  
// C2757b.cpp  
// compile with: /clr /c  
#using <C2757a.dll>  
  
namespace Nes {    // C2757  
// try the following line instead  
// namespace Nes2 {  
   public ref class X {};  
}  
```  
  
 The following sample generates C2757:  
  
```  
// C2757c.cpp  
// compile with: /clr:oldSyntax /LD  
#using <mscorlib.dll>  
public __gc class Nes {};  
```  
  
 And then,  
  
```  
// C2757d.cpp  
// compile with: /clr:oldSyntax /c  
#using <C2757c.dll>  
#using <mscorlib.dll>  
  
namespace Nes {    // C2757  
// try the following line instead  
// namespace Nes2 {  
   public __gc class X {};  
}  
```

