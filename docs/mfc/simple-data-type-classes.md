---
title: "Simple Data Type Classes | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.classes.data"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "scalar classes [C++]"
  - "data classes [C++]"
  - "simple data type classes"
ms.assetid: 0d591d68-0a33-49e9-8a6d-90c90de5c16a
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
# Simple Data Type Classes
The following classes encapsulate drawing coordinates, character strings, and time and date information, allowing convenient use of C++ syntax. These objects are used widely as parameters to the member functions of Windows classes in the class library. Because `CPoint`, `CSize`, and `CRect` correspond to the **POINT**, **SIZE**, and `RECT` structures, respectively, in the [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)], you can use objects of these C++ classes wherever you can use these C-language structures. The classes provide useful interfaces through their member functions. `CStringT` provides very flexible dynamic character strings. `CTime`, `COleDateTime`, `CTimeSpan`, and **COleTimeSpan** represent time and date values. For more information about these classes, see the article [Date and Time](../atl-mfc-shared/date-and-time.md).  
  
 The classes that begin with "**COle**" are encapsulations of data types provided by OLE. These data types can be used in Windows programs regardless of whether other OLE features are used.  
  
 [CStringT Class](../atl-mfc-shared/reference/cstringt-class.md)  
 Holds character strings.  
  
 [CTime](../atl-mfc-shared/reference/ctime-class.md)  
 Holds absolute time and date values.  
  
 [COleDateTime](../atl-mfc-shared/reference/coledatetime-class.md)  
 Wrapper for the OLE automation type **DATE**. Represents date and time values.  
  
 [CTimeSpan](../atl-mfc-shared/reference/ctimespan-class.md)  
 Holds relative time and date values.  
  
 [COleDateTimeSpan](../atl-mfc-shared/reference/coledatetimespan-class.md)  
 Holds relative `COleDateTime` values, such as the difference between two `COleDateTime` values.  
  
 [CPoint](../atl-mfc-shared/reference/cpoint-class.md)  
 Holds coordinate (x, y) pairs.  
  
 [CSize](../atl-mfc-shared/reference/csize-class.md)  
 Holds distance, relative positions, or paired values.  
  
 [CRect](../atl-mfc-shared/reference/crect-class.md)  
 Holds coordinates of rectangular areas.  
  
 [CImageList](../mfc/reference/cimagelist-class.md)  
 Provides the functionality of the Windows image list. Image lists are used with list controls and tree controls. They can also be used to store and archive a set of same-sized bitmaps.  
  
 [COleVariant](../mfc/reference/colevariant-class.md)  
 Wrapper for the OLE automation type **VARIANT**. Data in **VARIANT**s can be stored in many formats.  
  
 [COleCurrency](../mfc/reference/colecurrency-class.md)  
 Wrapper for the OLE automation type **CURRENCY**, a fixed-point arithmetic type, with 15 digits before the decimal point and 4 digits after.  
  
> [!NOTE]
>  Beginning with Visual C++ .NET, `CRect`, `CSize`, and `CPoint` have been modified to be usable in either ATL or MFC applications. In addition, `CStringT` has been added to provide an MFC-independent `CString`-like class. For more information on shared utility classes, see [Shared Classes](../atl-mfc-shared/atl-mfc-shared-classes.md).  
  
## See Also  
 [Class Overview](../mfc/class-library-overview.md)

