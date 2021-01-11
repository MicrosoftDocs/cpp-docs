---
description: "Learn more about: CDocument Class"
title: "CDocument Class"
ms.date: "11/04/2016"
f1_keywords: ["CDocument", "AFXWIN/CDocument", "AFXWIN/CDocument::CDocument", "AFXWIN/CDocument::AddView", "AFXWIN/CDocument::BeginReadChunks", "AFXWIN/CDocument::CanCloseFrame", "AFXWIN/CDocument::ClearChunkList", "AFXWIN/CDocument::ClearPathName", "AFXWIN/CDocument::DeleteContents", "AFXWIN/CDocument::FindChunk", "AFXWIN/CDocument::GetAdapter", "AFXWIN/CDocument::GetDocTemplate", "AFXWIN/CDocument::GetFile", "AFXWIN/CDocument::GetFirstViewPosition", "AFXWIN/CDocument::GetNextView", "AFXWIN/CDocument::GetPathName", "AFXWIN/CDocument::GetThumbnail", "AFXWIN/CDocument::GetTitle", "AFXWIN/CDocument::InitializeSearchContent", "AFXWIN/CDocument::IsModified", "AFXWIN/CDocument::IsSearchAndOrganizeHandler", "AFXWIN/CDocument::LoadDocumentFromStream", "AFXWIN/CDocument::OnBeforeRichPreviewFontChanged", "AFXWIN/CDocument::OnChangedViewList", "AFXWIN/CDocument::OnCloseDocument", "AFXWIN/CDocument::OnCreatePreviewFrame", "AFXWIN/CDocument::OnDocumentEvent", "AFXWIN/CDocument::OnDrawThumbnail", "AFXWIN/CDocument::OnLoadDocumentFromStream", "AFXWIN/CDocument::OnNewDocument", "AFXWIN/CDocument::OnOpenDocument", "AFXWIN/CDocument::OnPreviewHandlerQueryFocus", "AFXWIN/CDocument::OnPreviewHandlerTranslateAccelerator", "AFXWIN/CDocument::OnRichPreviewBackColorChanged", "AFXWIN/CDocument::OnRichPreviewFontChanged", "AFXWIN/CDocument::OnRichPreviewSiteChanged", "AFXWIN/CDocument::OnRichPreviewTextColorChanged", "AFXWIN/CDocument::OnSaveDocument", "AFXWIN/CDocument::OnUnloadHandler", "AFXWIN/CDocument::PreCloseFrame", "AFXWIN/CDocument::ReadNextChunkValue", "AFXWIN/CDocument::ReleaseFile", "AFXWIN/CDocument::RemoveChunk", "AFXWIN/CDocument::RemoveView", "AFXWIN/CDocument::ReportSaveLoadException", "AFXWIN/CDocument::SaveModified", "AFXWIN/CDocument::SetChunkValue", "AFXWIN/CDocument::SetModifiedFlag", "AFXWIN/CDocument::SetPathName", "AFXWIN/CDocument::SetTitle", "AFXWIN/CDocument::UpdateAllViews", "AFXWIN/CDocument::OnFileSendMail", "AFXWIN/CDocument::OnUpdateFileSendMail", "AFXWIN/CDocument::m_bGetThumbnailMode", "AFXWIN/CDocument::m_bPreviewHandlerMode", "AFXWIN/CDocument::m_bSearchMode", "AFXWIN/CDocument::m_clrRichPreviewBackColor", "AFXWIN/CDocument::m_clrRichPreviewTextColor", "AFXWIN/CDocument::m_lfRichPreviewFont"]
helpviewer_keywords: ["CDocument [MFC], CDocument", "CDocument [MFC], AddView", "CDocument [MFC], BeginReadChunks", "CDocument [MFC], CanCloseFrame", "CDocument [MFC], ClearChunkList", "CDocument [MFC], ClearPathName", "CDocument [MFC], DeleteContents", "CDocument [MFC], FindChunk", "CDocument [MFC], GetAdapter", "CDocument [MFC], GetDocTemplate", "CDocument [MFC], GetFile", "CDocument [MFC], GetFirstViewPosition", "CDocument [MFC], GetNextView", "CDocument [MFC], GetPathName", "CDocument [MFC], GetThumbnail", "CDocument [MFC], GetTitle", "CDocument [MFC], InitializeSearchContent", "CDocument [MFC], IsModified", "CDocument [MFC], IsSearchAndOrganizeHandler", "CDocument [MFC], LoadDocumentFromStream", "CDocument [MFC], OnBeforeRichPreviewFontChanged", "CDocument [MFC], OnChangedViewList", "CDocument [MFC], OnCloseDocument", "CDocument [MFC], OnCreatePreviewFrame", "CDocument [MFC], OnDocumentEvent", "CDocument [MFC], OnDrawThumbnail", "CDocument [MFC], OnLoadDocumentFromStream", "CDocument [MFC], OnNewDocument", "CDocument [MFC], OnOpenDocument", "CDocument [MFC], OnPreviewHandlerQueryFocus", "CDocument [MFC], OnPreviewHandlerTranslateAccelerator", "CDocument [MFC], OnRichPreviewBackColorChanged", "CDocument [MFC], OnRichPreviewFontChanged", "CDocument [MFC], OnRichPreviewSiteChanged", "CDocument [MFC], OnRichPreviewTextColorChanged", "CDocument [MFC], OnSaveDocument", "CDocument [MFC], OnUnloadHandler", "CDocument [MFC], PreCloseFrame", "CDocument [MFC], ReadNextChunkValue", "CDocument [MFC], ReleaseFile", "CDocument [MFC], RemoveChunk", "CDocument [MFC], RemoveView", "CDocument [MFC], ReportSaveLoadException", "CDocument [MFC], SaveModified", "CDocument [MFC], SetChunkValue", "CDocument [MFC], SetModifiedFlag", "CDocument [MFC], SetPathName", "CDocument [MFC], SetTitle", "CDocument [MFC], UpdateAllViews", "CDocument [MFC], OnFileSendMail", "CDocument [MFC], OnUpdateFileSendMail", "CDocument [MFC], m_bGetThumbnailMode", "CDocument [MFC], m_bPreviewHandlerMode", "CDocument [MFC], m_bSearchMode", "CDocument [MFC], m_clrRichPreviewBackColor", "CDocument [MFC], m_clrRichPreviewTextColor", "CDocument [MFC], m_lfRichPreviewFont"]
ms.assetid: e5a2891d-e1e1-4599-8c7e-afa9b4945446
---
# CDocument Class

Provides the basic functionality for user-defined document classes.

## Syntax

```
class CDocument : public CCmdTarget
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CDocument::CDocument](#cdocument)|Constructs a `CDocument` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CDocument::AddView](#addview)|Attaches a view to the document.|
|[CDocument::BeginReadChunks](#beginreadchunks)|Initializes chunk reading.|
|[CDocument::CanCloseFrame](#cancloseframe)|Advanced overridable; called before closing a frame window viewing this document.|
|[CDocument::ClearChunkList](#clearchunklist)|Clears the chunk list.|
|[CDocument::ClearPathName](#clearpathname)|Clears the path of the document object.|
|[CDocument::DeleteContents](#deletecontents)|Called to perform cleanup of the document.|
|[CDocument::FindChunk](#findchunk)|Looks for a chunk with specified GUID.|
|[CDocument::GetAdapter](#getadapter)|Returns a pointer to object implementing `IDocument` interface.|
|[CDocument::GetDocTemplate](#getdoctemplate)|Returns a pointer to the document template that describes the type of the document.|
|[CDocument::GetFile](#getfile)|Returns a pointer to the desired `CFile` object.|
|[CDocument::GetFirstViewPosition](#getfirstviewposition)|Returns the position of the first in the list of views; used to begin iteration.|
|[CDocument::GetNextView](#getnextview)|Iterates through the list of views associated with the document.|
|[CDocument::GetPathName](#getpathname)|Returns the path of the document's data file.|
|[CDocument::GetThumbnail](#getthumbnail)|Called to create a bitmap to be used by thumbnail provider to display thumbnail.|
|[CDocument::GetTitle](#gettitle)|Returns the document's title.|
|[CDocument::InitializeSearchContent](#initializesearchcontent)|Called to initialize search content for Search Handler.|
|[CDocument::IsModified](#ismodified)|Indicates whether the document has been modified since it was last saved.|
|[CDocument::IsSearchAndOrganizeHandler](#issearchandorganizehandler)|Tells whether this instance of `CDocument` object was created for Search & Organize handler.|
|[CDocument::LoadDocumentFromStream](#loaddocumentfromstream)|Called to load document data from stream.|
|[CDocument::OnBeforeRichPreviewFontChanged](#onbeforerichpreviewfontchanged)|Called before Rich Preview font is changed.|
|[CDocument::OnChangedViewList](#onchangedviewlist)|Called after a view is added to or removed from the document.|
|[CDocument::OnCloseDocument](#onclosedocument)|Called to close the document.|
|[CDocument::OnCreatePreviewFrame](#oncreatepreviewframe)|Called by the framework when it needs to create a preview frame for Rich Preview.|
|[CDocument::OnDocumentEvent](#ondocumentevent)|Called by the framework in response to a document event.|
|[CDocument::OnDrawThumbnail](#ondrawthumbnail)|Override this method in a derived class to draw content of thumbnail.|
|[CDocument::OnLoadDocumentFromStream](#onloaddocumentfromstream)|Called by the framework when it needs to load the document data from stream.|
|[CDocument::OnNewDocument](#onnewdocument)|Called to create a new document.|
|[CDocument::OnOpenDocument](#onopendocument)|Called to open an existing document.|
|[CDocument::OnPreviewHandlerQueryFocus](#onpreviewhandlerqueryfocus)|Directs the preview handler to return the HWND from calling the GetFocus Function.|
|[CDocument::OnPreviewHandlerTranslateAccelerator](#onpreviewhandlertranslateaccelerator)|Directs the preview handler to handle a keystroke passed up from the message pump of the process in which the preview handler is running.|
|[CDocument::OnRichPreviewBackColorChanged](#onrichpreviewbackcolorchanged)|Called when Rich Preview background color has changed.|
|[CDocument::OnRichPreviewFontChanged](#onrichpreviewfontchanged)|Called when Rich Preview font has changed.|
|[CDocument::OnRichPreviewSiteChanged](#onrichpreviewsitechanged)|Called when Rich Preview site has changed.|
|[CDocument::OnRichPreviewTextColorChanged](#onrichpreviewtextcolorchanged)|Called when Rich Preview text color has changed.|
|[CDocument::OnSaveDocument](#onsavedocument)|Called to save the document to disk.|
|[CDocument::OnUnloadHandler](#onunloadhandler)|Called by the framework when the preview handler is being unloaded.|
|[CDocument::PreCloseFrame](#precloseframe)|Called before the frame window is closed.|
|[CDocument::ReadNextChunkValue](#readnextchunkvalue)|Reads next chunk value.|
|[CDocument::ReleaseFile](#releasefile)|Releases a file to make it available for use by other applications.|
|[CDocument::RemoveChunk](#removechunk)|Removes a chunk with specified GUID.|
|[CDocument::RemoveView](#removeview)|Detaches a view from the document.|
|[CDocument::ReportSaveLoadException](#reportsaveloadexception)|Advanced overridable; called when an open or save operation cannot be completed because of an exception.|
|[CDocument::SaveModified](#savemodified)|Advanced overridable; called to ask the user whether the document should be saved.|
|[CDocument::SetChunkValue](#setchunkvalue)|Sets a chunk value.|
|[CDocument::SetModifiedFlag](#setmodifiedflag)|Sets a flag indicating that you have modified the document since it was last saved.|
|[CDocument::SetPathName](#setpathname)|Sets the path of the data file used by the document.|
|[CDocument::SetTitle](#settitle)|Sets the document's title.|
|[CDocument::UpdateAllViews](#updateallviews)|Notifies all views that document has been modified.|

### Protected Methods

|Name|Description|
|----------|-----------------|
|[CDocument::OnFileSendMail](#onfilesendmail)|Sends a mail message with the document attached.|
|[CDocument::OnUpdateFileSendMail](#onupdatefilesendmail)|Enables the Send Mail command if mail support is present.|

### Public Data Members

|Name|Description|
|----------|-----------------|
|[CDocument::m_bGetThumbnailMode](#m_bgetthumbnailmode)|Specifies that `CDocument` object was created by dllhost for thumbnails. Should be checked in `CView::OnDraw`.|
|[CDocument::m_bPreviewHandlerMode](#m_bpreviewhandlermode)|Specifies that `CDocument` object was created by prevhost for `Rich Preview`. Should be checked in `CView::OnDraw`.|
|[CDocument::m_bSearchMode](#m_bsearchmode)|Specifies that `CDocument` object was created by indexer or other search application.|
|[CDocument::m_clrRichPreviewBackColor](#m_clrrichpreviewbackcolor)|Specifies background color of Rich Preview window. This color is set by host.|
|[CDocument::m_clrRichPreviewTextColor](#m_clrrichpreviewtextcolor)|Specifies foreground color of Rich Preview window. This color is set by host.|
|[CDocument::m_lfRichPreviewFont](#m_lfrichpreviewfont)|Specifies text font for Rich Preview window. This font information is set by host.|

## Remarks

A document represents the unit of data that the user typically opens with the File Open command and saves with the File Save command.

`CDocument` supports standard operations such as creating a document, loading it, and saving it. The framework manipulates documents using the interface defined by `CDocument`.

An application can support more than one type of document; for example, an application might support both spreadsheets and text documents. Each type of document has an associated document template; the document template specifies what resources (for example, menu, icon, or accelerator table) are used for that type of document. Each document contains a pointer to its associated `CDocTemplate` object.

Users interact with a document through the [CView](../../mfc/reference/cview-class.md) object(s) associated with it. A view renders an image of the document in a frame window and interprets user input as operations on the document. A document can have multiple views associated with it. When the user opens a window on a document, the framework creates a view and attaches it to the document. The document template specifies what type of view and frame window are used to display each type of document.

Documents are part of the framework's standard command routing and consequently receive commands from standard user-interface components (such as the File Save menu item). A document receives commands forwarded by the active view. If the document doesn't handle a given command, it forwards the command to the document template that manages it.

When a document's data is modified, each of its views must reflect those modifications. `CDocument` provides the [UpdateAllViews](#updateallviews) member function for you to notify the views of such changes, so the views can repaint themselves as necessary. The framework also prompts the user to save a modified file before closing it.

To implement documents in a typical application, you must do the following:

- Derive a class from `CDocument` for each type of document.

- Add member variables to store each document's data.

- Implement member functions for reading and modifying the document's data. The document's views are the most important users of these member functions.

- Override the [CObject::Serialize](../../mfc/reference/cobject-class.md#serialize) member function in your document class to write and read the document's data to and from disk.

`CDocument` supports sending your document via mail if mail support (MAPI) is present. See the articles [MAPI](../../mfc/mapi.md) and [MAPI Support in MFC](../../mfc/mapi-support-in-mfc.md).

For more information on `CDocument`, see [Serialization](../../mfc/serialization-in-mfc.md), [Document/View Architecture Topics](../../mfc/document-view-architecture.md), and [Document/View Creation](../../mfc/document-view-creation.md).

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

`CDocument`

## Requirements

**Header:** afxwin.h

## <a name="addview"></a> CDocument::AddView

Call this function to attach a view to the document.

```cpp
void AddView(CView* pView);
```

### Parameters

*pView*<br/>
Points to the view being added.

### Remarks

This function adds the specified view to the list of views associated with the document; the function also sets the view's document pointer to this document. The framework calls this function when attaching a newly created view object to a document; this occurs in response to a File New, File Open, or New Window command or when a splitter window is split.

Call this function only if you are manually creating and attaching a view. Typically you will let the framework connect documents and views by defining a [CDocTemplate](../../mfc/reference/cdoctemplate-class.md) object to associate a document class, view class, and frame window class.

### Example

[!code-cpp[NVC_MFCDocViewSDI#12](../../mfc/codesnippet/cpp/cdocument-class_1.cpp)]

## <a name="beginreadchunks"></a> CDocument::BeginReadChunks

Initializes chunk reading.

```
virtual void BeginReadChunks ();
```

### Remarks

## <a name="cancloseframe"></a> CDocument::CanCloseFrame

Called by the framework before a frame window displaying the document is closed.

```
virtual BOOL CanCloseFrame(CFrameWnd* pFrame);
```

### Parameters

*pFrame*<br/>
Points to the frame window of a view attached to the document.

### Return Value

Nonzero if it is safe to close the frame window; otherwise 0.

### Remarks

The default implementation checks if there are other frame windows displaying the document. If the specified frame window is the last one that displays the document, the function prompts the user to save the document if it has been modified. Override this function if you want to perform special processing when a frame window is closed. This is an advanced overridable.

## <a name="cdocument"></a> CDocument::CDocument

Constructs a `CDocument` object.

```
CDocument();
```

### Remarks

The framework handles document creation for you. Override the [OnNewDocument](#onnewdocument) member function to perform initialization on a per-document basis; this is particularly important in single document interface (SDI) applications.

## <a name="clearchunklist"></a> CDocument::ClearChunkList

Clears the chunk list.

```
virtual void ClearChunkList ();
```

### Remarks

## <a name="clearpathname"></a> CDocument::ClearPathName

Clears the path of the document object.

```
virtual void ClearPathName();
```

### Remarks

Clearing the path from a `CDocument` object causes the application to prompt the user when the document is next saved. This makes a **Save** command behave like a **Save As** command.

## <a name="deletecontents"></a> CDocument::DeleteContents

Called by the framework to delete the document's data without destroying the `CDocument` object itself.

```
virtual void DeleteContents();
```

### Remarks

It is called just before the document is to be destroyed. It is also called to ensure that a document is empty before it is reused. This is particularly important for an SDI application, which uses only one document; the document is reused whenever the user creates or opens another document. Call this function to implement an "Edit Clear All" or similar command that deletes all of the document's data. The default implementation of this function does nothing. Override this function to delete the data in your document.

### Example

[!code-cpp[NVC_MFCDocView#57](../../mfc/codesnippet/cpp/cdocument-class_2.cpp)]

## <a name="findchunk"></a> CDocument::FindChunk

Looks for a chunk with a specified GUID.

```
virtual POSITION FindChunk(
    REFCLSID guid,
    DWORD pid);
```

### Parameters

*guid*<br/>
Specifies the GUID of a chunk to find.

*pid*<br/>
Specifies a PID of a chunk to find.

### Return Value

Position in the internal chunk list if successful. Otherwise NULL.

### Remarks

## <a name="getadapter"></a> CDocument::GetAdapter

Returns a pointer to an object implementing the `IDocument` interface.

```
virtual ATL::IDocument* GetAdapter();
```

### Return Value

A pointer to an object implementing the `IDocument` interface.

### Remarks

## <a name="getdoctemplate"></a> CDocument::GetDocTemplate

Call this function to get a pointer to the document template for this document type.

```
CDocTemplate* GetDocTemplate() const;
```

### Return Value

A pointer to the document template for this document type, or NULL if the document is not managed by a document template.

### Example

[!code-cpp[NVC_MFCDocView#58](../../mfc/codesnippet/cpp/cdocument-class_3.cpp)]

## <a name="getfile"></a> CDocument::GetFile

Call this member function to get a pointer to a `CFile` object.

```
virtual CFile* GetFile(
    LPCTSTR lpszFileName,
    UINT nOpenFlags,
    CFileException* pError);
```

### Parameters

*lpszFileName*<br/>
A string that is the path to the desired file. The path may be relative or absolute.

*pError*<br/>
A pointer to an existing file-exception object that indicates the completion status of the operation.

*nOpenFlags*<br/>
Sharing and access mode. Specifies the action to take when opening the file. You can combine options listed in the CFile constructor [CFile::CFile](../../mfc/reference/cfile-class.md#cfile) by using the bitwise OR (&#124;) operator. One access permission and one share option are required; the `modeCreate` and `modeNoInherit` modes are optional.

### Return Value

A pointer to a `CFile` object.

## <a name="getfirstviewposition"></a> CDocument::GetFirstViewPosition

Call this function to get the position of the first view in the list of views associated with the document.

```
virtual POSITION GetFirstViewPosition() const;
```

### Return Value

A POSITION value that can be used for iteration with the [GetNextView](#getnextview) member function.

### Example

[!code-cpp[NVC_MFCDocView#59](../../mfc/codesnippet/cpp/cdocument-class_4.cpp)]

## <a name="getnextview"></a> CDocument::GetNextView

Call this function to iterate through all of the document's views.

```
virtual CView* GetNextView(POSITION& rPosition) const;
```

### Parameters

*rPosition*<br/>
A reference to a POSITION value returned by a previous call to the `GetNextView` or [GetFirstViewPosition](#getfirstviewposition) member functions. This value must not be NULL.

### Return Value

A pointer to the view identified by *rPosition*.

### Remarks

The function returns the view identified by *rPosition* and then sets *rPosition* to the POSITION value of the next view in the list. If the retrieved view is the last in the list, then *rPosition* is set to NULL.

### Example

[!code-cpp[NVC_MFCDocView#59](../../mfc/codesnippet/cpp/cdocument-class_4.cpp)]

## <a name="getpathname"></a> CDocument::GetPathName

Call this function to get the fully qualified path of the document's disk file.

```
const CString& GetPathName() const;
```

### Return Value

The document's fully qualified path. This string is empty if the document has not been saved or does not have a disk file associated with it.

## <a name="getthumbnail"></a> CDocument::GetThumbnail

Creates a bitmap to be used by the thumbnail provider to display the thumbnail.

```
virtual BOOL GetThumbnail(
    UINT cx,
    HBITMAP* phbmp,
    DWORD* pdwAlpha);
```

### Parameters

*cx*<br/>
Specifies the width and height of the bitmap.

*phbmp*<br/>
Contains a handle to a bitmap, when the function returns successfully.

*pdwAlpha*<br/>
Contains a DWORD specifying the alpha channel value, when the function returns successfully.

### Return Value

Returns TRUE if a bitmap for the thumbnail was created successfully; otherwise FALSE.

### Remarks

## <a name="gettitle"></a> CDocument::GetTitle

Call this function to get the document's title, which is usually derived from the document's filename.

```
const CString& GetTitle() const;
```

### Return Value

The document's title.

## <a name="initializesearchcontent"></a> CDocument::InitializeSearchContent

Called to initialize search content for the Search Handler.

```
virtual void InitializeSearchContent ();
```

### Remarks

Override this method in a derived class to initialize search content. The content should be a string with parts delimited by ";". For example, "point; rectangle; ole item".

## <a name="ismodified"></a> CDocument::IsModified

Call this function to determine whether the document has been modified since it was last saved.

```
virtual BOOL IsModified();
```

### Return Value

Nonzero if the document has been modified since it was last saved; otherwise 0.

## <a name="issearchandorganizehandler"></a> CDocument::IsSearchAndOrganizeHandler

Tells whether this instance of `CDocument` was created for the Search & Organize handler.

```
BOOL IsSearchAndOrganizeHandler() const;
```

### Return Value

Returns TRUE if this instance of `CDocument` was created for the Search & Organize handler.

### Remarks

Currently this function returns TRUE only for Rich Preview handlers implemented in an out of process server. You can set the appropriate flags (m_bPreviewHandlerMode, m_bSearchMode, m_bGetThumbnailMode) at your application level to make this function return TRUE.

## <a name="loaddocumentfromstream"></a> CDocument::LoadDocumentFromStream

Called to load document data from a stream.

```
virtual HRESULT LoadDocumentFromStream(
    IStream* pStream,
    DWORD dwGrfMode);
```

### Parameters

*pStream*<br/>
A pointer to a stream. This stream is supplied by the Shell.

*dwGrfMode*<br/>
Access mode to the stream.

### Return Value

S_OK if the load operation succeeds, otherwise HRESULT with an error code.

### Remarks

You can override this method in a derived class to customize how to load data from the stream.

## <a name="m_bgetthumbnailmode"></a> CDocument::m_bGetThumbnailMode

Specifies that the `CDocument` object was created by dllhost for thumbnails. Should be checked in `CView::OnDraw`.

```
BOOL m_bGetThumbnailMode;
```

### Remarks

`TRUE` indicates that the document was created by dllhost for thumbnails.

## <a name="m_bpreviewhandlermode"></a> CDocument::m_bPreviewHandlerMode

Specifies that the `CDocument` object was created by prevhost for Rich Preview. Should be checked in `CView::OnDraw`.

```
BOOL m_bPreviewHandlerMode;
```

### Remarks

TRUE indicates that the document was created by prevhost for Rich Preview.

## <a name="m_bsearchmode"></a> CDocument::m_bSearchMode

Specifies that the `CDocument` object was created by indexer or by another search application.

```
BOOL m_bSearchMode;
```

### Remarks

`TRUE` indicates that the document was created by indexer or by another search application.

## <a name="m_clrrichpreviewbackcolor"></a> CDocument::m_clrRichPreviewBackColor

Specifies the background color of the Rich Preview window. This color is set by host.

```
COLORREF m_clrRichPreviewBackColor;
```

### Remarks

## <a name="m_clrrichpreviewtextcolor"></a> CDocument::m_clrRichPreviewTextColor

Specifies the foreground color of the Rich Preview window. This color is set by host.

```
COLORREF m_clrRichPreviewTextColor;
```

### Remarks

## <a name="m_lfrichpreviewfont"></a> CDocument::m_lfRichPreviewFont

Specifies the text font for the Rich Preview window. This font information is set by host.

```
CFont m_lfRichPreviewFont;
```

### Remarks

## <a name="onbeforerichpreviewfontchanged"></a> CDocument::OnBeforeRichPreviewFontChanged

Called before the Rich Preview font is changed.

```
virtual void OnBeforeRichPreviewFontChanged();
```

### Remarks

## <a name="onchangedviewlist"></a> CDocument::OnChangedViewList

Called by the framework after a view is added to or removed from the document.

```
virtual void OnChangedViewList();
```

### Remarks

The default implementation of this function checks whether the last view is being removed and, if so, deletes the document. Override this function if you want to perform special processing when the framework adds or removes a view. For example, if you want a document to remain open even when there are no views attached to it, override this function.

## <a name="onclosedocument"></a> CDocument::OnCloseDocument

Called by the framework when the document is closed, typically as part of the File Close command.

```
virtual void OnCloseDocument();
```

### Remarks

The default implementation of this function destroys all of the frames used for viewing the document, closes the view, cleans up the document's contents, and then calls the [DeleteContents](#deletecontents) member function to delete the document's data.

Override this function if you want to perform special cleanup processing when the framework closes a document. For example, if the document represents a record in a database, you may want to override this function to close the database. You should call the base class version of this function from your override.

## <a name="oncreatepreviewframe"></a> CDocument::OnCreatePreviewFrame

Called by the framework when it needs to create a preview frame for Rich Preview.

```
virtual BOOL OnCreatePreviewFrame();
```

### Return Value

Returns TRUE if the frame is created successfully; otherwise FALSE.

### Remarks

## <a name="ondocumentevent"></a> CDocument::OnDocumentEvent

Called by the framework in response to a document event.

```
virtual void OnDocumentEvent(DocumentEvent deEvent);
```

### Parameters

*deEvent*<br/>
[in] An enumerated data type that describes the type of event.

### Remarks

Document events may affect multiple classes. This method is responsible for handling document events that affect classes other than the [CDocument Class](../../mfc/reference/cdocument-class.md). Currently, the only class that must respond to document events is the [CDataRecoveryHandler Class](../../mfc/reference/cdatarecoveryhandler-class.md). The `CDocument` class has other overrideable methods responsible for handling the effect on the `CDocument`.

The following table lists the possible values for *deEvent* and the events that they correspond to.

|Value|Corresponding Event|
|-----------|-------------------------|
|`onAfterNewDocument`|A new document was created.|
|`onAfterOpenDocument`|A new document was opened.|
|`onAfterSaveDocument`|The document was saved.|
|`onAfterCloseDocument`|The document was closed.|

## <a name="ondrawthumbnail"></a> CDocument::OnDrawThumbnail

Override this method in a derived class to draw the thumbnail.

```
virtual void OnDrawThumbnail(
    CDC& dc,
    LPRECT lprcBounds);
```

### Parameters

*dc*<br/>
A reference to a device context.

*lprcBounds*<br/>
Specifies a bounding rectangle of the area where the thumbnail should be drawn.

### Remarks

## <a name="onfilesendmail"></a> CDocument::OnFileSendMail

Sends a message via the resident mail host (if any) with the document as an attachment.

```cpp
void OnFileSendMail();
```

### Remarks

`OnFileSendMail` calls [OnSaveDocument](#onsavedocument) to serialize (save) untitled and modified documents to a temporary file, which is then sent via electronic mail. If the document has not been modified, a temporary file is not needed; the original is sent. `OnFileSendMail` loads MAPI32.DLL if it has not already been loaded.

A special implementation of `OnFileSendMail` for [COleDocument](../../mfc/reference/coledocument-class.md) handles compound files correctly.

`CDocument` supports sending your document via mail if mail support (MAPI) is present. See the articles [MAPI Topics](../../mfc/mapi.md) and [MAPI Support in MFC](../../mfc/mapi-support-in-mfc.md).

## <a name="onloaddocumentfromstream"></a> CDocument::OnLoadDocumentFromStream

Called by the framework when it needs to load the document data from a stream.

```
virtual HRESULT OnLoadDocumentFromStream(
    IStream* pStream,
    DWORD grfMode);
```

### Parameters

*pStream*<br/>
A pointer to an incoming stream.

*grfMode*<br/>
Access mode to the stream.

### Return Value

S_OK if the load is successful; otherwise an error code.

### Remarks

## <a name="onnewdocument"></a> CDocument::OnNewDocument

Called by the framework as part of the File New command.

```
virtual BOOL OnNewDocument();
```

### Return Value

Nonzero if the document was successfully initialized; otherwise 0.

### Remarks

The default implementation of this function calls the [DeleteContents](#deletecontents) member function to ensure that the document is empty and then marks the new document as clean. Override this function to initialize the data structure for a new document. You should call the base class version of this function from your override.

If the user chooses the File New command in an SDI application, the framework uses this function to reinitialize the existing document, rather than creating a new one. If the user chooses File New in a multiple document interface (MDI) application, the framework creates a new document each time and then calls this function to initialize it. You must place your initialization code in this function instead of in the constructor for the File New command to be effective in SDI applications.

Note that there are cases where `OnNewDocument` is called twice. This occurs when the document is embedded as an ActiveX Document Server. The function is first called by the `CreateInstance` method (exposed by the `COleObjectFactory`-derived class) and a second time by the `InitNew` method (exposed by the `COleServerDoc`-derived class).

### Example

The following examples illustrate alternative methods of initializing a document object.

[!code-cpp[NVC_MFCDocView#60](../../mfc/codesnippet/cpp/cdocument-class_5.cpp)]

[!code-cpp[NVC_MFCDocView#61](../../mfc/codesnippet/cpp/cdocument-class_6.cpp)]

[!code-cpp[NVC_MFCDocView#62](../../mfc/codesnippet/cpp/cdocument-class_7.cpp)]

## <a name="onopendocument"></a> CDocument::OnOpenDocument

Called by the framework as part of the File Open command.

```
virtual BOOL OnOpenDocument(LPCTSTR lpszPathName);
```

### Parameters

*lpszPathName*<br/>
Points to the path of the document to be opened.

### Return Value

Nonzero if the document was successfully loaded; otherwise 0.

### Remarks

The default implementation of this function opens the specified file, calls the [DeleteContents](#deletecontents) member function to ensure that the document is empty, calls [CObject::Serialize](../../mfc/reference/cobject-class.md#serialize) to read the file's contents, and then marks the document as clean. Override this function if you want to use something other than the archive mechanism or the file mechanism. For example, you might write an application where documents represent records in a database rather than separate files.

If the user chooses the File Open command in an SDI application, the framework uses this function to reinitialize the existing `CDocument` object, rather than creating a new one. If the user chooses File Open in an MDI application, the framework constructs a new `CDocument` object each time and then calls this function to initialize it. You must place your initialization code in this function instead of in the constructor for the File Open command to be effective in SDI applications.

### Example

The following examples illustrate alternative methods of initializing a document object.

[!code-cpp[NVC_MFCDocView#60](../../mfc/codesnippet/cpp/cdocument-class_5.cpp)]

[!code-cpp[NVC_MFCDocView#61](../../mfc/codesnippet/cpp/cdocument-class_6.cpp)]

[!code-cpp[NVC_MFCDocView#62](../../mfc/codesnippet/cpp/cdocument-class_7.cpp)]

[!code-cpp[NVC_MFCDocView#63](../../mfc/codesnippet/cpp/cdocument-class_8.cpp)]

## <a name="onpreviewhandlerqueryfocus"></a> CDocument::OnPreviewHandlerQueryFocus

Directs the preview handler to return the HWND retrieved from calling the `GetFocus` function.

```
virtual HRESULT OnPreviewHandlerQueryFocus(HWND* phwnd);
```

### Parameters

*phwnd*<br/>
[out] When this method returns, contains a pointer to the HWND returned from calling the `GetFocus` function from the preview handler's foreground thread.

### Return Value

Returns S_OK if successful; or an error value otherwise.

### Remarks

## <a name="onpreviewhandlertranslateaccelerator"></a> CDocument::OnPreviewHandlerTranslateAccelerator

Directs the preview handler to handle a keystroke passed up from the message pump of the process in which the preview handler is running.

```
virtual HRESULT OnPreviewHandlerTranslateAccelerator(MSG* pmsg);
```

### Parameters

*pmsg*<br/>
[in] A pointer to a window message.

### Return Value

If the keystroke message can be processed by the preview handler, the handler processes it and returns S_OK. If the preview handler cannot process the keystroke message, it offers it to the host via `IPreviewHandlerFrame::TranslateAccelerator`. If the host processes the message, this method returns S_OK. If the host does not process the message, this method returns S_FALSE.

### Remarks

## <a name="onrichpreviewbackcolorchanged"></a> CDocument::OnRichPreviewBackColorChanged

Called when the Rich Preview background color has changed.

```
virtual void OnRichPreviewBackColorChanged();
```

### Remarks

## <a name="onrichpreviewfontchanged"></a> CDocument::OnRichPreviewFontChanged

Called when the Rich Preview font has changed.

```
virtual void OnRichPreviewFontChanged();
```

### Remarks

## <a name="onrichpreviewsitechanged"></a> CDocument::OnRichPreviewSiteChanged

Called when the Rich Preview site has changed.

```
virtual void OnRichPreviewSiteChanged();
```

### Remarks

## <a name="onrichpreviewtextcolorchanged"></a> CDocument::OnRichPreviewTextColorChanged

Called when the Rich Preview text color has changed.

```
virtual void OnRichPreviewTextColorChanged();
```

### Remarks

## <a name="onsavedocument"></a> CDocument::OnSaveDocument

Called by the framework as part of the File Save or File Save As command.

```
virtual BOOL OnSaveDocument(LPCTSTR lpszPathName);
```

### Parameters

*lpszPathName*<br/>
Points to the fully qualified path to which the file should be saved.

### Return Value

Nonzero if the document was successfully saved; otherwise 0.

### Remarks

The default implementation of this function opens the specified file, calls [CObject::Serialize](../../mfc/reference/cobject-class.md#serialize) to write the document's data to the file, and then marks the document as clean. Override this function if you want to perform special processing when the framework saves a document. For example, you might write an application where documents represent records in a database rather than separate files.

## <a name="onunloadhandler"></a> CDocument::OnUnloadHandler

Called by the framework when the preview handler is unloaded.

```
virtual void OnUnloadHandler();
```

### Remarks

## <a name="onupdatefilesendmail"></a> CDocument::OnUpdateFileSendMail

Enables the ID_FILE_SEND_MAIL command if mail support (MAPI) is present.

```cpp
void OnUpdateFileSendMail(CCmdUI* pCmdUI);
```

### Parameters

*pCmdUI*<br/>
A pointer to the [CCmdUI](../../mfc/reference/ccmdui-class.md) object associated with the ID_FILE_SEND_MAIL command.

### Remarks

Otherwise the function removes the ID_FILE_SEND_MAIL command from the menu, including separators above or below the menu item as appropriate. MAPI is enabled if MAPI32.DLL is present in the path and, in the [Mail] section of the WIN.INI file, MAPI=1. Most applications put this command on the File menu.

`CDocument` supports sending your document via mail if mail support (MAPI) is present. See the articles [MAPI Topics](../../mfc/mapi.md) and [MAPI Support in MFC](../../mfc/mapi-support-in-mfc.md).

## <a name="precloseframe"></a> CDocument::PreCloseFrame

This member function is called by the framework before the frame window is destroyed.

```
virtual void PreCloseFrame(CFrameWnd* pFrame);
```

### Parameters

*pFrame*<br/>
Pointer to the [CFrameWnd](../../mfc/reference/cframewnd-class.md) that holds the associated `CDocument` object.

### Remarks

It can be overridden to provide custom cleanup, but be sure to call the base class as well.

The default of `PreCloseFrame` does nothing in `CDocument`. The `CDocument`-derived classes [COleDocument](../../mfc/reference/coledocument-class.md) and [CRichEditDoc](../../mfc/reference/cricheditdoc-class.md) use this member function.

## <a name="readnextchunkvalue"></a> CDocument::ReadNextChunkValue

Reads the next chunk value.

```
virtual BOOL ReadNextChunkValue(IFilterChunkValue** ppValue);
```

### Parameters

*ppValue*<br/>
[out] When the function returns, *ppValue* contains the value that was read.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

## <a name="releasefile"></a> CDocument::ReleaseFile

This member function is called by the framework to release a file, making it available for use by other applications.

```
virtual void ReleaseFile(
    CFile* pFile,
    BOOL bAbort);
```

### Parameters

*pFile*<br/>
A pointer to the CFile object to be released.

*bAbort*<br/>
Specifies whether the file is to be released by using either `CFile::Close` or `CFile::Abort`. FALSE if the file is to be released using [CFile::Close](../../mfc/reference/cfile-class.md#close); TRUE if the file is to be released using [CFile::Abort](../../mfc/reference/cfile-class.md#abort).

### Remarks

If *bAbort* is TRUE, `ReleaseFile` calls `CFile::Abort`, and the file is released. `CFile::Abort` will not throw an exception.

If *bAbort* is FALSE, `ReleaseFile` calls `CFile::Close` and the file is released.

Override this member function to require an action by the user before the file is released.

## <a name="removechunk"></a> CDocument::RemoveChunk

Removes a chunk with the specified GUID.

```
virtual void RemoveChunk(
    REFCLSID guid,
    DWORD pid);
```

### Parameters

*Guid*<br/>
Specifies the GUID of a chunk to be removed.

*Pid*<br/>
Specifies the PID of a chunk to be removed.

### Remarks

## <a name="removeview"></a> CDocument::RemoveView

Call this function to detach a view from a document.

```cpp
void RemoveView(CView* pView);
```

### Parameters

*pView*<br/>
Points to the view being removed.

### Remarks

This function removes the specified view from the list of views associated with the document; it also sets the view's document pointer to NULL. This function is called by the framework when a frame window is closed or a pane of a splitter window is closed.

Call this function only if you are manually detaching a view. Typically you will let the framework detach documents and views by defining a [CDocTemplate](../../mfc/reference/cdoctemplate-class.md) object to associate a document class, view class, and frame window class.

See the example at [AddView](#addview) for a sample implementation.

## <a name="reportsaveloadexception"></a> CDocument::ReportSaveLoadException

Called if an exception is thrown (typically a [CFileException](../../mfc/reference/cfileexception-class.md) or [CArchiveException](../../mfc/reference/carchiveexception-class.md)) while saving or loading the document.

```
virtual void ReportSaveLoadException(
    LPCTSTR lpszPathName,
    CException* e,
    BOOL bSaving,
    UINT nIDPDefault);
```

### Parameters

*lpszPathName*<br/>
Points to name of document that was being saved or loaded.

*e*<br/>
Points to the exception that was thrown. May be NULL.

*bSaving*<br/>
Flag indicating what operation was in progress; nonzero if the document was being saved, 0 if the document was being loaded.

*nIDPDefault*<br/>
Identifier of the error message to be displayed if the function does not specify a more specific one.

### Remarks

The default implementation examines the exception object and looks for an error message that specifically describes the cause. If a specific message is not found or if *e* is NULL, the general message specified by the *nIDPDefault* parameter is used. The function then displays a message box containing the error message. Override this function if you want to provide additional, customized failure messages. This is an advanced overridable.

## <a name="savemodified"></a> CDocument::SaveModified

Called by the framework before a modified document is to be closed.

```
virtual BOOL SaveModified();
```

### Return Value

Nonzero if it is safe to continue and close the document; 0 if the document should not be closed.

### Remarks

The default implementation of this function displays a message box asking the user whether to save the changes to the document, if any have been made. Override this function if your program requires a different prompting procedure. This is an advanced overridable.

## <a name="setchunkvalue"></a> CDocument::SetChunkValue

Sets a chunk value.

```
virtual BOOL SetChunkValue (IFilterChunkValue* pValue);
```

### Parameters

*pValue*<br/>
Specifies a chunk value to set.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

## <a name="setmodifiedflag"></a> CDocument::SetModifiedFlag

Call this function after you have made any modifications to the document.

```
virtual void SetModifiedFlag(BOOL bModified = TRUE);
```

### Parameters

*bModified*<br/>
Flag indicating whether the document has been modified.

### Remarks

By calling this function consistently, you ensure that the framework prompts the user to save changes before closing a document. Typically you should use the default value of TRUE for the *bModified* parameter. To mark a document as clean (unmodified), call this function with a value of FALSE.

## <a name="setpathname"></a> CDocument::SetPathName

Call this function to specify the fully qualified path of the document's disk file.

```
virtual void SetPathName(
    LPCTSTR lpszPathName,
    BOOL bAddToMRU = TRUE);
```

### Parameters

*lpszPathName*<br/>
Points to the string to be used as the path for the document.

*bAddToMRU*<br/>
Determines whether the filename is added to the most recently used (MRU) file list. If TRUE, the filename is added; if FALSE, it is not added.

### Remarks

Depending on the value of *bAddToMRU* the path is added, or not added, to the MRU list maintained by the application. Note that some documents are not associated with a disk file. Call this function only if you are overriding the default implementation for opening and saving files used by the framework.

## <a name="settitle"></a> CDocument::SetTitle

Call this function to specify the document's title (the string displayed in the title bar of a frame window).

```
virtual void SetTitle(LPCTSTR lpszTitle);
```

### Parameters

*lpszTitle*<br/>
Points to the string to be used as the document's title.

### Remarks

Calling this function updates the titles of all frame windows that display the document.

## <a name="updateallviews"></a> CDocument::UpdateAllViews

Call this function after the document has been modified.

```cpp
void UpdateAllViews(
    CView* pSender,
    LPARAM lHint = 0L,
    CObject* pHint = NULL);
```

### Parameters

*pSender*<br/>
Points to the view that modified the document, or NULL if all views are to be updated.

*lHint*<br/>
Contains information about the modification.

*pHint*<br/>
Points to an object storing information about the modification.

### Remarks

You should call this function after you call the [SetModifiedFlag](#setmodifiedflag) member function. This function informs each view attached to the document, except for the view specified by *pSender*, that the document has been modified. You typically call this function from your view class after the user has changed the document through a view.

This function calls the [CView::OnUpdate](../../mfc/reference/cview-class.md#onupdate) member function for each of the document's views except the sending view, passing *pHint* and *lHint*. Use these parameters to pass information to the views about the modifications made to the document. You can encode information using *lHint* and/or you can define a [CObject](../../mfc/reference/cobject-class.md)-derived class to store information about the modifications and pass an object of that class using *pHint*. Override the `CView::OnUpdate` member function in your [CView](../../mfc/reference/cview-class.md)-derived class to optimize the updating of the view's display based on the information passed.

### Example

[!code-cpp[NVC_MFCDocView#64](../../mfc/codesnippet/cpp/cdocument-class_9.cpp)]

## See also

[MFC Sample MDIDOCVW](../../overview/visual-cpp-samples.md)<br/>
[MFC Sample SNAPVW](../../overview/visual-cpp-samples.md)<br/>
[MFC Sample NPP](../../overview/visual-cpp-samples.md)<br/>
[CCmdTarget Class](../../mfc/reference/ccmdtarget-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[CCmdTarget Class](../../mfc/reference/ccmdtarget-class.md)<br/>
[CView Class](../../mfc/reference/cview-class.md)<br/>
[CDocTemplate Class](../../mfc/reference/cdoctemplate-class.md)
