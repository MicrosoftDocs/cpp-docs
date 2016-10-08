---
title: "Using a Record View  (MFC Data Access)"
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
ms.assetid: 91f2828f-0666-4273-ae28-e4703fd98521
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
# Using a Record View  (MFC Data Access)
This topic explains how you might commonly customize the default code for record views that the wizard writes for you. Typically, you want to constrain the record selection with a [filter](../VS_visualcpp/Recordset--Filtering-Records--ODBC-.md) or [parameters](../VS_visualcpp/Recordset--Parameterizing-a-Recordset--ODBC-.md), perhaps [sort](../VS_visualcpp/Recordset--Sorting-Records--ODBC-.md) the records, customize the SQL statement.  
  
 This information applies to both [CRecordView](../VS_visualcpp/CRecordView-Class.md) (ODBC) and [CDaoRecordView](../VS_visualcpp/CDaoRecordView-Class.md) (DAO).  
  
 Using `CRecordView` or `CDaoRecordView` is much the same as using [CFormView](../VS_visualcpp/CFormView-Class.md). The basic approach is to use the record view to display and perhaps update the records of a single recordset. Beyond that, you might want to use other recordsets as well, as discussed in [Record Views: Filling a List Box from a Second Recordset](../VS_visualcpp/Filling-a-List-Box-from-a-Second-Recordset---MFC-Data-Access-.md).  
  
## See Also  
 [Record Views  (MFC Data Access)](../VS_visualcpp/Record-Views---MFC-Data-Access-.md)   
 [ODBC Driver List](../VS_visualcpp/ODBC-Driver-List.md)