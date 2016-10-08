---
title: "Record Views  (MFC Data Access)"
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
ms.assetid: 562122d9-01d8-4284-acf6-ea109ab0408d
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
# Record Views  (MFC Data Access)
This section applies only to the MFC ODBC and DAO classes. For information about OLE DB record views, see [COleDBRecordView](../VS_visualcpp/COleDBRecordView-Class.md) and [Using OLE DB Record Views](../VS_visualcpp/Using-OLE-DB-Record-Views.md).  
  
 To support form-based data-access applications, the class library provides class [CRecordView](../VS_visualcpp/CRecordView-Class.md) and class [CDaoRecordView](../VS_visualcpp/CDaoRecordView-Class.md). A record view is a form view object whose controls are mapped directly to the field data members of a [recordset](../VS_visualcpp/Recordset--ODBC-.md) object (and indirectly to the corresponding columns in a query result or table on the data source). Like their base class [CFormView](../VS_visualcpp/CFormView-Class.md), `CRecordView` and `CDaoRecordView` are based on a dialog template resource.  
  
## Form Uses  
 Forms are useful for a variety of data-access tasks:  
  
-   Entering data  
  
-   Performing read-only examination of data  
  
-   Updating data  
  
## Further Reading About Record Views  
 The material in topics applies to both the ODBC-based and the DAO-based classes. Use `CRecordView` for ODBC and `CDaoRecordView` for DAO.  
  
 Topics include:  
  
-   [Features of Record View Classes](../VS_visualcpp/Features-of-Record-View-Classes---MFC-Data-Access-.md)  
  
-   [Data Exchange for Record Views](../VS_visualcpp/Data-Exchange-for-Record-Views----MFC-Data-Access-.md)  
  
-   [Your Role in Working with a Record View](../VS_visualcpp/Your-Role-in-Working-with-a-Record-View---MFC-Data-Access-.md)  
  
-   [Designing and Creating a Record View](../VS_visualcpp/Designing-and-Creating-a-Record-View---MFC-Data-Access-.md)  
  
-   [Using a Record View](../VS_visualcpp/Using-a-Record-View---MFC-Data-Access-.md)  
  
## See Also  
 [Data Access Programming (MFC/ATL)](../VS_visualcpp/Data-Access-Programming--MFC-ATL-.md)   
 [ODBC Driver List](../VS_visualcpp/ODBC-Driver-List.md)