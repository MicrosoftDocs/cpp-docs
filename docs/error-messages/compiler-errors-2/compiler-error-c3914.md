---
title: "Compiler Error C3914"
ms.custom: ""
ms.date: "10/28/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3914"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3914"
ms.assetid: 8f3190e6-ee50-4916-9ecc-3b8748b2e1e7
caps.latest.revision: 5
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
# Compiler Error C3914
a default property cannot be static  
  
 A default property was declared incorrectly.  For more information, see [How to: Use Indexed Properties](../../misc/how-to-use-indexed-properties.md).  
  
## Example  
 The following sample generates C3914.  
  
```  
// C3914.cpp  
// compile with: /clr /c  
ref struct X {  
   static property int default[int] {   // C3914  
   // try the following line instead  
   // property int default[int] {  
      int get(int) { return 0; }  
      void set(int, int) {}  
   }  
};  
```