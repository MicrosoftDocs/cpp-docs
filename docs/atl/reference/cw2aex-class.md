---
title: "CW2AEX Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL::CW2AEX<t_nBufferLength>"
  - "CW2AEX"
  - "ATL.CW2AEX<t_nBufferLength>"
  - "ATL::CW2AEX"
  - "ATL.CW2AEX"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CW2AEX class"
ms.assetid: 44dc2cf5-dd30-440b-a9b9-b21b43f49843
caps.latest.revision: 21
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
# CW2AEX Class
This class is used by the string conversion macros `CT2AEX`, `CW2TEX`, `CW2CTEX`, and `CT2CAEX`, and the typedef **CW2A**.  
  
> [!IMPORTANT]
>  This class and its members cannot be used in applications that execute in the Windows Runtime.  
  
## Syntax  
  
```
template<int t_nBufferLength = 128>  class CW2AEX
```  
  
#### Parameters  
 `t_nBufferLength`  
 The size of the buffer used in the translation process. The default length is 128 bytes.  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CW2AEX::CW2AEX](#cw2aex__cw2aex)|The constructor.|  
|[CW2AEX::~CW2AEX](#cw2aex___dtorcw2aex)|The destructor.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[CW2AEX::operator LPSTR](#cw2aex__operator_lpstr)|Conversion operator.|  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CW2AEX::m_psz](#cw2aex__m_psz)|The data member that stores the source string.|  
|[CW2AEX::m_szBuffer](#cw2aex__m_szbuffer)|The static buffer, used to store the converted string.|  
  
## Remarks  
 Unless extra functionality is required, use `CT2AEX`, `CW2TEX`, `CW2CTEX`, `CT2CAEX`, or **CW2A** in your code.  
  
 This class contains a fixed-size static buffer which is used to store the result of the conversion. If the result is too large to fit into the static buffer, the class allocates memory using `malloc`, freeing the memory when the object goes out of scope. This ensures that, unlike text conversion macros available in previous versions of ATL, this class is safe to use in loops and that it won't overflow the stack.  
  
 If the class tries to allocate memory on the heap and fails, it will call `AtlThrow` with an argument of **E_OUTOFMEMORY**.  
  
 By default, the ATL conversion classes and macros use the current thread's ANSI code page for the conversion. If you want to override that behavior for a specific conversion, specify the code page as the second parameter to the constructor for the class.  
  
 The following macros are based on this class:  
  
- `CT2AEX`  
  
- `CW2TEX`  
  
- `CW2CTEX`  
  
- `CT2CAEX`  
  
 The following typedef is based on this class:  
  
- **CW2A**  
  
 For a discussion of these text conversion macros, see [ATL and MFC String Conversion Macros](http://msdn.microsoft.com/library/8f53659e-0464-4424-97db-6b8453c49863).  
  
## Example  
 See [ATL and MFC String Conversion Macros](http://msdn.microsoft.com/library/8f53659e-0464-4424-97db-6b8453c49863) for an example of using these string conversion macros.  
  
## Requirements  
 **Header:** atlconv.h  
  
##  <a name="cw2aex__cw2aex"></a>  CW2AEX::CW2AEX  
 The constructor.  
  
```
CW2AEX(LPCWSTR psz,  UINT nCodePage) throw(...);

    CW2AEX(LPCWSTR psz) throw(...);
```  
  
### Parameters  
 `psz`  
 The text string to be converted.  
  
 `nCodePage`  
 The code page used to perform the conversion. See the code page parameter discussion for the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] function [MultiByteToWideChar](http://msdn.microsoft.com/library/windows/desktop/dd319072) for more details.  
  
### Remarks  
 Allocates the buffer used in the translation process.  
  
##  <a name="cw2aex___dtorcw2aex"></a>  CW2AEX::~CW2AEX  
 The destructor.  
  
```
~CW2AEX() throw();
```  
  
### Remarks  
 Frees the allocated buffer.  
  
##  <a name="cw2aex__m_psz"></a>  CW2AEX::m_psz  
 The data member that stores the source string.  
  
```
LPSTR m_psz;
```  
  
##  <a name="cw2aex__m_szbuffer"></a>  CW2AEX::m_szBuffer  
 The static buffer, used to store the converted string.  
  
```
char m_szBuffer[ t_nBufferLength
 ];
```  
  
##  <a name="cw2aex__operator_lpstr"></a>  CW2AEX::operator LPSTR  
 Conversion operator.  
  
```operator LPSTR() const throw();
```  
  
### Return Value  
 Returns the text string as type **LPSTR.**  
  
## See Also  
 [CA2AEX Class](../../atl/reference/ca2aex-class.md)   
 [CA2CAEX Class](../../atl/reference/ca2caex-class.md)   
 [CA2WEX Class](../../atl/reference/ca2wex-class.md)   
 [CW2CWEX Class](../../atl/reference/cw2cwex-class.md)   
 [CW2WEX Class](../../atl/reference/cw2wex-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)
