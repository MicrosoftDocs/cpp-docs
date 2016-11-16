---
title: "Compiler Warning (level 4) C4400 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4400"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4400"
ms.assetid: f135fe98-4f92-4e07-9d71-2621b36ee755
caps.latest.revision: 4
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
# Compiler Warning (level 4) C4400
'type' : const/volatile qualifiers on this type are not supported  
  
 The [const](../../cpp/const-cpp.md)and [volatile](../../cpp/volatile-cpp.md)qualifiers will not work with variables of common language runtime types.  
  
## Example  
 The following sample generates C4400.  
  
```  
// C4400.cpp  
// compile with: /clr /W4  
// C4401 expected  
using namespace System;  
#pragma warning (disable : 4101)  
int main() {  
   const String^ str;   // C4400  
   volatile String^ str2;   // C4400  
}  
```