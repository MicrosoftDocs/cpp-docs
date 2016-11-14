---
title: "_bstr_t::copy | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "_bstr_t::copy"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Copy method"
  - "BSTR object, copy"
ms.assetid: 00ba7311-e82e-4a79-8106-5329fa2f869a
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
# _bstr_t::copy
**Microsoft Specific**  
  
 Constructs a copy of the encapsulated `BSTR`.  
  
## Syntax  
  
```  
  
      BSTR copy(  
  bool fCopy = true  
) const;  
```  
  
#### Parameters  
 `fCopy`  
 If **true**, **copy** returns a copy of the contained `BSTR`, otherwise **copy** returns the actual BSTR.  
  
## Remarks  
 Returns a newly allocated copy of the encapsulated `BSTR` object.  
  
## Example  
  
```  
STDMETHODIMP CAlertMsg::get_ConnectionStr(BSTR *pVal){ //  m_bsConStr is _bstr_t  
   *pVal = m_bsConStr.copy();  
}  
```  
  
 **END Microsoft Specific**  
  
## See Also  
 [_bstr_t Class](../cpp/bstr-t-class.md)