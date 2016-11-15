---
title: "_com_ptr_t::GetActiveObject | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "_com_ptr_t.GetActiveObject"
  - "_com_ptr_t::GetActiveObject"
  - "GetActiveObject"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetActiveObject method"
ms.assetid: 2fa94853-0410-4620-91f2-136dae923f9f
caps.latest.revision: 9
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
# _com_ptr_t::GetActiveObject
**Microsoft Specific**  
  
 Attaches to an existing instance of an object given a **CLSID** or **ProgID**.  
  
## Syntax  
  
```  
  
      HRESULT GetActiveObject(  
   const CLSID& rclsid   
) throw( );  
HRESULT GetActiveObject(  
   LPCWSTR clsidString   
) throw( );  
HRESULT GetActiveObject(  
   LPCSTR clsidStringA   
) throw( );  
```  
  
#### Parameters  
 `rclsid`  
 The **CLSID** of an object.  
  
 `clsidString`  
 A Unicode string that holds either a **CLSID** (starting with "**{**") or a **ProgID**.  
  
 `clsidStringA`  
 A multibyte string, using the ANSI code page, that holds either a **CLSID** (starting with "**{**") or a **ProgID**.  
  
## Remarks  
 These member functions call `GetActiveObject` to retrieve a pointer to a running object that has been registered with OLE and then queries for this smart pointer's interface type. The resulting pointer is then encapsulated within this `_com_ptr_t` object. **Release** is called to decrement the reference count for the previously encapsulated pointer. This routine returns the `HRESULT` to indicate success or failure.  
  
-   **GetActiveObject(**  `rclsid`  **)** Attaches to an existing instance of an object given a **CLSID**.  
  
-   **GetActiveObject(**  `clsidString`  **)** Attaches to an existing instance of an object given a Unicode string that holds either a **CLSID** (starting with "**{**") or a **ProgID**.  
  
-   **GetActiveObject(**  `clsidStringA`  **)** Attaches to an existing instance of an object given a multibyte character string that holds either a **CLSID** (starting with "**{**") or a **ProgID**. Calls [MultiByteToWideChar](http://msdn.microsoft.com/library/windows/desktop/dd319072), which assumes that the string is in the ANSI code page rather than an OEM code page.  
  
 **END Microsoft Specific**  
  
## See Also  
 [_com_ptr_t Class](../cpp/com-ptr-t-class.md)