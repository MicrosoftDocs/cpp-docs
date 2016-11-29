---
title: "Implementation of a Custom String Manager (Advanced Method) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IAtlStringMgr class, using"
ms.assetid: 64ab7da9-47c1-4c4a-9cd7-4cc37e7f3f57
caps.latest.revision: 10
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
# Implementation of a Custom String Manager (Advanced Method)
In specialized situations, you might want to implement a custom string manager that does more than just change which heap is used to allocate memory. In this situation, you must manually implement the [IAtlStringMgr](../atl-mfc-shared/reference/iatlstringmgr-class.md) interface as your custom string manager.  
  
 In order to do this, it is important to first understand how [CStringT](../atl-mfc-shared/reference/cstringt-class.md) uses that interface to manage its string data. Every instance of `CStringT` has a pointer to a [CStringData](../atl-mfc-shared/reference/cstringdata-class.md) structure. This variable-length structure contains important information about the string (such as length), as well as the actual character data for the string. Every custom string manager is responsible for allocating and freeing these structures at the request of `CStringT`.  
  
 The `CStringData` structure comprises four fields:  
  
-   [pStringMgr](../atl-mfc-shared/reference/cstringdata-class.md#cstringdata__pstringmgr) This field points to the `IAtlStringMgr` interface used to manage this string data. When `CStringT` needs to reallocate or free the string buffer it calls the Reallocate or Free methods of this interface, passing the `CStringData` structure as a parameter. When allocating a `CStringData` structure in your string manager, you must set this field to point to your custom string manager.  
  
-   [nDataLength](../atl-mfc-shared/reference/cstringdata-class.md#cstringdata__ndatalength) This field contains the current logical length of the string stored in the buffer excluding the terminating null. `CStringT` updates this field when the length of the string changes. When allocating a `CStringData` structure, your string manager must set this field to zero. When reallocating a `CStringData` structure, your custom string manager must leave this field unchanged.  
  
-   [nAllocLength](../atl-mfc-shared/reference/cstringdata-class.md#cstringdata__nalloclength) This field contains the maximum number of characters (excluding the terminating null) that can be stored in this string buffer without reallocating it. Whenever `CStringT` needs to increase the logical length of the string, it first checks this field to make sure there is enough space in the buffer. If the check fails, `CStringT` calls into your custom string manager to reallocate the buffer. When allocating or reallocating a `CStringData` structure, you must set this field to at least the number of characters requested in the **nChars** parameter to [IAtlStringMgr::Allocate](../atl-mfc-shared/reference/iatlstringmgr-class.md#iatlstringmgr__allocate) or [IAtlStringMgr::Reallocate](../atl-mfc-shared/reference/iatlstringmgr-class.md#iatlstringmgr__reallocate). If there is more space in the buffer than requested, you can set this value to reflect the actual amount of space available. This allows `CStringT` to grow the string to fill the entire allocated space before it has to call back into the string manager to reallocate the buffer.  
  
-   [nRefs](../atl-mfc-shared/reference/cstringdata-class.md#cstringdata__nrefs) This field contains the current reference count of the string buffer. If the value is one, then a single instance of `CStringT` is using the buffer. In addition, the instance is allowed to both read and modify the contents of the buffer. If the value is greater than one, multiple instances of `CStringT` can use the buffer. Because the character buffer is shared, `CStringT` instances can only read the contents of the buffer. To modify the contents, `CStringT` first makes a copy of the buffer. If the value is negative, only one instance of `CStringT` is using the buffer. In this case, the buffer is considered locked. When a `CStringT` instance is using a locked buffer no other instances of `CStringT` may share the buffer. Instead, these instances create a copy of the buffer before manipulating the contents. In addition, the `CStringT` instance using the locked buffer does not attempt to share the buffer of any other `CStringT` instance assigned to it. In this case, the `CStringT` instance copies the other string into the locked buffer.  
  
     When allocating a `CStringData` structure, you must set this field to reflect the type of sharing that is allowed for the buffer. For most implementations, set this value to one. This allows the usual copy-on-write sharing behavior. However, if your string manager does not support sharing the string buffer, set this field to a locked state. This forces `CStringT` to only use this buffer for the instance of `CStringT` that allocated it.  
  
## See Also  
 [Memory Management with CStringT](../atl-mfc-shared/memory-management-with-cstringt.md)

