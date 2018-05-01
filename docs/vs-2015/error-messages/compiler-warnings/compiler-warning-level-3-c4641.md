---
title: "Compiler Warning (level 3) C4641 | Microsoft Docs"
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
  - "C4641"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4641"
ms.assetid: 28fe5c3e-6039-42da-9100-1312b5b15aea
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 3) C4641
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 3) C4641](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4641).  
  
  
XML document comment has an ambiguous cross reference  
  
 The compiler was unable to unambiguously resolve a reference. To resolve this warning, specify the parameter information necessary to make the reference unambiguous.  
  
 For more information, see [XML Documentation](../../ide/xml-documentation-visual-cpp.md).  
  
## Example  
 The following sample generates C4641.  
  
```  
// C4641.cpp  
// compile with: /W3 /doc /clr /c  
  
/// <see cref="f" />   // C4641  
// try the following line instead  
// /// <see cref="f(int)" />  
public ref class GR {  
public:  
   void f( int ) {}  
   void f( char ) {}  
};  
```

