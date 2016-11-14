---
title: "_bstr_t::operator ! | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "_bstr_t::operator!"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "! operator"
  - "operator!, bstr"
  - "operator !, bstr"
ms.assetid: 6e60b5a5-2d28-4eec-9e12-790da8f1fdd4
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
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
# _bstr_t::operator !
**Microsoft Specific**  
  
 Checks if the encapsulated `BSTR` is a **NULL** string.  
  
## Syntax  
  
```  
  
bool operator!( ) const throw( );  
  
```  
  
## Return Value  
 It returns **true** if yes, **false** if not.  
  
 **END Microsoft Specific**  
  
## See Also  
 [_bstr_t Class](../cpp/bstr-t-class.md)