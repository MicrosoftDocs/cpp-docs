---
title: "Record View Code Created by Application Wizard  (MFC Data Access)"
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
ms.assetid: 18fd4703-5939-491d-b759-985f767b951f
caps.latest.revision: 9
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
# Record View Code Created by Application Wizard  (MFC Data Access)
The [MFC Application Wizard](../VS_visualcpp/Database-Support--MFC-Application-Wizard.md) overrides the view's `OnInitialUpdate` and `OnGetRecordset` member functions. After the framework creates the frame window, document, and view, it calls `OnInitialUpdate` to initialize the view. `OnInitialUpdate` obtains a pointer to the recordset from the document. A call to the base class [CView::OnInitialUpdate](../Topic/CView::OnInitialUpdate.md) function opens the recordset. The following code shows this process for a `CRecordView` — the code for a `CDaoRecordView` is similar:  
  
```  
void CSectionForm::OnInitialUpdate()  
{  
   m_pSet = &GetDocument()->m_sectionSet;  
   CRecordView::OnInitialUpdate();  
}  
```  
  
 When the recordset opens, it selects records. [CRecordset::Open](../Topic/CRecordset::Open.md) or [CDaoRecordset::Open](../Topic/CDaoRecordset::Open.md) makes the first record the current record, and DDX moves data from the recordset's field data members to the corresponding form controls in the view. For more information about RFX, see [Record Field Exchange (RFX)](../VS_visualcpp/Record-Field-Exchange--RFX-.md). For more information about DDX, see [Dialog Data Exchange and Validation](../VS_visualcpp/Dialog-Data-Exchange-and-Validation.md). For information about the document/view creation process, see [Using the Classes to Write Applications for Windows](../VS_visualcpp/Using-the-Classes-to-Write-Applications-for-Windows.md).  
  
> [!NOTE]
>  You should give your end users the capability to refresh the record view controls from the recordset. Without this capability, if a user changes a control's value to an illegal value, the user can be permanently stuck on the current record. To refresh the controls, you call the `CWnd` member function [UpdateData](../Topic/CWnd::UpdateData.md) with a parameter of **FALSE**.  
  
## See Also  
 [Using a Record View](../VS_visualcpp/Using-a-Record-View---MFC-Data-Access-.md)