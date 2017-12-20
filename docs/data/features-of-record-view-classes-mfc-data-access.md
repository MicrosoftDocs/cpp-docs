---
title: "Features of Record View Classes  (MFC Data Access) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "cpp-windows"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "record views, classes"
  - "record view classes"
ms.assetid: e7b2820f-09c4-483f-83c0-317e8be42bdf
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
ms.workload: 
  - "cplusplus"
  - "data-storage"
---
# Features of Record View Classes  (MFC Data Access)
You can do form-based data-access programming with class [CFormView](../mfc/reference/cformview-class.md), but [CRecordView](../mfc/reference/crecordview-class.md) is generally a better class to derive from. In addition to its `CFormView` features, `CRecordView`:  
  
-   Provides dialog data exchange (DDX) between the form controls and the associated recordset object.  
  
-   Handles Move First, Move Next, Move Previous, and Move Last commands for navigating through the records in the associated recordset object.  
  
-   Updates changes to the current record when the user moves to another record.  
  
 For more information about navigation, see [Record Views: Supporting Navigation in a Record View](../data/supporting-navigation-in-a-record-view-mfc-data-access.md).  
  
## See Also  
 [Record Views  (MFC Data Access)](../data/record-views-mfc-data-access.md)   
 [ODBC Driver List](../data/odbc/odbc-driver-list.md)