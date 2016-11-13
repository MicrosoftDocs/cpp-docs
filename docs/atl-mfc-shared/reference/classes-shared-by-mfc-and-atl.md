---
title: "Classes Shared by MFC and ATL | Microsoft Docs"
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
  - "shared classes, classes"
ms.assetid: ca8b4b6b-744d-430b-b31f-d5b2f17bf210
caps.latest.revision: 12
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
# Classes Shared by MFC and ATL
The following table lists the classes shared between MFC and ATL.  
  
|Class|Description|Header file|  
|-----------|-----------------|-----------------|  
|[CFileTime](../../atl-mfc-shared/reference/cfiletime-class.md)|Provides methods for managing the date and time values associated with a file.|atltime.h|  
|[CFileTimeSpan](../../atl-mfc-shared/reference/cfiletimespan-class.md)|Provides methods for managing relative date and time values associated with a file.|atltime.h|  
|[CFixedStringT](../../atl-mfc-shared/reference/cfixedstringt-class.md)|Represents a string object with a fixed character buffer.|cstringt.h|  
|[CImage](../../atl-mfc-shared/reference/cimage-class.md)|Provides enhanced bitmap support, including the ability to load and save images in JPEG, GIF, BMP, and Portable Network Graphics (PNG) formats.|atlimage.h|  
|[COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md)|Encapsulates the **DATE** data type used in OLE automation.|atlcomtime.h|  
|[COleDateTimeSpan](../../atl-mfc-shared/reference/coledatetimespan-class.md)|Represents a relative time, a time span.|atlcomtime.h|  
|[CPoint](../../atl-mfc-shared/reference/cpoint-class.md)|A class similar to the Windows [POINT](../../mfc/reference/point-structure1.md) structure that also includes member functions to manipulate `CPoint` and **POINT** structures.|atltypes.h|  
|[CRect](../../atl-mfc-shared/reference/crect-class.md)|A class similar to a Windows [RECT](../../mfc/reference/rect-structure1.md) structure that also includes member functions to manipulate `CRect` objects and Windows `RECT` structures.|atltypes.h|  
|[CSimpleStringT](../../atl-mfc-shared/reference/csimplestringt-class.md)|Represents a `CSimpleStringT` object.|atlsimpstr.h|  
|[CSize](../../atl-mfc-shared/reference/csize-class.md)|A class similar to the Windows SIZE structure, which implements a relative coordinate or position.|atltypes.h|  
|[CStrBufT](../../atl-mfc-shared/reference/cstrbuft-class.md)|Provides automatic resource cleanup for `GetBuffer` and `ReleaseBuffer` calls on a existing `CStringT` object.|atlsimpstr.h|  
|[CStringData](../../atl-mfc-shared/reference/cstringdata-class.md)|Represents the data of a string object.|atlsimpstr.h|  
|[CStringT](../../atl-mfc-shared/reference/cstringt-class.md)|Represents a `CStringT` object.|cstringt.h (MFC dependent) atlstr.h (MFC independent)|  
|[CTime](../../atl-mfc-shared/reference/ctime-class.md)|Represents an absolute time and date.|atltime.h|  
|[CTimeSpan](../../atl-mfc-shared/reference/ctimespan-class.md)|An amount of time, which is internally stored as the number of seconds in the time span.|atltime.h|  
|[IAtlStringMgr](../../atl-mfc-shared/reference/iatlstringmgr-class.md)|Represents the interface to a `CStringT` memory manager.|atlsimpstr.h|  
  
## See Also  
 [ATL/MFC Shared Classes](../../atl-mfc-shared/atl-mfc-shared-classes.md)


