---
title: "Compiler Error C2605 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2605"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2605"
ms.assetid: a0e6f132-5acf-4e19-b277-ddf196d182bf
caps.latest.revision: 9
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
# Compiler Error C2605
'name' : this method is reserved within a managed or WinRT class  
  
 Certain names are reserved by the compiler for internal functions.  For more information, see [Destructors and finalizers](../../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Destructors_and_finalizers).  
  
## Example  
 The following sample generates C2605.  
  
```  
// C2605.cpp  
// compile with: /clr /c  
ref class R {  
protected:  
   void Finalize() {}   // C2605  
};  
```