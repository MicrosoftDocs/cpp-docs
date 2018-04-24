---
title: "Features of Record View Classes  (MFC Data Access) | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "record views, classes"
  - "record view classes"
ms.assetid: e7b2820f-09c4-483f-83c0-317e8be42bdf
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Features of Record View Classes  (MFC Data Access)
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Features of Record View Classes  (MFC Data Access)](https://docs.microsoft.com/cpp/data/features-of-record-view-classes-mfc-data-access).  
  
  
You can do form-based data-access programming with class [CFormView](../mfc/reference/cformview-class.md), but [CRecordView](../mfc/reference/crecordview-class.md) and [CDaoRecordView](../mfc/reference/cdaorecordview-class.md) are generally better classes to derive from. In addition to their `CFormView` features, `CRecordView` and `CDaoRecordView`:  
  
-   Provide dialog data exchange (DDX) between the form controls and the associated recordset object.  
  
-   Handle Move First, Move Next, Move Previous, and Move Last commands for navigating through the records in the associated recordset object.  
  
-   Update changes to the current record when the user moves to another record.  
  
 For more information about navigation, see [Record Views: Supporting Navigation in a Record View](../data/supporting-navigation-in-a-record-view-mfc-data-access.md).  
  
## See Also  
 [Record Views  (MFC Data Access)](../data/record-views-mfc-data-access.md)   
 [ODBC Driver List](../data/odbc/odbc-driver-list.md)

