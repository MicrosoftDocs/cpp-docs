---
title: "Classes Shared by MFC and ATL"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "shared classes, classes"
ms.assetid: ca8b4b6b-744d-430b-b31f-d5b2f17bf210
caps.latest.revision: 8
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
|[CFileTime](../atl/cfiletime-class.md)|Provides methods for managing the date and time values associated with a file.|atltime.h|  
|[CFileTimeSpan](../atl/cfiletimespan-class.md)|Provides methods for managing relative date and time values associated with a file.|atltime.h|  
|[CFixedStringT](../atl/cfixedstringt-class.md)|Represents a string object with a fixed character buffer.|cstringt.h|  
|[CImage](../atl/cimage-class.md)|Provides enhanced bitmap support, including the ability to load and save images in JPEG, GIF, BMP, and Portable Network Graphics (PNG) formats.|atlimage.h|  
|[COleDateTime](../atl/coledatetime-class.md)|Encapsulates the **DATE** data type used in OLE automation.|atlcomtime.h|  
|[COleDateTimeSpan](../atl/coledatetimespan-class.md)|Represents a relative time, a time span.|atlcomtime.h|  
|[CPoint](../atl/cpoint-class.md)|A class similar to the Windows POINT structure that also includes member functions to manipulate `CPoint` and **POINT** structures.|atltypes.h|  
|[CRect](../atl/crect-class.md)|A class similar to a Windows RECT structure that also includes member functions to manipulate `CRect` objects and Windows `RECT` structures.|atltypes.h|  
|[CSimpleStringT](../atl/csimplestringt-class.md)|Represents a `CSimpleStringT` object.|atlsimpstr.h|  
|[CSize](../atl/csize-class.md)|A class similar to the Windows SIZE structure, which implements a relative coordinate or position.|atltypes.h|  
|[CStrBufT](../atl/cstrbuft-class.md)|Provides automatic resource cleanup for `GetBuffer` and `ReleaseBuffer` calls on a existing `CStringT` object.|atlsimpstr.h|  
|[CStringData](../atl/cstringdata-class.md)|Represents the data of a string object.|atlsimpstr.h|  
|[CStringT](../atl/cstringt-class.md)|Represents a `CStringT` object.|cstringt.h (MFC dependent) atlstr.h (MFC independent)|  
|[CTime](../atl/ctime-class.md)|Represents an absolute time and date.|atltime.h|  
|[CTimeSpan](../atl/ctimespan-class.md)|An amount of time, which is internally stored as the number of seconds in the time span.|atltime.h|  
|[IAtlStringMgr](../atl/iatlstringmgr-class.md)|Represents the interface to a `CStringT` memory manager.|atlsimpstr.h|  
  
## See Also  
 [ATL/MFC Shared Classes](../atl/atl-mfc-shared-classes.md)