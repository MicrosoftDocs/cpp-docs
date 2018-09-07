---
title: "_com_ptr_t::GetActiveObject | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-language"]
ms.topic: "language-reference"
f1_keywords: ["_com_ptr_t::GetActiveObject"]
dev_langs: ["C++"]
helpviewer_keywords: ["GetActiveObject method [C++]"]
ms.assetid: 2fa94853-0410-4620-91f2-136dae923f9f
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# _com_ptr_t::GetActiveObject
**Microsoft Specific**  
  
 Attaches to an existing instance of an object given a `CLSID` or `ProgID`.  
  
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
 *rclsid*  
 The `CLSID` of an object.  
  
 *clsidString*  
 A Unicode string that holds either a `CLSID` (starting with "**{**") or a `ProgID`.  
  
 *clsidStringA*  
 A multibyte string, using the ANSI code page, that holds either a `CLSID` (starting with "**{**") or a `ProgID`.  
  
## Remarks  
 These member functions call **GetActiveObject** to retrieve a pointer to a running object that has been registered with OLE and then queries for this smart pointer's interface type. The resulting pointer is then encapsulated within this `_com_ptr_t` object. `Release` is called to decrement the reference count for the previously encapsulated pointer. This routine returns the HRESULT to indicate success or failure.  
  
-   **GetActiveObject(**  `rclsid`  **)** Attaches to an existing instance of an object given a `CLSID`.  
  
-   **GetActiveObject(**  `clsidString`  **)** Attaches to an existing instance of an object given a Unicode string that holds either a `CLSID` (starting with "**{**") or a `ProgID`.  
  
-   **GetActiveObject(**  `clsidStringA`  **)** Attaches to an existing instance of an object given a multibyte character string that holds either a `CLSID` (starting with "**{**") or a `ProgID`. Calls [MultiByteToWideChar](/windows/desktop/api/stringapiset/nf-stringapiset-multibytetowidechar), which assumes that the string is in the ANSI code page rather than an OEM code page.  
  
 **END Microsoft Specific**  
  
## See also  
 [_com_ptr_t Class](../cpp/com-ptr-t-class.md)