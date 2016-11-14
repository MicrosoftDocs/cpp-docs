---
title: "Compiler Error C3908 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3908"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3908"
ms.assetid: 3c322482-c79e-4197-a578-2ad9bc379d1a
caps.latest.revision: 8
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
# Compiler Error C3908
access level less restrictive than 'construct'  
  
 A property accessor method (get or set) cannot have less restrictive access than the access specified on the property itself.  Similarly, for event accessor methods.  
  
 For more information, see [property](../../windows/property-cpp-component-extensions.md) and [event](../../windows/event-cpp-component-extensions.md).  
  
 The following sample generates C3908:  
  
```  
// C3908.cpp  
// compile with: /clr  
ref class X {  
protected:  
   property int i {  
   public:   // C3908 property i is protected   
      int get();  
   private:  
      void set(int);   // OK more restrictive  
   };  
};  
```