---
description: "Learn more about: Filling a List Box from a Second Recordset  (MFC Data Access)"
title: "Filling a List Box from a Second Recordset  (MFC Data Access)"
ms.date: "11/04/2016"
helpviewer_keywords: ["record views, filling list boxes", "list boxes, filling from second recordset", "recordsets [C++], filling list boxes or combo boxes", "CComboBox class, filling object from second rowset", "ODBC recordsets [C++], filling list boxes or combo boxes", "combo boxes [C++], filling from second recordset", "CListCtrl class, filling from second recordset"]
ms.assetid: 360c0834-da6b-4dc0-bcea-80e9acd611f0
---
# Filling a List Box from a Second Recordset  (MFC Data Access)

By default, a record view is associated with a single recordset object, whose fields are mapped to the record view's controls. Sometimes you might want to put a list box or combo box control in your record view and fill it with values from a second recordset object. The user can use the list box to select a new category of information to display in the record view. This topic explains how and when to do that.

> [!TIP]
> Be aware that filling a combo box or list box from a data source might be slow. Take precautions against trying to fill a control from a recordset with a large number of records.

The model for this topic consists of a primary recordset that fills the controls of your form, while a secondary recordset fills a list box or combo box. Selecting a string from the list box causes your program to requery the primary recordset based on what was selected. The following procedure uses a combo box but applies equally to a list box.

#### To fill a combo box or list box from a second recordset

1. Create the recordset object ([CRecordset](../mfc/reference/crecordset-class.md).

1. Obtain a pointer to the [CComboBox](../mfc/reference/ccombobox-class.md) object for the combo box control.

1. Empty the combo box of any previous contents.

1. Move through all records in the recordset, calling [CComboBox::AddString](../mfc/reference/ccombobox-class.md#addstring) for each string from the current record you want to add to the combo box.

1. Initialize the selection in the combo box.

```cpp
void CSectionForm::OnInitialUpdate()
{
    // ...

    // Fill the combo box with all of the courses
    CENROLLDoc* pDoc = GetDocument();
    if (!pDoc->m_courseSet.Open())
        return;

    // ...

    m_ctlCourseList.ResetContent();
    if (pDoc->m_courseSet.IsOpen())
    {
        while (!pDoc->m_courseSet.IsEOF() )
        {
            m_ctlCourseList.AddString(
                pDoc->m_courseSet.m_CourseID);
            pDoc->m_courseSet.MoveNext();
        }
    }
    m_ctlCourseList.SetCurSel(0);
}
```

This function uses a second recordset, `m_courseSet`, which contains a record for each course offered, and a `CComboBox` control, `m_ctlCourseList`, which is stored in the record view class.

The function gets `m_courseSet` from the document and opens it. Then it empties `m_ctlCourseList` and scrolls through `m_courseSet`. For each record, the function calls the combo box's `AddString` member function to add the course ID value from the record. Finally, the code sets the combo box's selection.

## See also

[Record Views  (MFC Data Access)](../data/record-views-mfc-data-access.md)<br/>
[ODBC Driver List](../data/odbc/odbc-driver-list.md)
