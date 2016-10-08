---
title: "Features of Record View Classes  (MFC Data Access)"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: e7b2820f-09c4-483f-83c0-317e8be42bdf
caps.latest.revision: 8
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# Features of Record View Classes  (MFC Data Access)
You can do form-based data-access programming with class [CFormView](../VS_visualcpp/CFormView-Class.md), but [CRecordView](../VS_visualcpp/CRecordView-Class.md) and [CDaoRecordView](../VS_visualcpp/CDaoRecordView-Class.md) are generally better classes to derive from. In addition to their `CFormView` features, `CRecordView` and `CDaoRecordView`:  
  
-   Provide dialog data exchange (DDX) between the form controls and the associated recordset object.  
  
-   Handle Move First, Move Next, Move Previous, and Move Last commands for navigating through the records in the associated recordset object.  
  
-   Update changes to the current record when the user moves to another record.  
  
 For more information about navigation, see [Record Views: Supporting Navigation in a Record View](../VS_visualcpp/Supporting-Navigation-in-a-Record-View---MFC-Data-Access-.md).  
  
## See Also  
 [Record Views  (MFC Data Access)](../VS_visualcpp/Record-Views---MFC-Data-Access-.md)   
 [ODBC Driver List](../VS_visualcpp/ODBC-Driver-List.md)