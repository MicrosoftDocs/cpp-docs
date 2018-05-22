---
title: "_bstr_t::copy | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
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
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# _bstr_t::copy
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [_bstr_t::copy](https://docs.microsoft.com/cpp/cpp/bstr-t-copy).  
  
Microsoft Specific**  
  
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





