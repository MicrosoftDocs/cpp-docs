---
description: "Learn more about: Record View Code Created by Application Wizard  (MFC Data Access)"
title: "Record View Code Created by Application Wizard  (MFC Data Access)"
ms.date: "11/04/2016"
helpviewer_keywords: ["application wizards [C++], record view code", "record views, refreshing controls", "record views, application wizard code"]
ms.assetid: 18fd4703-5939-491d-b759-985f767b951f
---
# Record View Code Created by Application Wizard  (MFC Data Access)

The [MFC Application Wizard](../mfc/reference/database-support-mfc-application-wizard.md) overrides the view's `OnInitialUpdate` and `OnGetRecordset` member functions. After the framework creates the frame window, document, and view, it calls `OnInitialUpdate` to initialize the view. `OnInitialUpdate` obtains a pointer to the recordset from the document. A call to the base class [CView::OnInitialUpdate](../mfc/reference/cview-class.md#oninitialupdate) function opens the recordset. The following code shows this process for a `CRecordView`:

```cpp
void CSectionForm::OnInitialUpdate()
{
   m_pSet = &GetDocument()->m_sectionSet;
   CRecordView::OnInitialUpdate();
}
```

When the recordset opens, it selects records. [CRecordset::Open](../mfc/reference/crecordset-class.md#open) makes the first record the current record, and DDX moves data from the recordset's field data members to the corresponding form controls in the view. For more information about RFX, see [Record Field Exchange (RFX)](../data/odbc/record-field-exchange-rfx.md). For more information about DDX, see [Dialog Data Exchange and Validation](../mfc/dialog-data-exchange-and-validation.md). For information about the document/view creation process, see [Using the Classes to Write Applications for Windows](../mfc/using-the-classes-to-write-applications-for-windows.md).

> [!NOTE]
> You should give your end users the capability to refresh the record view controls from the recordset. Without this capability, if a user changes a control's value to an illegal value, the user can be permanently stuck on the current record. To refresh the controls, you call the `CWnd` member function [UpdateData](../mfc/reference/cwnd-class.md#updatedata) with a parameter of FALSE.

## See also

[Using a Record View](../data/using-a-record-view-mfc-data-access.md)
