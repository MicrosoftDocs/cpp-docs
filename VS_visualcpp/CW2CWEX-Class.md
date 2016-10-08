---
title: "CW2CWEX Class"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: reference
ms.assetid: d654b22b-05a6-410f-a0ec-9a2cbbb4cca7
caps.latest.revision: 14
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# CW2CWEX Class
This class is used by the string conversion macros `CW2CTEX` and `CT2CWEX`, and the typedef `CW2W`.  
  
> [!IMPORTANT]
>  This class and its members cannot be used in applications that execute in the Windows Runtime.  
  
## Syntax  
  
```  
template<  
    int t_nBufferLength = 128>  
    class CW2CWEX  
```  
  
#### Parameters  
 `t_nBufferLength`  
 The size of the buffer used in the translation process. The default length is 128 bytes.  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CW2CWEX::CW2CWEX](../Topic/CW2CWEX::CW2CWEX.md)|The constructor.|  
|[CW2CWEX::~CW2CWEX](../Topic/CW2CWEX::~CW2CWEX.md)|The destructor.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[CW2CWEX::operator LPCWSTR](../Topic/CW2CWEX::operator%20LPCWSTR.md)|Conversion operator.|  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CW2CWEX::m_psz](../Topic/CW2CWEX::m_psz.md)|The data member that stores the source string.|  
  
## Remarks  
 Unless extra functionality is required, use `CW2CTEX`, `CT2CWEX`, or `CW2W` in your code.  
  
 This class is safe to use in loops and won't overflow the stack. By default, the ATL conversion classes and macros use the current thread's ANSI code page for the conversion.  
  
 The following macros are based on this class:  
  
-   `CW2CTEX`  
  
-   `CT2CWEX`  
  
 The following typedef is based on this class:  
  
-   `CW2W`  
  
 For a discussion of these text conversion macros, see [ATL and MFC String Conversion Macros](../Topic/ATL%20and%20MFC%20String%20Conversion%20Macros.md).  
  
## Example  
 See [ATL and MFC String Conversion Macros](../Topic/ATL%20and%20MFC%20String%20Conversion%20Macros.md) for an example of using these string conversion macros.  
  
## Requirements  
 **Header:** atlconv.h  
  
##  <a name="cw2cwex__cw2cwex"></a>  CW2CWEX::CW2CWEX  
 The constructor.  
  
```  
CW2CWEX(  
    LPCWSTR psz,  
    UINT nCodePage ) throw(...);  
  
    CW2CWEX(  
    LPCWSTR psz ) throw(...);  
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
  
```  
operator LPCWSTR() const throw();  
```  
  
### Return Value  
 Returns the text string as type **LPCWSTR.**  
  
## See Also  
 [CA2AEX Class](../VS_visualcpp/CA2AEX-Class.md)   
 [CA2CAEX Class](../VS_visualcpp/CA2CAEX-Class.md)   
 [CA2WEX Class](../VS_visualcpp/CA2WEX-Class.md)   
 [CW2AEX Class](../VS_visualcpp/CW2AEX-Class.md)   
 [CW2WEX Class](../VS_visualcpp/CW2WEX-Class.md)   
 [Class Overview](../VS_visualcpp/ATL-Class-Overview.md)