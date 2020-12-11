---
description: "Learn more about: COleDocument Class"
title: "COleDocument Class"
ms.date: "11/04/2016"
f1_keywords: ["COleDocument", "AFXOLE/COleDocument", "AFXOLE/COleDocument::COleDocument", "AFXOLE/COleDocument::AddItem", "AFXOLE/COleDocument::ApplyPrintDevice", "AFXOLE/COleDocument::EnableCompoundFile", "AFXOLE/COleDocument::GetInPlaceActiveItem", "AFXOLE/COleDocument::GetNextClientItem", "AFXOLE/COleDocument::GetNextItem", "AFXOLE/COleDocument::GetNextServerItem", "AFXOLE/COleDocument::GetPrimarySelectedItem", "AFXOLE/COleDocument::GetStartPosition", "AFXOLE/COleDocument::HasBlankItems", "AFXOLE/COleDocument::OnShowViews", "AFXOLE/COleDocument::RemoveItem", "AFXOLE/COleDocument::UpdateModifiedFlag", "AFXOLE/COleDocument::OnEditChangeIcon", "AFXOLE/COleDocument::OnEditConvert", "AFXOLE/COleDocument::OnEditLinks", "AFXOLE/COleDocument::OnFileSendMail", "AFXOLE/COleDocument::OnUpdateEditChangeIcon", "AFXOLE/COleDocument::OnUpdateEditLinksMenu", "AFXOLE/COleDocument::OnUpdateObjectVerbMenu", "AFXOLE/COleDocument::OnUpdatePasteLinkMenu", "AFXOLE/COleDocument::OnUpdatePasteMenu"]
helpviewer_keywords: ["COleDocument [MFC], COleDocument", "COleDocument [MFC], AddItem", "COleDocument [MFC], ApplyPrintDevice", "COleDocument [MFC], EnableCompoundFile", "COleDocument [MFC], GetInPlaceActiveItem", "COleDocument [MFC], GetNextClientItem", "COleDocument [MFC], GetNextItem", "COleDocument [MFC], GetNextServerItem", "COleDocument [MFC], GetPrimarySelectedItem", "COleDocument [MFC], GetStartPosition", "COleDocument [MFC], HasBlankItems", "COleDocument [MFC], OnShowViews", "COleDocument [MFC], RemoveItem", "COleDocument [MFC], UpdateModifiedFlag", "COleDocument [MFC], OnEditChangeIcon", "COleDocument [MFC], OnEditConvert", "COleDocument [MFC], OnEditLinks", "COleDocument [MFC], OnFileSendMail", "COleDocument [MFC], OnUpdateEditChangeIcon", "COleDocument [MFC], OnUpdateEditLinksMenu", "COleDocument [MFC], OnUpdateObjectVerbMenu", "COleDocument [MFC], OnUpdatePasteLinkMenu", "COleDocument [MFC], OnUpdatePasteMenu"]
ms.assetid: dc2ecb99-03e1-44c7-bb69-48056dd1b672
---
# COleDocument Class

The base class for OLE documents that support visual editing.

## Syntax

```
class COleDocument : public CDocument
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[COleDocument::COleDocument](#coledocument)|Constructs a `COleDocument` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[COleDocument::AddItem](#additem)|Adds an item to the list of items maintained by the document.|
|[COleDocument::ApplyPrintDevice](#applyprintdevice)|Sets the print-target device for all client items in the document.|
|[COleDocument::EnableCompoundFile](#enablecompoundfile)|Causes documents to be stored using the OLE Structured Storage file format.|
|[COleDocument::GetInPlaceActiveItem](#getinplaceactiveitem)|Returns the OLE item that is currently in-place active.|
|[COleDocument::GetNextClientItem](#getnextclientitem)|Gets the next client item for iterating.|
|[COleDocument::GetNextItem](#getnextitem)|Gets the next document item for iterating.|
|[COleDocument::GetNextServerItem](#getnextserveritem)|Gets the next server item for iterating.|
|[COleDocument::GetPrimarySelectedItem](#getprimaryselecteditem)|Returns the primary selected OLE item in the document.|
|[COleDocument::GetStartPosition](#getstartposition)|Gets the initial position to begin iteration.|
|[COleDocument::HasBlankItems](#hasblankitems)|Checks for blank items in the document.|
|[COleDocument::OnShowViews](#onshowviews)|Called when the document becomes visible or invisible.|
|[COleDocument::RemoveItem](#removeitem)|Removes an item from the list of items maintained by the document.|
|[COleDocument::UpdateModifiedFlag](#updatemodifiedflag)|Marks the document as modified if any of the contained OLE items have been modified.|

### Protected Methods

|Name|Description|
|----------|-----------------|
|[COleDocument::OnEditChangeIcon](#oneditchangeicon)|Handles events in the Change Icon menu command.|
|[COleDocument::OnEditConvert](#oneditconvert)|Handles the conversion of an embedded or linked object from one type to another.|
|[COleDocument::OnEditLinks](#oneditlinks)|Handles events in the Links command on the Edit menu.|
|[COleDocument::OnFileSendMail](#onfilesendmail)|Sends a mail message with the document attached.|
|[COleDocument::OnUpdateEditChangeIcon](#onupdateeditchangeicon)|Called by the framework to update the command UI for the Edit/Change Icon menu option.|
|[COleDocument::OnUpdateEditLinksMenu](#onupdateeditlinksmenu)|Called by the framework to update the command UI for the Edit/Links menu option.|
|[COleDocument::OnUpdateObjectVerbMenu](#onupdateobjectverbmenu)|Called by the framework to update the command UI for the Edit/ *ObjectName* menu option and the Verb submenu accessed from Edit/ *ObjectName*.|
|[COleDocument::OnUpdatePasteLinkMenu](#onupdatepastelinkmenu)|Called by the framework to update the command UI for the Paste Special menu option.|
|[COleDocument::OnUpdatePasteMenu](#onupdatepastemenu)|Called by the framework to update the command UI for the Paste menu option.|

## Remarks

`COleDocument` is derived from `CDocument`, which allows your OLE applications to use the document/view architecture provided by the Microsoft Foundation Class Library.

`COleDocument` treats a document as a collection of [CDocItem](../../mfc/reference/cdocitem-class.md) objects to handle OLE items. Both container and server applications require such an architecture because their documents must be able to contain OLE items. The [COleServerItem](../../mfc/reference/coleserveritem-class.md) and [COleClientItem](../../mfc/reference/coleclientitem-class.md) classes, both derived from `CDocItem`, manage the interactions between applications and OLE items.

If you are writing a simple container application, derive your document class from `COleDocument`. If you are writing a container application that supports linking to the embedded items contained by its documents, derive your document class from [COleLinkingDoc](../../mfc/reference/colelinkingdoc-class.md). If you are writing a server application or combination container/server, derive your document class from [COleServerDoc](../../mfc/reference/coleserverdoc-class.md). `COleLinkingDoc` and `COleServerDoc` are derived from `COleDocument`, so these classes inherit all the services available in `COleDocument` and `CDocument`.

To use `COleDocument`, derive a class from it and add functionality to manage the application's non-OLE data as well as embedded or linked items. If you define `CDocItem`-derived classes to store the application's native data, you can use the default implementation defined by `COleDocument` to store both your OLE and non-OLE data. You can also design your own data structures for storing your non-OLE data separately from the OLE items. For more information, see the article [Containers: Compound Files](../../mfc/containers-compound-files.md)..

`CDocument` supports sending your document via mail if mail support (MAPI) is present. `COleDocument` has updated [OnFileSendMail](#onfilesendmail) to handle compound documents correctly. For more information, see the articles [MAPI](../../mfc/mapi.md) and [MAPI Support in MFC](../../mfc/mapi-support-in-mfc.md)..

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CDocument](../../mfc/reference/cdocument-class.md)

`COleDocument`

## Requirements

**Header:** afxole.h

## <a name="additem"></a> COleDocument::AddItem

Call this function to add an item to the document.

```
virtual void AddItem(CDocItem* pItem);
```

### Parameters

*pItem*<br/>
Pointer to the document item being added.

### Remarks

You do not need to call this function explicitly when it is called by the `COleClientItem` or `COleServerItem` constructor that accepts a pointer to a document.

## <a name="applyprintdevice"></a> COleDocument::ApplyPrintDevice

Call this function to change the print-target device for all embedded [COleClientItem](../../mfc/reference/coleclientitem-class.md) items in your application's container document.

```
BOOL ApplyPrintDevice(const DVTARGETDEVICE* ptd);
BOOL ApplyPrintDevice(const PRINTDLG* ppd);
```

### Parameters

*ptd*<br/>
Pointer to a `DVTARGETDEVICE` data structure, which contains information about the new print-target device. Can be NULL.

*ppd*<br/>
Pointer to a `PRINTDLG` data structure, which contains information about the new print-target device. Can be NULL.

### Return Value

Nonzero if the function was successful; otherwise 0.

### Remarks

This function updates the print-target device for all items but does not refresh the presentation cache for those items. To update the presentation cache for an item, call [COleClientItem::UpdateLink](../../mfc/reference/coleclientitem-class.md#updatelink).

The arguments to this function contain information that OLE uses to identify the target device. The [PRINTDLG](/windows/win32/api/commdlg/ns-commdlg-printdlga) structure contains information that Windows uses to initialize the common Print dialog box. After the user closes the dialog box, Windows returns information about the user's selections in this structure. The `m_pd` member of a [CPrintDialog](../../mfc/reference/cprintdialog-class.md) object is a `PRINTDLG` structure.

For more information, see the [PRINTDLG](/windows/win32/api/commdlg/ns-commdlg-printdlga) structure in the Windows SDK.

For more information, see the [DVTARGETDEVICE](/windows/win32/api/objidl/ns-objidl-dvtargetdevice) structure in the Windows SDK.

## <a name="coledocument"></a> COleDocument::COleDocument

Constructs a `COleDocument` object.

```
COleDocument();
```

## <a name="enablecompoundfile"></a> COleDocument::EnableCompoundFile

Call this function if you want to store the document using the compound-file format.

```cpp
void EnableCompoundFile(BOOL bEnable = TRUE);
```

### Parameters

*bEnable*<br/>
Specifies whether compound file support is enabled or disabled.

### Remarks

This is also called structured storage. You typically call this function from the constructor of your `COleDocument`-derived class. For more information about compound documents, see the article [Containers: Compound Files](../../mfc/containers-compound-files.md)..

If you do not call this member function, documents will be stored in a nonstructured ("flat") file format.

After compound file support is enabled or disabled for a document, the setting should not be changed during the document's lifetime.

## <a name="getinplaceactiveitem"></a> COleDocument::GetInPlaceActiveItem

Call this function to get the OLE item that is currently activated in place in the frame window containing the view identified by *pWnd*.

```
virtual COleClientItem* GetInPlaceActiveItem(CWnd* pWnd);
```

### Parameters

*pWnd*<br/>
Pointer to the window that displays the container document.

### Return Value

A pointer to the single, in-place active OLE item; NULL if there is no OLE item currently in the "in-place active" state.

## <a name="getnextclientitem"></a> COleDocument::GetNextClientItem

Call this function repeatedly to access each of the client items in your document.

```
COleClientItem* GetNextClientItem(POSITION& pos) const;
```

### Parameters

*pos*<br/>
A reference to a POSITION value set by a previous call to `GetNextClientItem`; the initial value is returned by the `GetStartPosition` member function.

### Return Value

A pointer to the next client item in the document, or NULL if there are no more client items.

### Remarks

After each call, the value of *pos* is set for the next item in the document, which might or might not be a client item.

### Example

[!code-cpp[NVC_MFCOleContainer#1](../../mfc/codesnippet/cpp/coledocument-class_1.cpp)]

## <a name="getnextitem"></a> COleDocument::GetNextItem

Call this function repeatedly to access each of the items in your document.

```
virtual CDocItem* GetNextItem(POSITION& pos) const;
```

### Parameters

*pos*<br/>
A reference to a POSITION value set by a previous call to `GetNextItem`; the initial value is returned by the `GetStartPosition` member function.

### Return Value

A pointer to the document item at the specified position.

### Remarks

After each call, the value of *pos* is set to the POSITION value of the next item in the document. If the retrieved element is the last element in the document, the new value of *pos* is NULL.

### Example

[!code-cpp[NVC_MFCOleContainer#2](../../mfc/codesnippet/cpp/coledocument-class_2.cpp)]

## <a name="getnextserveritem"></a> COleDocument::GetNextServerItem

Call this function repeatedly to access each of the server items in your document.

```
COleServerItem* GetNextServerItem(POSITION& pos) const;
```

### Parameters

*pos*<br/>
A reference to a POSITION value set by a previous call to `GetNextServerItem`; the initial value is returned by the `GetStartPosition` member function.

### Return Value

A pointer to the next server item in the document, or NULL if there are no more server items.

### Remarks

After each call, the value of *pos* is set for the next item in the document, which might or might not be a server item.

### Example

[!code-cpp[NVC_MFCOleServer#2](../../mfc/codesnippet/cpp/coledocument-class_3.cpp)]

## <a name="getprimaryselecteditem"></a> COleDocument::GetPrimarySelectedItem

Called by the framework to retrieve the currently selected OLE item in the specified view.

```
virtual COleClientItem* GetPrimarySelectedItem(CView* pView);
```

### Parameters

*pView*<br/>
Pointer to the active view object displaying the document.

### Return Value

A pointer to the single, selected OLE item; NULL if no OLE items are selected or if more than one is selected.

### Remarks

The default implementation searches the list of contained OLE items for a single selected item and returns a pointer to it. If there is no item selected, or if there is more than one item selected, the function returns NULL. You must override the `CView::IsSelected` member function in your view class for this function to work. Override this function if you have your own method of storing contained OLE items.

## <a name="getstartposition"></a> COleDocument::GetStartPosition

Call this function to get the position of the first item in the document.

```
virtual POSITION GetStartPosition() const;
```

### Return Value

A POSITION value that can be used to begin iterating through the document's items; NULL if the document has no items.

### Remarks

Pass the value returned to `GetNextItem`, `GetNextClientItem`, or `GetNextServerItem`.

## <a name="hasblankitems"></a> COleDocument::HasBlankItems

Call this function to determine whether the document contains any blank items.

```
BOOL HasBlankItems() const;
```

### Return Value

Nonzero if the document contains any blank items; otherwise 0.

### Remarks

A blank item is one whose rectangle is empty.

## <a name="oneditchangeicon"></a> COleDocument::OnEditChangeIcon

Displays the OLE Change Icon dialog box and changes the icon representing the currently selected OLE item to the icon the user selects in the dialog box.

```
afx_msg void OnEditChangeIcon();
```

### Remarks

`OnEditChangeIcon` creates and launches a `COleChangeIconDialog` Change Icon dialog box.

## <a name="oneditconvert"></a> COleDocument::OnEditConvert

Displays the OLE Convert dialog box and converts or activates the currently selected OLE item according to user selections in the dialog box.

```
afx_msg void OnEditConvert();
```

### Remarks

`OnEditConvert` creates and launches a `COleConvertDialog` Convert dialog box.

An example of conversion is converting a Microsoft Word document into a WordPad document.

## <a name="oneditlinks"></a> COleDocument::OnEditLinks

Displays the OLE Edit/Links dialog box.

```
afx_msg void OnEditLinks();
```

### Remarks

`OnEditLinks` creates and launches a `COleLinksDialog` Links dialog box that allows the user to change the linked objects.

## <a name="onfilesendmail"></a> COleDocument::OnFileSendMail

Sends a message via the resident mail host (if any) with the document as an attachment.

```
afx_msg void OnFileSendMail();
```

### Remarks

`OnFileSendMail` calls `OnSaveDocument` to serialize (save) untitled and modified documents to a temporary file, which is then sent via electronic mail. If the document has not been modified, a temporary file is not needed; the original is sent. `OnFileSendMail` loads MAPI32.DLL if it has not already been loaded.

Unlike the implementation of `OnFileSendMail` for `CDocument`, this function handles compound files correctly.

For more information, see the [MAPI Topics](../../mfc/mapi.md) and [MAPI Support in MFC](../../mfc/mapi-support-in-mfc.md) articles..

## <a name="onshowviews"></a> COleDocument::OnShowViews

The framework calls this function after the document's visibility state changes.

```
virtual void OnShowViews(BOOL bVisible);
```

### Parameters

*bVisible*<br/>
Indicates whether the document has become visible or invisible.

### Remarks

The default version of this function does nothing. Override it if your application must perform any special processing when the document's visibility changes.

## <a name="onupdateeditchangeicon"></a> COleDocument::OnUpdateEditChangeIcon

Called by the framework to update the Change Icon command on the Edit menu.

```
afx_msg void OnUpdateEditChangeIcon(CCmdUI* pCmdUI);
```

### Parameters

*pCmdUI*<br/>
A pointer to a `CCmdUI` structure that represents the menu that generated the update command. The update handler calls the `Enable` member function of the `CCmdUI` structure through *pCmdUI* to update the user interface.

### Remarks

`OnUpdateEditChangeIcon` updates the command's user interface depending on whether or not a valid icon exists in the document. Override this function to change the behavior.

## <a name="onupdateeditlinksmenu"></a> COleDocument::OnUpdateEditLinksMenu

Called by the framework to update the Links command on the Edit menu.

```
afx_msg void OnUpdateEditLinksMenu(CCmdUI* pCmdUI);
```

### Parameters

*pCmdUI*<br/>
A pointer to a `CCmdUI` structure that represents the menu that generated the update command. The update handler calls the `Enable` member function of the `CCmdUI` structure through *pCmdUI* to update the user interface.

### Remarks

Starting with the first OLE item in the document, `OnUpdateEditLinksMenu` accesses each item, tests whether the item is a link, and, if it is a link, enables the Links command. Override this function to change the behavior.

## <a name="onupdateobjectverbmenu"></a> COleDocument::OnUpdateObjectVerbMenu

Called by the framework to update the *ObjectName* command on the Edit menu and the Verb submenu accessed from the *ObjectName* command, where *ObjectName* is the name of the OLE object embedded in the document.

```
afx_msg void OnUpdateObjectVerbMenu(CCmdUI* pCmdUI);
```

### Parameters

*pCmdUI*<br/>
A pointer to a `CCmdUI` structure that represents the menu that generated the update command. The update handler calls the `Enable` member function of the `CCmdUI` structure through *pCmdUI* to update the user interface.

### Remarks

`OnUpdateObjectVerbMenu` updates the *ObjectName* command's user interface depending on whether or not a valid object exists in the document. If an object exists, the *ObjectName* command on the Edit menu is enabled. When this menu command is selected, the Verb submenu is displayed. The Verb submenu contains all the verb commands available for the object, such as Edit, Properties, and so on. Override this function to change the behavior.

## <a name="onupdatepastelinkmenu"></a> COleDocument::OnUpdatePasteLinkMenu

Called by the framework to determine whether a linked OLE item can be pasted from the Clipboard.

```
afx_msg void OnUpdatePasteLinkMenu(CCmdUI* pCmdUI);
```

### Parameters

*pCmdUI*<br/>
A pointer to a `CCmdUI` structure that represents the menu that generated the update command. The update handler calls the `Enable` member function of the `CCmdUI` structure through *pCmdUI* to update the user interface.

### Remarks

The Paste Special menu command is enabled or disabled depending on whether the item can be pasted into the document or not.

## <a name="onupdatepastemenu"></a> COleDocument::OnUpdatePasteMenu

Called by the framework to determine whether an embedded OLE item can be pasted from the Clipboard.

```
afx_msg void OnUpdatePasteMenu(CCmdUI* pCmdUI);
```

### Parameters

*pCmdUI*<br/>
A pointer to a `CCmdUI` structure that represents the menu that generated the update command. The update handler calls the `Enable` member function of the `CCmdUI` structure through *pCmdUI* to update the user interface.

### Remarks

The Paste menu command and button are enabled or disabled depending on whether the item can be pasted into the document or not.

## <a name="removeitem"></a> COleDocument::RemoveItem

Call this function to remove an item from the document.

```
virtual void RemoveItem(CDocItem* pItem);
```

### Parameters

*pItem*<br/>
Pointer to the document item to be removed.

### Remarks

You typically do not need to call this function explicitly; it is called by the destructors for `COleClientItem` and `COleServerItem`.

## <a name="updatemodifiedflag"></a> COleDocument::UpdateModifiedFlag

Call this function to mark the document as modified if any of the contained OLE items have been modified.

```
virtual void UpdateModifiedFlag();
```

### Remarks

This allows the framework to prompt the user to save the document before closing, even if the native data in the document has not been modified.

## See also

[MFC Sample CONTAINER](../../overview/visual-cpp-samples.md)<br/>
[MFC Sample MFCBIND](../../overview/visual-cpp-samples.md)<br/>
[CDocument Class](../../mfc/reference/cdocument-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)
