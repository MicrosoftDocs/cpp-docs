---
title: "CSimpleStringT Class"
ms.custom: ""
ms.date: "10/28/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL.CSimpleStringT"
  - "ATL::CSimpleStringT"
  - "ATL::CSimpleStringT<BaseType>"
  - "ATL.CSimpleStringT<BaseType>"
  - "CSimpleStringT"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "shared classes, CSimpleStringT"
  - "strings [C++], ATL class"
  - "CSimpleStringT class"
ms.assetid: 15814fcb-5b8f-4425-a97e-3b61fc9b48d8
caps.latest.revision: 17
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
# CSimpleStringT Class
This class represents a `CSimpleStringT` object.  
  
## Syntax  
  
```
    template <typename   BaseType>
class CSimpleStringT```  
  
#### Parameters  
 `BaseType`  
 The character type of the string class. Can be one of the following:  
  
- `char` (for ANSI character strings).  
  
- `wchar_t` (for Unicode character strings).  
  
- **TCHAR** (for both ANSI and Unicode character strings).  
  
## Members  
  
### Public Typedefs  
  
|Name|Description|  
|----------|-----------------|  
|[CSimpleStringT::PCXSTR](../Topic/CSimpleStringT::PCXSTR.md)|A pointer to a constant string.|  
|[CSimpleStringT::PXSTR](../Topic/CSimpleStringT::PXSTR.md)|A pointer to a string.|  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CSimpleStringT::CSimpleStringT](../Topic/CSimpleStringT::CSimpleStringT.md)|Constructs `CSimpleStringT` objects in various ways.|  
|[CSimpleStringT::~CSimpleStringT](../Topic/CSimpleStringT::~CSimpleStringT.md)|Destructor.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CSimpleStringT::Append](../Topic/CSimpleStringT::Append.md)|Appends a `CSimpleStringT` object to an existing `CSimpleStringT` object.|  
|[CSimpleStringT::AppendChar](../Topic/CSimpleStringT::AppendChar.md)|Appends a character to an existing `CSimpleStringT` object.|  
|[CSimpleStringT::CopyChars](../Topic/CSimpleStringT::CopyChars.md)|Copies a character or characters to another string.|  
|[CSimpleStringT::CopyCharsOverlapped](../Topic/CSimpleStringT::CopyCharsOverlapped.md)|Copies a character or characters to another string in which the buffers overlap.|  
|[CSimpleStringT::Empty](../Topic/CSimpleStringT::Empty.md)|Forces a string to have a length of zero.|  
|[CSimpleStringT::FreeExtra](../Topic/CSimpleStringT::FreeExtra.md)|Frees any extra memory previously allocated by the string object.|  
|[CSimpleStringT::GetAllocLength](../Topic/CSimpleStringT::GetAllocLength.md)|Retrieves the allocated length of a `CSimpleStringT` object.|  
|[CSimpleStringT::GetAt](../Topic/CSimpleStringT::GetAt.md)|Returns the character at a given position.|  
|[CSimpleStringT::GetBuffer](../Topic/CSimpleStringT::GetBuffer.md)|Returns a pointer to the characters in a `CSimpleStringT`.|  
|[CSimpleStringT::GetBufferSetLength](../Topic/CSimpleStringT::GetBufferSetLength.md)|Returns a pointer to the characters in a `CSimpleStringT`, truncating to the specified length.|  
|[CSimpleStringT::GetLength](../Topic/CSimpleStringT::GetLength.md)|Returns the number of characters in a `CSimpleStringT` object.|  
|[CSimpleStringT::GetManager](../Topic/CSimpleStringT::GetManager.md)|Retrieves the memory manager of the `CSimpleStringT` object.|  
|[CSimpleStringT::GetString](../Topic/CSimpleStringT::GetString.md)|Retrieves the character string|  
|[CSimpleStringT::IsEmpty](../Topic/CSimpleStringT::IsEmpty.md)|Tests whether a `CSimpleStringT` object contains no characters.|  
|[CSimpleStringT::LockBuffer](../Topic/CSimpleStringT::LockBuffer.md)|Disables reference counting and protects the string in the buffer.|  
|[CSimpleStringT::Preallocate](../Topic/CSimpleStringT::Preallocate.md)|Allocates a specific amount of memory for the character buffer.|  
|[CSimpleStringT::ReleaseBuffer](../Topic/CSimpleStringT::ReleaseBuffer.md)|Releases control of the buffer returned by `GetBuffer`.|  
|[CSimpleStringT::ReleaseBufferSetLength](../Topic/CSimpleStringT::ReleaseBufferSetLength.md)|Releases control of the buffer returned by `GetBuffer`.|  
|[CSimpleStringT::SetAt](../Topic/CSimpleStringT::SetAt.md)|Sets a character at a given position.|  
|[CSimpleStringT::SetManager](../Topic/CSimpleStringT::SetManager.md)|Sets the memory manager of a `CSimpleStringT` object.|  
|[CSimpleStringT::SetString](../Topic/CSimpleStringT::SetString.md)|Sets the string of a `CSimpleStringT` object.|  
|[CSimpleStringT::StringLength](../Topic/CSimpleStringT::StringLength.md)|Returns the number of characters in the specified string.|  
|[CSimpleStringT::Truncate](../Topic/CSimpleStringT::Truncate.md)|Truncates the string to a specified length.|  
|[CSimpleStringT::UnlockBuffer](../Topic/CSimpleStringT::UnlockBuffer.md)|Enables reference counting and releases the string in the buffer.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[CSimpleStringT::operator PCXSTR](../Topic/CSimpleStringT::operator%20PCXSTR.md)|Directly accesses characters stored in a `CSimpleStringT` object as a C-style string.|  
|[CSimpleStringT::operator](../Topic/CSimpleStringT::operator.md)|Returns the character at a given position — operator substitution for `GetAt`.|  
|[CSimpleStringT::operator +=](../Topic/CSimpleStringT::operator%20+=.md)|Concatenates a new string to the end of an existing string.|  
|[CSimpleStringT::operator =](../Topic/CSimpleStringT::operator%20=.md)|Assigns a new value to a `CSimpleStringT` object.|  
  
## Remarks  
 `CSimpleStringT` is the base class for the various string classes supported by Visual C++. It provides minimal support for memory management of the string object and basic buffer manipulation. For more advanced string objects, see [CStringT Class](../../atl-mfc-shared/reference/cstringt-class.md).  
  
## Requirements  
 **Header:** atlsimpstr.h  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [ATL/MFC Shared Classes](../../atl-mfc-shared/atl-mfc-shared-classes.md)


