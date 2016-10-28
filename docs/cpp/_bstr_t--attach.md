---
title: "_bstr_t::Attach"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "language-reference"
f1_keywords: 
  - "_bstr_t::Attach"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Attach method"
ms.assetid: 8cad867e-40fc-435b-841f-0d412c2f58d3
caps.latest.revision: 6
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
# _bstr_t::Attach
**Microsoft Specific**  
  
 Links a `_bstr_t` wrapper to a `BSTR`.  
  
## Syntax  
  
```  
  
      void Attach(  
   BSTR s  
);  
```  
  
#### Parameters  
 *s*  
 A `BSTR` to be associated with, or assigned to, the `_bstr_t` variable.  
  
## Remarks  
 If the `_bstr_t` was previously attached to another `BSTR`, the `_bstr_t` will clean up the `BSTR` resource, if no other `_bstr_t` variables are using the `BSTR`.  
  
## Example  
 See [_bstr_t::Assign](../cpp/_bstr_t--assign.md) for an example using **Attach**.  
  
 **END Microsoft Specific**  
  
## See Also  
 [_bstr_t Class](../cpp/_bstr_t-class.md)