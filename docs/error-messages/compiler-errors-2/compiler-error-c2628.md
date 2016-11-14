---
title: "Compiler Error C2628 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2628"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2628"
ms.assetid: 19a25e77-d5be-4107-88d5-0745b6281f98
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
# Compiler Error C2628
'type1' followed by 'type2' is illegal (did you forget a ';'?)  
  
 A semicolon may be missing.  
  
 The following sample generates C2628:  
  
```  
// C2628.cpp  
class CMyClass {}  
int main(){}   // C2628 error  
```  
  
 Possible resolution:  
  
```  
// C2628b.cpp  
class CMyClass {};  
int main(){}  
```