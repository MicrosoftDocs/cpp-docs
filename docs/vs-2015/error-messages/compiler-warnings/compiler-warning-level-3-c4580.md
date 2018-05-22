---
title: "Compiler Warning (level 3) C4580 | Microsoft Docs"
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
  - "C4580"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4580"
ms.assetid: fef6e8e0-0d6a-44fa-b22a-2fe7ba2ef379
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 3) C4580
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Warning (level 3) C4580](https://docs.microsoft.com/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4580).  
  
  
attribute] is deprecated; instead specify System::Attribute or Platform::Metadata as a base class  
  
 [attribute](../../windows/attribute.md) is no longer the preferred syntax for creating user-defined attributes. For more information, see [User-Defined Attributes](../../windows/user-defined-attributes-cpp-component-extensions.md). For CLR code, derive attributes from [System::Attribute](<!-- TODO: review code entity reference <xref:assetId:///System::Attribute?qualifyHint=False&amp;autoUpgrade=True>  -->). For Windows Runtime code, derive attributes from `Platform::Metadata`.  
  
## Example  
 The following sample generates C3454 and shows how to fix it.  
  
```  
// C4580.cpp  
// compile with: /W3 /c /clr  
[attribute]   // C4580  
public ref class Attr {  
public:  
   int m_t;  
};  
  
public ref class Attr2 : System::Attribute {  
public:  
   int m_t;  
};  
```

