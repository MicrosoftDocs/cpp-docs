---
title: "CA2CAEX Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL.CA2CAEX"
  - "ATL.CA2CAEX<t_nBufferLength>"
  - "ATLCONV/CA2CAEX"
  - "ATL::CA2CAEX<t_nBufferLength>"
  - "ATL::CA2CAEX"
  - "CA2CAEX"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CA2CAEX class"
ms.assetid: 388e7c1d-a144-474c-a182-b15f69a74bd8
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
# CA2CAEX Class
This class is used by string conversion macros `CA2CTEX` and `CT2CAEX`, and the typedef **CA2CA**.  
  
> [!IMPORTANT]
>  This class and its members cannot be used in applications that execute in the Windows Runtime.  
  
## Syntax  
  
```
template<int t_nBufferLength = 128>  class CA2CAEX
```  
  
#### Parameters  
 `t_nBufferLength`  
 The size of the buffer used in the translation process. The default length is 128 bytes.  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CA2CAEX::CA2CAEX](#ca2caex__ca2caex)|The constructor.|  
|[CA2CAEX::~CA2CAEX](#ca2caex___dtorca2caex)|The destructor.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[CA2CAEX::operator LPCSTR](#ca2caex__operator_lpcstr)|Conversion operator.|  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CA2CAEX::m_psz](#ca2caex__m_psz)|The data member that stores the source string.|  
  
## Remarks  
 Unless extra functionality is required, use `CA2CTEX`, `CT2CAEX`, or **CA2CA** in your own code.  
  
 This class is safe to use in loops and won't overflow the stack. By default, the ATL conversion classes and macros will use the current thread's ANSI code page for the conversion.  
  
 The following macros are based on this class:  
  
- `CA2CTEX`  
  
- `CT2CAEX`  
  
 The following typedef is based on this class:  
  
- **CA2CA**  
  
 For a discussion of these text conversion macros, see [ATL and MFC String Conversion Macros](http://msdn.microsoft.com/library/8f53659e-0464-4424-97db-6b8453c49863).  
  
## Example  
 See [ATL and MFC String Conversion Macros](http://msdn.microsoft.com/library/8f53659e-0464-4424-97db-6b8453c49863) for an example of using these string conversion macros.  
  
## Requirements  
 **Header:** atlconv.h  
  
##  <a name="ca2caex__ca2caex"></a>  CA2CAEX::CA2CAEX  
 The constructor.  
  
```
CA2CAEX(LPCSTR psz,  UINT nCodePage) throw(...);

    CA2CAEX(LPCSTR psz) throw(...);
```  
  
### Parameters  
 `psz`  
 The text string to be converted.  
  
 `nCodePage`  
 Unused in this class.  
  
### Remarks  
 Creates the buffer required for the translation.  
  
##  <a name="ca2caex___dtorca2caex"></a>  CA2CAEX::~CA2CAEX  
 The destructor.  
  
```
~CA2CAEX() throw();
```  
  
### Remarks  
 Frees the allocated buffer.  
  
##  <a name="ca2caex__m_psz"></a>  CA2CAEX::m_psz  
 The data member that stores the source string.  
  
```
LPCSTR m_psz;
```  
  
##  <a name="ca2caex__operator_lpcstr"></a>  CA2CAEX::operator LPCSTR  
 Conversion operator.  
  
```operator LPCSTR() const throw();
```  
  
### Return Value  
 Returns the text string as type `LPCSTR`.  
  
## See Also  
 [CA2AEX Class](../../atl/reference/ca2aex-class.md)   
 [CA2WEX Class](../../atl/reference/ca2wex-class.md)   
 [CW2AEX Class](../../atl/reference/cw2aex-class.md)   
 [CW2CWEX Class](../../atl/reference/cw2cwex-class.md)   
 [CW2WEX Class](../../atl/reference/cw2wex-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)
