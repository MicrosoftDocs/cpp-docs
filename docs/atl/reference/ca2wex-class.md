---
title: "CA2WEX Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-atl"]
ms.topic: "reference"
f1_keywords: ["CA2WEX", "ATLCONV/ATL::CA2WEX", "ATLCONV/ATL::CA2WEX::CA2WEX", "ATLCONV/ATL::CA2WEX::m_psz", "ATLCONV/ATL::CA2WEX::m_szBuffer"]
dev_langs: ["C++"]
helpviewer_keywords: ["CA2WEX class"]
ms.assetid: 317d9ffb-e84f-47e8-beda-57e28fb19124
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# CA2WEX Class
This class is used by the string conversion macros `CA2TEX`, `CA2CTEX`, `CT2WEX`, and `CT2CWEX`, and the typedef **CA2W**.  
  
> [!IMPORTANT]
>  This class and its members cannot be used in applications that execute in the Windows Runtime.  
  
## Syntax  
  
```
template <int t_nBufferLength = 128>
class CA2WEX
```  
  
#### Parameters  
 `t_nBufferLength`  
 The size of the buffer used in the translation process. The default length is 128 bytes.  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CA2WEX::CA2WEX](#ca2wex)|The constructor.|  
|[CA2WEX::~CA2WEX](#dtor)|The destructor.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[CA2WEX::operator LPWSTR](#operator_lpwstr)|Conversion operator.|  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CA2WEX::m_psz](#m_psz)|The data member that stores the source string.|  
|[CA2WEX::m_szBuffer](#m_szbuffer)|The static buffer, used to store the converted string.|  
  
## Remarks  
 Unless extra functionality is required, use `CA2TEX`, `CA2CTEX`, `CT2WEX`, `CT2CWEX`, or **CA2W** in your code.  
  
 This class contains a fixed-size static buffer which is used to store the result of the conversion. If the result is too large to fit into the static buffer, the class allocates memory using `malloc`, freeing the memory when the object goes out of scope. This ensures that, unlike text conversion macros available in previous versions of ATL, this class is safe to use in loops and that it won't overflow the stack.  
  
 If the class tries to allocate memory on the heap and fails, it will call `AtlThrow` with an argument of **E_OUTOFMEMORY**.  
  
 By default, the ATL conversion classes and macros use the current thread's ANSI code page for the conversion. If you want to override that behavior for a specific conversion, specify the code page as the second parameter to the constructor for the class.  
  
 The following macros are based on this class:  
  
- `CA2TEX`  
  
- `CA2CTEX`  
  
- `CT2WEX`  
  
- `CT2CWEX`  
  
 The following typedef is based on this class:  
  
- **CA2W**  
  
 For a discussion of these text conversion macros, see [ATL and MFC String Conversion Macros](string-conversion-macros.md).  
  
## Example  
 See [ATL and MFC String Conversion Macros](string-conversion-macros.md) for an example of using these string conversion macros.  
  
## Requirements  
 **Header:** atlconv.h  
  
##  <a name="ca2wex"></a>  CA2WEX::CA2WEX  
 The constructor.  
  
```
CA2WEX(LPCSTR psz, UINT nCodePage) throw(...);
CA2WEX(LPCSTR psz) throw(...);
```  
  
### Parameters  
 `psz`  
 The text string to be converted.  
  
 `nCodePage`  
 The code page used to perform the conversion. See the code page parameter discussion for the Windows SDK function [MultiByteToWideChar](http://msdn.microsoft.com/library/windows/desktop/dd319072) for more details.  
  
### Remarks  
 Allocates the buffer used in the translation process.  
  
##  <a name="dtor"></a>  CA2WEX::~CA2WEX  
 The destructor.  
  
```
~CA2WEX() throw();
```  
  
### Remarks  
 Frees the allocated buffer.  
  
##  <a name="m_psz"></a>  CA2WEX::m_psz  
 The data member that stores the source string.  
  
```
LPWSTR m_psz;
```  
  
##  <a name="m_szbuffer"></a>  CA2WEX::m_szBuffer  
 The static buffer, used to store the converted string.  
  
```
wchar_t m_szBuffer[t_nBufferLength];
```  
  
##  <a name="operator_lpwstr"></a>  CA2WEX::operator LPWSTR  
 Conversion operator.  
  
```  
operator LPWSTR() const throw();
```  
  
### Return Value  
 Returns the text string as type **LPWSTR.**  
  
## See Also  
 [CA2AEX Class](../../atl/reference/ca2aex-class.md)   
 [CA2CAEX Class](../../atl/reference/ca2caex-class.md)   
 [CW2AEX Class](../../atl/reference/cw2aex-class.md)   
 [CW2CWEX Class](../../atl/reference/cw2cwex-class.md)   
 [CW2WEX Class](../../atl/reference/cw2wex-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)
