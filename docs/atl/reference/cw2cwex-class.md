---
title: "CW2CWEX Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CW2CWEX"
  - "ATL::CW2CWEX"
  - "ATL.CW2CWEX"
  - "ATL.CW2CWEX<t_nBufferLength>"
  - "ATL::CW2CWEX<t_nBufferLength>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CW2CWEX class"
ms.assetid: d654b22b-05a6-410f-a0ec-9a2cbbb4cca7
caps.latest.revision: 20
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
# CW2CWEX Class
This class is used by the string conversion macros `CW2CTEX` and `CT2CWEX`, and the typedef `CW2W`.  
  
> [!IMPORTANT]
>  This class and its members cannot be used in applications that execute in the Windows Runtime.  
  
## Syntax  
  
```
template<int t_nBufferLength = 128>  class CW2CWEX
```  
  
#### Parameters  
 `t_nBufferLength`  
 The size of the buffer used in the translation process. The default length is 128 bytes.  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CW2CWEX::CW2CWEX](#cw2cwex__cw2cwex)|The constructor.|  
|[CW2CWEX::~CW2CWEX](#cw2cwex___dtorcw2cwex)|The destructor.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[CW2CWEX::operator LPCWSTR](#cw2cwex__operator_lpcwstr)|Conversion operator.|  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CW2CWEX::m_psz](#cw2cwex__m_psz)|The data member that stores the source string.|  
  
## Remarks  
 Unless extra functionality is required, use `CW2CTEX`, `CT2CWEX`, or `CW2W` in your code.  
  
 This class is safe to use in loops and won't overflow the stack. By default, the ATL conversion classes and macros use the current thread's ANSI code page for the conversion.  
  
 The following macros are based on this class:  
  
- `CW2CTEX`  
  
- `CT2CWEX`  
  
 The following typedef is based on this class:  
  
- `CW2W`  
  
 For a discussion of these text conversion macros, see [ATL and MFC String Conversion Macros](http://msdn.microsoft.com/library/8f53659e-0464-4424-97db-6b8453c49863).  
  
## Example  
 See [ATL and MFC String Conversion Macros](http://msdn.microsoft.com/library/8f53659e-0464-4424-97db-6b8453c49863) for an example of using these string conversion macros.  
  
## Requirements  
 **Header:** atlconv.h  
  
##  <a name="cw2cwex__cw2cwex"></a>  CW2CWEX::CW2CWEX  
 The constructor.  
  
```
CW2CWEX(LPCWSTR psz,  UINT nCodePage) throw(...);

    CW2CWEX(LPCWSTR psz) throw(...);
```  
  
### Parameters  
 `psz`  
 The text string to be converted.  
  
 `nCodePage`  
 The code page. Not used in this class.  
  
### Remarks  
 Allocates the buffer used in the translation process.  
  
##  <a name="cw2cwex___dtorcw2cwex"></a>  CW2CWEX::~CW2CWEX  
 The destructor.  
  
```
~CW2CWEX() throw();
```  
  
### Remarks  
 Frees the allocated buffer.  
  
##  <a name="cw2cwex__m_psz"></a>  CW2CWEX::m_psz  
 The data member that stores the source string.  
  
```
LPCWSTR m_psz;
```  
  
##  <a name="cw2cwex__operator_lpcwstr"></a>  CW2CWEX::operator LPCWSTR  
 Conversion operator.  
  
```operator LPCWSTR() const throw();
```  
  
### Return Value  
 Returns the text string as type **LPCWSTR.**  
  
## See Also  
 [CA2AEX Class](../../atl/reference/ca2aex-class.md)   
 [CA2CAEX Class](../../atl/reference/ca2caex-class.md)   
 [CA2WEX Class](../../atl/reference/ca2wex-class.md)   
 [CW2AEX Class](../../atl/reference/cw2aex-class.md)   
 [CW2WEX Class](../../atl/reference/cw2wex-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)
