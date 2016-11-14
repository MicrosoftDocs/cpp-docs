---
title: "_variant_t::operator = | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "_variant_t.operator="
  - "_variant_t::operator="
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "operator=, variant"
  - "operator =, variant"
  - "= operator, with specific Visual C++ objects"
ms.assetid: 77622723-6e49-4dec-9e0f-fa74028f1a3c
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
# _variant_t::operator =
**Microsoft Specific**  
  
## Syntax  
  
```  
  
      _variant_t& operator=(  
   const VARIANT& varSrc   
);  
  
_variant_t& operator=(  
   const VARIANT* pVarSrc   
);  
  
_variant_t& operator=(  
   const _variant_t& var_t_Src   
);  
  
_variant_t& operator=(  
   short sSrc   
);  
  
_variant_t& operator=(  
   long lSrc   
);  
  
_variant_t& operator=(  
   float fltSrc   
);  
  
_variant_t& operator=(  
   double dblSrc   
);  
  
_variant_t& operator=(  
   const CY& cySrc   
);  
  
_variant_t& operator=(  
   const _bstr_t& bstrSrc   
);  
  
_variant_t& operator=(  
   const wchar_t* wstrSrc   
);  
  
_variant_t& operator=(  
   const char* strSrc   
);  
  
_variant_t& operator=(  
   IDispatch* pDispSrc   
);  
  
_variant_t& operator=(  
   bool bSrc   
);  
  
_variant_t& operator=(  
   IUnknown* pSrc   
);  
  
_variant_t& operator=(  
   const DECIMAL& decSrc   
);  
  
_variant_t& operator=(  
   BYTE bSrc   
);  
  
_variant_t& operator=(  
   char cSrc  
);  
  
_variant_t& operator=(  
   unsigned short usSrc  
);  
  
_variant_t& operator=(  
   unsigned long ulSrc  
);  
  
_variant_t& operator=(  
   int iSrc  
);  
  
_variant_t& operator=(  
   unsigned int uiSrc  
);  
  
_variant_t& operator=(  
   __int64 i8Src  
);  
  
_variant_t& operator=(  
   unsigned __int64 ui8Src  
);  
```  
  
## Remarks  
 The operator assigns a new value to the `_variant_t` object:  
  
-   **operator=(**  *varSrc*  **)** Assigns an existing **VARIANT** to a `_variant_t` object.  
  
-   **operator=(**  *pVarSrc*  **)** Assigns an existing **VARIANT** to a `_variant_t` object.  
  
-   **operator=(**  *var_t_Src*  **)** Assigns an existing `_variant_t` object to a `_variant_t` object.  
  
-   **operator=(**  *sSrc*  **)** Assigns a **short** integer value to a `_variant_t` object.  
  
-   **operator=(**  `lSrc`  **)** Assigns a **long** integer value to a `_variant_t` object.  
  
-   **operator=(**  *fltSrc*  **)** Assigns a **float** numerical value to a `_variant_t` object.  
  
-   **operator=(**  *dblSrc*  **)** Assigns a **double** numerical value to a `_variant_t` object.  
  
-   **operator=(**  *cySrc*  **)** Assigns a **CY** object to a `_variant_t` object.  
  
-   **operator=(**  *bstrSrc*  **)** Assigns a `BSTR` object to a `_variant_t` object.  
  
-   **operator=(**  *wstrSrc*  **)** Assigns a Unicode string to a `_variant_t` object.  
  
-   **operator=(**  `strSrc`  **)** Assigns a multibyte string to a `_variant_t` object.  
  
-   **operator=(**  `bSrc` **)** Assigns a `bool` value to a `_variant_t` object.  
  
-   **operator=(**  *pDispSrc*  **)** Assigns a **VT_DISPATCH** object to a `_variant_t` object.  
  
-   **operator=(**  *pIUnknownSrc*  **)** Assigns a **VT_UNKNOWN** object to a `_variant_t` object.  
  
-   **operator=(**  *decSrc*  **)** Assigns a **DECIMAL** value to a `_variant_t` object.  
  
-   **operator=(**  `bSrc` **)** Assigns a **BYTE** value to a `_variant_t` object.  
  
 **END Microsoft Specific**  
  
## See Also  
 [_variant_t Class](../cpp/variant-t-class.md)