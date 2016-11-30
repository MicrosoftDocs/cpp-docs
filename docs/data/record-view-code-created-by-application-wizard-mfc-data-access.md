---
title: "Record View Code Created by Application Wizard  (MFC Data Access) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "application wizards [C++], record view code"
  - "record views, refreshing controls"
  - "record views, application wizard code"
ms.assetid: 18fd4703-5939-491d-b759-985f767b951f
caps.latest.revision: 9
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
# Record View Code Created by Application Wizard  (MFC Data Access)
The [MFC Application Wizard](../mfc/reference/database-support-mfc-application-wizard.md) overrides the view's `OnInitialUpdate` and `OnGetRecordset` member functions. After the framework creates the frame window, document, and view, it calls `OnInitialUpdate` to initialize the view. `OnInitialUpdate` obtains a pointer to the recordset from the document. A call to the base class [CView::OnInitialUpdate](../mfc/reference/cview-class.md#cview__oninitialupdate) function opens the recordset. The following code shows this process for a `CRecordView` — the code for a `CDaoRecordView` is similar:  
  
```  
void CSectionForm::OnInitialUpdate()  
{  
   m_pSet = &GetDocument()->m_sectionSet;  
   CRecordView::OnInitialUpdate();  
}  
```  
  
 When the recordset opens, it selects records. [CRecordset::Open](../mfc/reference/crecordset-class.md#crecordset__open) or [CDaoRecordset::Open](../mfc/reference/cdaorecordset-class.md#cdaorecordset__open) makes the first record the current record, and DDX moves data from the recordset's field data members to the corresponding form controls in the view. For more information about RFX, see [Record Field Exchange (RFX)](../data/odbc/record-field-exchange-rfx.md). For more information about DDX, see [Dialog Data Exchange and Validation](../mfc/dialog-data-exchange-and-validation.md). For information about the document/view creation process, see [Using the Classes to Write Applications for Windows](../mfc/using-the-classes-to-write-applications-for-windows.md).  
  
> [!NOTE]
>  You should give your end users the capability to refresh the record view controls from the recordset. Without this capability, if a user changes a control's value to an illegal value, the user can be permanently stuck on the current record. To refresh the controls, you call the `CWnd` member function [UpdateData](../mfc/reference/cwnd-class.md#cwnd__updatedata) with a parameter of **FALSE**.  
  
## See Also  
 [Using a Record View](../data/using-a-record-view-mfc-data-access.md)