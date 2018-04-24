---
title: "Compiler Warning (level 4) C4634 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C4634"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4634"
ms.assetid: 3e3496ce-2ac7-43d0-a48a-f514c950e81d
caps.latest.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 4) C4634
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 4) C4634](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4634).  
  
  
XML document comment: cannot be applied:  reason  
  
 XML documentation tags can not be applied to all C++ constructs.  For example, you cannot add a documentation comment to a namespace or template.  
  
 For more information, see [XML Documentation](../../ide/xml-documentation-visual-cpp.md).  
  
## Example  
 The following sample generates C4634.  
  
```  
// C4634.cpp  
// compile with: /W4 /doc /c  
/// This is a namespace.   // C4634  
namespace hello {  
   class MyClass  {};  
};  
```  
  
## Example  
 The following sample generates C4634.  
  
```  
// C4634_b.cpp  
// compile with: /W4 /doc /c  
/// This is a template.   // C4634  
template <class T>  
class MyClass  {};  
```

