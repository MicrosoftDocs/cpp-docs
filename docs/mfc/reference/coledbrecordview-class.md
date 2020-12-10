---
description: "Learn more about: COleDBRecordView Class"
title: "COleDBRecordView Class"
ms.date: "11/04/2016"
f1_keywords: ["COleDBRecordView", "AFXOLEDB/COleDBRecordView", "AFXOLEDB/COleDBRecordView::COleDBRecordView", "AFXOLEDB/COleDBRecordView::OnGetRowset", "AFXOLEDB/COleDBRecordView::OnMove"]
helpviewer_keywords: ["COleDBRecordView [MFC], COleDBRecordView", "COleDBRecordView [MFC], OnGetRowset", "COleDBRecordView [MFC], OnMove"]
ms.assetid: 98612427-c4c9-4760-b7e1-85b17448add9
---
# COleDBRecordView Class

A view that displays database records in controls.

## Syntax

```
class COleDBRecordView : public CFormView
```

## Members

### Protected Constructors

|Name|Description|
|----------|-----------------|
|[COleDBRecordView::COleDBRecordView](#coledbrecordview)|Constructs a `COleDBRecordView` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[COleDBRecordView::OnGetRowset](#ongetrowset)|Returns a standard HRESULT value.|
|[COleDBRecordView::OnMove](#onmove)|Updates the current record (if dirty) on the data source and then moves to the specified record (next, previous, first, or last).|

## Remarks

The view is a form view directly connected to a `CRowset` object. The view is created from a dialog template resource and displays the fields of the `CRowset` object in the dialog template's controls. The `COleDBRecordView` object uses dialog data exchange (DDX), and the navigational functionality built into `CRowset`, to automate the movement of data between the controls on the form and the fields of the rowset. `COleDBRecordView` also supplies a default implementation for moving to the first, next, previous, or last record and an interface for updating the record currently on view.

You can use DDX functions with `COleDbRecordView` to get data directly from the database recordset and display it in a dialog control. You should use the `DDX_*` methods (such as `DDX_Text`), not the `DDX_Field*` functions (such as `DDX_FieldText`) with `COleDbRecordView`. `DDX_FieldText` will not work with `COleDbRecordView` because `DDX_FieldText` takes an additional argument of type `CRecordset*` (for `CRecordView`) or `CDaoRecordset*` (for `CDaoRecordView`).

> [!NOTE]
> If you are working with the Data Access Objects (DAO) classes rather than the OLE DB Consumer Template classes, use class [CDaoRecordView](../../mfc/reference/cdaorecordview-class.md) instead. For more information, see the article [Overview: Database Programming](../../data/data-access-programming-mfc-atl.md).

`COleDBRecordView` keeps track of the user's position in the rowset so that the record view can update the user interface. When the user moves to either end of the rowset, the record view disables user interface objects — such as menu items or toolbar buttons — for moving further in the same direction.

For more information about rowset classes, see the [Using OLE DB Consumer Templates](../../data/oledb/ole-db-consumer-templates-cpp.md) article.

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CView](../../mfc/reference/cview-class.md)

[CScrollView](../../mfc/reference/cscrollview-class.md)

[CFormView](../../mfc/reference/cformview-class.md)

`COleDBRecordView`

## Requirements

**Header:** afxoledb.h

## <a name="coledbrecordview"></a> COleDBRecordView::COleDBRecordView

Constructs a `COleDBRecordView` object.

```
COleDBRecordView(LPCTSTR lpszTemplateName);
COleDBRecordView(UINT nIDTemplate);
```

### Parameters

*lpszTemplateName*<br/>
Contains a null-terminated string that is the name of a dialog-template resource.

*nIDTemplate*<br/>
Contains the ID number of a dialog-template resource.

### Remarks

When you create an object of a type derived from `COleDBRecordView`, invoke one of the constructors to create the view object and identify the dialog resource on which the view is based. You can identify the resource either by name (pass a string as the argument to the constructor) or by its ID (pass an unsigned integer as the argument).

> [!NOTE]
> Your derived class *must* supply its own constructor. In the constructor, invoke the constructor, `COleDBRecordView::COleDBRecordView`, with the resource name or ID as an argument.

## <a name="ongetrowset"></a> COleDBRecordView::OnGetRowset

Returns a handle for the **CRowset<>** object associated with the record view.

```
virtual CRowset<>* OnGetRowset() = 0;
```

### Return Value

A standard HRESULT value.

### Remarks

You must override this member function to construct or obtain a rowset object and return a handle to it. If you declare your record view class with ClassWizard, the wizard writes a default override for you. ClassWizard's default implementation returns the rowset handle stored in the record view if one exists. If not, it constructs a rowset object of the type you specified with ClassWizard and calls its `Open` member function to open the table or run the query, and then returns a handle to the object.

> [!NOTE]
> Previous to MFC 7.0, `OnGetRowset` returned a pointer to `CRowset`. If you have code that calls `OnGetRowset`, you need to change the return type to the templatized class **CRowset<>**.

### Example

[!code-cpp[NVC_MFCDatabase#38](../../mfc/codesnippet/cpp/coledbrecordview-class_1.cpp)]

For more information and examples, see the article [Record Views: Using a Record View](../../data/using-a-record-view-mfc-data-access.md).

## <a name="onmove"></a> COleDBRecordView::OnMove

Moves to a different record in the rowset and display its fields in the controls of the record view.

```
virtual BOOL OnMove(UINT nIDMoveCommand);
```

### Parameters

*nIDMoveCommand*<br/>
One of the following standard command ID values:

- ID_RECORD_FIRST — Move to the first record in the recordset.

- ID_RECORD_LAST — Move to the last record in the recordset.

- ID_RECORD_NEXT — Move to the next record in the recordset.

- ID_RECORD_PREV — Move to the previous record in the recordset.

### Return Value

Nonzero if the move was successful; otherwise 0 if the move request was denied.

### Remarks

The default implementation calls the appropriate `Move` member function of the `CRowset` object associated with the record view.

By default, `OnMove` updates the current record on the data source if the user has changed it in the record view.

The Application Wizard creates a menu resource with First Record, Last Record, Next Record, and Previous Record menu items. If you select the Dockable Toolbar option, The Application Wizard also creates a toolbar with buttons corresponding to these commands.

If you move past the last record in the recordset, the record view continues to display the last record. If you move backward past the first record, the record view continues to display the first record.

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)
