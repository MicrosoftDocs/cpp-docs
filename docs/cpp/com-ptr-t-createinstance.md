---
title: "_com_ptr_t::CreateInstance | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "_com_ptr_t::CreateInstance"
  - "_com_ptr_t.CreateInstance"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CreateInstance method"
ms.assetid: ab89b0e1-9da3-4784-a079-58b17340f111
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
# _com_ptr_t::CreateInstance
**Microsoft Specific**  
  
 Creates a new instance of an object given a **CLSID** or **ProgID**.  
  
## Syntax  
  
```  
  
      HRESULT CreateInstance(  
   const CLSID& rclsid,  
   IUnknown* pOuter=NULL,  
   DWORD dwClsContext = CLSCTX_ALL   
) throw( );  
HRESULT CreateInstance(  
   LPCWSTR clsidString,  
   IUnknown* pOuter=NULL,  
   DWORD dwClsContext = CLSCTX_ALL   
) throw( );  
HRESULT CreateInstance(  
   LPCSTR clsidStringA,  
   IUnknown* pOuter=NULL,  
   DWORD dwClsContext = CLSCTX_ALL   
) throw( );  
```  
  
#### Parameters  
 `rclsid`  
 The **CLSID** of an object.  
  
 `clsidString`  
 A Unicode string that holds either a **CLSID** (starting with "**{**") or a **ProgID**.  
  
 `clsidStringA`  
 A multibyte string, using the ANSI code page, that holds either a **CLSID** (starting with "**{**") or a **ProgID**.  
  
 `dwClsContext`  
 Context for running executable code.  
  
 `pOuter`  
 The outer unknown for [aggregation](../atl/aggregation.md).  
  
## Remarks  
 These member functions call `CoCreateInstance` to create a new COM object and then queries for this smart pointer's interface type. The resulting pointer is then encapsulated within this `_com_ptr_t` object. **Release** is called to decrement the reference count for the previously encapsulated pointer. This routine returns the `HRESULT` to indicate success or failure.  
  
-   **CreateInstance(**  `rclsid` **,**  `dwClsContext`  **)** Creates a new running instance of an object given a **CLSID**.  
  
-   **CreateInstance(**  `clsidString` **,**  `dwClsContext`  **)** Creates a new running instance of an object given a Unicode string that holds either a **CLSID** (starting with "**{**") or a **ProgID**.  
  
-   **CreateInstance(**  `clsidStringA` **,**  `dwClsContext`  **)** Creates a new running instance of an object given a multibyte character string that holds either a **CLSID** (starting with "**{**") or a **ProgID**. Calls [MultiByteToWideChar](http://msdn.microsoft.com/library/windows/desktop/dd319072), which assumes that the string is in the ANSI code page rather than an OEM code page.  
  
 **END Microsoft Specific**  
  
## See Also  
 [_com_ptr_t Class](../cpp/com-ptr-t-class.md)