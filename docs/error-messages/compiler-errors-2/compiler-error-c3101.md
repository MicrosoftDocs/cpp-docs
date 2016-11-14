---
title: "Compiler Error C3101 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3101"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3101"
ms.assetid: 4f673766-d4f7-4632-94a5-d36a83f7f4b5
caps.latest.revision: 3
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
# Compiler Error C3101
illegal expression for named attribute argument 'field'  
  
 When initializing a named attribute argument, the value must be a compile time constant.  
  
 For more information on attributes, see [User-Defined Attributes](../../windows/user-defined-attributes-cpp-component-extensions.md).  
  
## Example  
 The following sample generates C3101.  
  
```  
// C3101.cpp  
// compile with: /clr /c  
ref class AAttribute : System::Attribute {  
public:  
   int Field;  
};  
  
extern int i;  
  
[assembly:A(Field = i)];   // C3101  
[assembly:A(Field = 0)];   // OK  
```