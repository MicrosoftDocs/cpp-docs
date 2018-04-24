---
title: "Compiler Error C3846 | Microsoft Docs"
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
  - "C3846"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3846"
ms.assetid: c470f8a5-106b-4efb-b8dc-e1319e04130f
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3846
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3846](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3846).  
  
  
symbol' : cannot import symbol from 'assembly2': as 'symbol' has already been imported from another assembly 'assembly1'  
  
 A symbol could not be imported from a referenced assembly because it was previously imported from a referenced assembly.  
  
 The following sample generates C3846:  
  
```  
// C3846a.cpp  
// compile with: /LD /clr  
public ref struct G  
{  
};  
```  
  
 And then compile this:  
  
```  
// C3846b.cpp  
// compile with: /clr  
#using "c3846a.dll"  
#using "c3846a.obj"   // C3846  
  
int main()  
{  
}  
```  
  
 The following sample generates C3846:  
  
```  
// C3846c.cpp  
// compile with: /LD /clr:oldSyntax  
#using <mscorlib.dll>  
using namespace System;  
  
public __gc struct G  
{  
};  
```  
  
 And then compile this:  
  
```  
// C3846d.cpp  
// compile with: /clr:oldSyntax  
#using <mscorlib.dll>  
using namespace System;  
#using "c3846c.dll"  
#using "c3846c.obj"   // C3846  
  
int main()  
{  
}  
```

