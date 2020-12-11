---
description: "Learn more about: CDocTemplate Class"
title: "CDocTemplate Class"
ms.date: "11/04/2016"
f1_keywords: ["CDocTemplate", "AFXWIN/CDocTemplate", "AFXWIN/CDocTemplate::CDocTemplate", "AFXWIN/CDocTemplate::AddDocument", "AFXWIN/CDocTemplate::CloseAllDocuments", "AFXWIN/CDocTemplate::CreateNewDocument", "AFXWIN/CDocTemplate::CreateNewFrame", "AFXWIN/CDocTemplate::CreateOleFrame", "AFXWIN/CDocTemplate::CreatePreviewFrame", "AFXWIN/CDocTemplate::GetDocString", "AFXWIN/CDocTemplate::GetFirstDocPosition", "AFXWIN/CDocTemplate::GetNextDoc", "AFXWIN/CDocTemplate::InitialUpdateFrame", "AFXWIN/CDocTemplate::LoadTemplate", "AFXWIN/CDocTemplate::MatchDocType", "AFXWIN/CDocTemplate::OpenDocumentFile", "AFXWIN/CDocTemplate::RemoveDocument", "AFXWIN/CDocTemplate::SaveAllModified", "AFXWIN/CDocTemplate::SetContainerInfo", "AFXWIN/CDocTemplate::SetDefaultTitle", "AFXWIN/CDocTemplate::SetPreviewInfo", "AFXWIN/CDocTemplate::SetServerInfo"]
helpviewer_keywords: ["CDocTemplate [MFC], CDocTemplate", "CDocTemplate [MFC], AddDocument", "CDocTemplate [MFC], CloseAllDocuments", "CDocTemplate [MFC], CreateNewDocument", "CDocTemplate [MFC], CreateNewFrame", "CDocTemplate [MFC], CreateOleFrame", "CDocTemplate [MFC], CreatePreviewFrame", "CDocTemplate [MFC], GetDocString", "CDocTemplate [MFC], GetFirstDocPosition", "CDocTemplate [MFC], GetNextDoc", "CDocTemplate [MFC], InitialUpdateFrame", "CDocTemplate [MFC], LoadTemplate", "CDocTemplate [MFC], MatchDocType", "CDocTemplate [MFC], OpenDocumentFile", "CDocTemplate [MFC], RemoveDocument", "CDocTemplate [MFC], SaveAllModified", "CDocTemplate [MFC], SetContainerInfo", "CDocTemplate [MFC], SetDefaultTitle", "CDocTemplate [MFC], SetPreviewInfo", "CDocTemplate [MFC], SetServerInfo"]
ms.assetid: 14b41a1f-bf9d-4eac-b6a8-4c54ffcc77f6
---
# CDocTemplate Class

An abstract base class that defines the basic functionality for document templates.

## Syntax

```
class CDocTemplate : public CCmdTarget
```

## Members

### Protected Constructors

|Name|Description|
|----------|-----------------|
|[CDocTemplate::CDocTemplate](#cdoctemplate)|Constructs a `CDocTemplate` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CDocTemplate::AddDocument](#adddocument)|Adds a document to a template.|
|[CDocTemplate::CloseAllDocuments](#closealldocuments)|Closes all documents associated with this template.|
|[CDocTemplate::CreateNewDocument](#createnewdocument)|Creates a new document.|
|[CDocTemplate::CreateNewFrame](#createnewframe)|Creates a new frame window containing a document and view.|
|[CDocTemplate::CreateOleFrame](#createoleframe)|Creates an OLE-enabled frame window.|
|[CDocTemplate::CreatePreviewFrame](#createpreviewframe)|Creates a child frame used for Rich Preview.|
|[CDocTemplate::GetDocString](#getdocstring)|Retrieves a string associated with the document type.|
|[CDocTemplate::GetFirstDocPosition](#getfirstdocposition)|Retrieves the position of the first document associated with this template.|
|[CDocTemplate::GetNextDoc](#getnextdoc)|Retrieves a document and the position of the next one.|
|[CDocTemplate::InitialUpdateFrame](#initialupdateframe)|Initializes the frame window, and optionally makes it visible.|
|[CDocTemplate::LoadTemplate](#loadtemplate)|Loads the resources for a given `CDocTemplate` or derived class.|
|[CDocTemplate::MatchDocType](#matchdoctype)|Determines the degree of confidence in the match between a document type and this template.|
|[CDocTemplate::OpenDocumentFile](#opendocumentfile)|Opens a file specified by a pathname.|
|[CDocTemplate::RemoveDocument](#removedocument)|Removes a document from a template.|
|[CDocTemplate::SaveAllModified](#saveallmodified)|Saves all documents associated with this template which have been modified.|
|[CDocTemplate::SetContainerInfo](#setcontainerinfo)|Determines the resources for OLE containers when editing an in-place OLE item.|
|[CDocTemplate::SetDefaultTitle](#setdefaulttitle)|Displays the default title in the document window's title bar.|
|[CDocTemplate::SetPreviewInfo](#setpreviewinfo)|Setups out of process preview handler.|
|[CDocTemplate::SetServerInfo](#setserverinfo)|Determines the resources and classes when the server document is embedded or edited in-place.|

## Remarks

You usually create one or more document templates in the implementation of your application's `InitInstance` function. A document template defines the relationships among three types of classes:

- A document class, which you derive from `CDocument`.

- A view class, which displays data from the document class listed above. You can derive this class from `CView`, `CScrollView`, `CFormView`, or `CEditView`. (You can also use `CEditView` directly.)

- A frame window class, which contains the view. For a single document interface (SDI) application, you derive this class from `CFrameWnd`. For a multiple document interface (MDI) application, you derive this class from `CMDIChildWnd`. If you don't need to customize the behavior of the frame window, you can use `CFrameWnd` or `CMDIChildWnd` directly without deriving your own class.

Your application has one document template for each type of document that it supports. For example, if your application supports both spreadsheets and text documents, the application has two document template objects. Each document template is responsible for creating and managing all the documents of its type.

The document template stores pointers to the `CRuntimeClass` objects for the document, view, and frame window classes. These `CRuntimeClass` objects are specified when constructing a document template.

The document template contains the ID of the resources used with the document type (such as menu, icon, or accelerator table resources). The document template also has strings containing additional information about its document type. These include the name of the document type (for example, "Worksheet") and the file extension (for example, ".xls"). Optionally, it can contain other strings used by the application's user interface, the Windows File Manager, and Object Linking and Embedding (OLE) support.

If your application is an OLE container and/or server, the document template also defines the ID of the menu used during in-place activation. If your application is an OLE server, the document template defines the ID of the toolbar and menu used during in-place activation. You specify these additional OLE resources by calling `SetContainerInfo` and `SetServerInfo`.

Because `CDocTemplate` is an abstract class, you cannot use the class directly. A typical application uses one of the two `CDocTemplate`-derived classes provided by the Microsoft Foundation Class Library: `CSingleDocTemplate`, which implements SDI, and `CMultiDocTemplate`, which implements MDI. See those classes for more information on using document templates.

If your application requires a user-interface paradigm that is fundamentally different from SDI or MDI, you can derive your own class from `CDocTemplate`.

For more information on `CDocTemplate`, see [Document Templates and the Document/View Creation Process](../../mfc/document-templates-and-the-document-view-creation-process.md).

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

`CDocTemplate`

## Requirements

**Header:** afxwin.h

## <a name="adddocument"></a> CDocTemplate::AddDocument

Use this function to add a document to a template.

```
virtual void AddDocument(CDocument* pDoc);
```

### Parameters

*pDoc*<br/>
A pointer to the document to be added.

### Remarks

The derived classes [CMultiDocTemplate](../../mfc/reference/cmultidoctemplate-class.md) and [CSingleDocTemplate](../../mfc/reference/csingledoctemplate-class.md) override this function. If you derive your own document-template class from `CDocTemplate`, your derived class must override this function.

## <a name="cdoctemplate"></a> CDocTemplate::CDocTemplate

Constructs a `CDocTemplate` object.

```
CDocTemplate (
    UINT nIDResource,
    CRuntimeClass* pDocClass,
    CRuntimeClass* pFrameClass,
    CRuntimeClass* pViewClass);
```

### Parameters

*nIDResource*<br/>
Specifies the ID of the resources used with the document type. This may include menu, icon, accelerator table, and string resources.

The string resource consists of up to seven substrings separated by the '\n' character (the '\n' character is needed as a place holder if a substring is not included; however, trailing '\n' characters are not necessary); these substrings describe the document type. For information on the substrings, see [GetDocString](#getdocstring). This string resource is found in the application's resource file. For example:

```RC
// MYCALC.RC
STRINGTABLE PRELOAD DISCARDABLE
BEGIN
  IDR_SHEETTYPE "\nSheet\nWorksheet\nWorksheets (*.myc)\n.myc\n MyCalcSheet\nMyCalc Worksheet"
END
```

Note that the string begins with a '\n' character; this is because the first substring is not used for MDI applications and so is not included. You can edit this string using the string editor; the entire string appears as a single entry in the String Editor, not as seven separate entries.

*pDocClass*<br/>
Points to the `CRuntimeClass` object of the document class. This class is a `CDocument`-derived class you define to represent your documents.

*pFrameClass*<br/>
Points to the `CRuntimeClass` object of the frame window class. This class can be a `CFrameWnd`-derived class, or it can be `CFrameWnd` itself if you want default behavior for your main frame window.

*pViewClass*<br/>
Points to the `CRuntimeClass` object of the view class. This class is a `CView`-derived class you define to display your documents.

### Remarks

Use this member function to construct a `CDocTemplate` object. Dynamically allocate a `CDocTemplate` object and pass it to [CWinApp::AddDocTemplate](../../mfc/reference/cwinapp-class.md#adddoctemplate) from the `InitInstance` member function of your application class.

## <a name="closealldocuments"></a> CDocTemplate::CloseAllDocuments

Call this member function to close all open documents.

```
virtual void CloseAllDocuments(BOOL bEndSession);
```

### Parameters

*bEndSession*<br/>
Not used.

### Remarks

This member function is typically used as part of the File Exit command. The default implementation of this function calls the [CDocument::DeleteContents](../../mfc/reference/cdocument-class.md#deletecontents) member function to delete the document's data and then closes the frame windows for all the views attached to the document.

Override this function if you want to require the user to perform special cleanup processing before the document is closed. For example, if the document represents a record in a database, you may want to override this function to close the database.

## <a name="createnewdocument"></a> CDocTemplate::CreateNewDocument

Call this member function to create a new document of the type associated with this document template.

```
virtual CDocument* CreateNewDocument();
```

### Return Value

A pointer to the newly created document, or NULL if an error occurs.

## <a name="createnewframe"></a> CDocTemplate::CreateNewFrame

Creates a new frame window containing a document and view.

```
virtual CFrameWnd* CreateNewFrame(
    CDocument* pDoc,
    CFrameWnd* pOther);
```

### Parameters

*pDoc*<br/>
The document to which the new frame window should refer. Can be NULL.

*pOther*<br/>
The frame window on which the new frame window is to be based. Can be NULL.

### Return Value

A pointer to the newly created frame window, or NULL if an error occurs.

### Remarks

`CreateNewFrame` uses the `CRuntimeClass` objects passed to the constructor to create a new frame window with a view and document attached. If the *pDoc* parameter is NULL, the framework outputs a TRACE message.

The *pOther* parameter is used to implement the Window New command. It provides a frame window on which to model the new frame window. The new frame window is usually created invisible. Call this function to create frame windows outside the standard framework implementation of File New and File Open.

## <a name="createoleframe"></a> CDocTemplate::CreateOleFrame

Creates an OLE frame window.

```
CFrameWnd* CreateOleFrame(
    CWnd* pParentWnd,
    CDocument* pDoc,
    BOOL bCreateView);
```

### Parameters

*pParentWnd*<br/>
A pointer to the frame's parent window.

*pDoc*<br/>
A pointer to the document to which the new OLE frame window should refer.

*bCreateView*<br/>
Determines whether a view is created along with the frame.

### Return Value

A pointer to a frame window if successful; otherwise NULL.

### Remarks

If *bCreateView* is zero, an empty frame is created.

## <a name="getdocstring"></a> CDocTemplate::GetDocString

Retrieves a string associated with the document type.

```
virtual BOOL GetDocString(
    CString& rString,
    enum DocStringIndex index) const;
```

### Parameters

*rString*<br/>
A reference to a `CString` object that will contain the string when the function returns.

*index*<br/>
An index of the substring being retrieved from the string that describes the document type. This parameter can have one of the following values:

- `CDocTemplate::windowTitle` Name that appears in the application window's title bar (for example, "Microsoft Excel"). Present only in the document template for SDI applications.

- `CDocTemplate::docName` Root for the default document name (for example, "Sheet"). This root, plus a number, is used for the default name of a new document of this type whenever the user chooses the New command from the File menu (for example, "Sheet1" or "Sheet2"). If not specified, "Untitled" is used as the default.

- `CDocTemplate::fileNewName` Name of this document type. If the application supports more than one type of document, this string is displayed in the File New dialog box (for example, "Worksheet"). If not specified, the document type is inaccessible using the File New command.

- `CDocTemplate::filterName` Description of the document type and a wildcard filter matching documents of this type. This string is displayed in the List Files Of Type drop-down list in the File Open dialog box (for example, "Worksheets (*.xls)"). If not specified, the document type is inaccessible using the File Open command.

- `CDocTemplate::filterExt` Extension for documents of this type (for example, ".xls"). If not specified, the document type is inaccessible using the File Open command.

- `CDocTemplate::regFileTypeId` Identifier for the document type to be stored in the registration database maintained by Windows. This string is for internal use only (for example, "ExcelWorksheet"). If not specified, the document type cannot be registered with the Windows File Manager.

- `CDocTemplate::regFileTypeName` Name of the document type to be stored in the registration database. This string may be displayed in dialog boxes of applications that access the registration database (for example, "Microsoft Excel Worksheet").

### Return Value

Nonzero if the specified substring was found; otherwise 0.

### Remarks

Call this function to retrieve a specific substring describing the document type. The string containing these substrings is stored in the document template and is derived from a string in the resource file for the application. The framework calls this function to get the strings it needs for the application's user interface. If you have specified a filename extension for your application's documents, the framework also calls this function when adding an entry to the Windows registration database; this allows documents to be opened from the Windows File Manager.

Call this function only if you are deriving your own class from `CDocTemplate`.

## <a name="getfirstdocposition"></a> CDocTemplate::GetFirstDocPosition

Retrieves the position of the first document associated with this template.

```
virtual POSITION GetFirstDocPosition() const = 0;
```

### Return Value

A POSITION value that can be used to iterate through the list of documents associated with this document template; or NULL if the list is empty.

### Remarks

Use this function to get the position of the first document in the list of documents associated with this template. Use the POSITION value as an argument to [CDocTemplate::GetNextDoc](#getnextdoc) to iterate through the list of documents associated with the template.

[CSingleDocTemplate](../../mfc/reference/csingledoctemplate-class.md) and [CMultiDocTemplate](../../mfc/reference/cmultidoctemplate-class.md) both override this pure virtual function. Any class you derive from `CDocTemplate` must also override this function.

## <a name="getnextdoc"></a> CDocTemplate::GetNextDoc

Retrieves the list element identified by *rPos*, then sets *rPos* to the POSITION value of the next entry in the list.

```
virtual CDocument* GetNextDoc(POSITION& rPos) const = 0;
```

### Return Value

A pointer to the next document in the list of documents associated with this template.

### Parameters

*rPos*<br/>
A reference to a POSITION value returned by a previous call to [GetFirstDocPosition](#getfirstdocposition) or `GetNextDoc`.

### Remarks

If the retrieved element is the last in the list, then the new value of *rPos* is set to NULL.

You can use `GetNextDoc` in a forward iteration loop if you establish the initial position with a call to [GetFirstDocPosition](#getfirstdocposition).

You must ensure that your POSITION value represents a valid position in the list. If it is invalid, then the Debug version of the Microsoft Foundation Class Library asserts.

## <a name="initialupdateframe"></a> CDocTemplate::InitialUpdateFrame

Initializes the frame window, and optionally makes it visible.

```
virtual void InitialUpdateFrame(
    CFrameWnd* pFrame,
    CDocument* pDoc,
    BOOL bMakeVisible = TRUE);
```

### Parameters

*pFrame*<br/>
The frame window that needs the initial update.

*pDoc*<br/>
The document to which the frame is associated. Can be NULL.

*bMakeVisible*<br/>
Indicates whether the frame should become visible and active.

### Remarks

Call `IntitialUpdateFrame` after creating a new frame with `CreateNewFrame`. Calling this function causes the views in that frame window to receive their `OnInitialUpdate` calls. Also, if there was not previously an active view, the primary view of the frame window is made active; the primary view is a view with a child ID of AFX_IDW_PANE_FIRST. Finally, the frame window is made visible if *bMakeVisible* is non-zero. If *bMakeVisible* is zero, the current focus and visible state of the frame window will remain unchanged.

It is not necessary to call this function when using the framework's implementation of File New and File Open.

## <a name="loadtemplate"></a> CDocTemplate::LoadTemplate

Loads the resources for a given `CDocTemplate` or derived class.

```
virtual void LoadTemplate();
```

### Remarks

This member function is called by the framework to load the resources for a given `CDocTemplate` or derived class. Normally it is called during construction, except when the template is being constructed globally. In that case, the call to `LoadTemplate` is delayed until [CWinApp::AddDocTemplate](../../mfc/reference/cwinapp-class.md#adddoctemplate) is called.

## <a name="matchdoctype"></a> CDocTemplate::MatchDocType

Determines the degree of confidence in the match between a document type and this template.

```
virtual Confidence MatchDocType(
    LPCTSTR lpszPathName,
    CDocument*& rpDocMatch);
```

### Parameters

*lpszPathName*<br/>
Pathname of the file whose type is to be determined.

*rpDocMatch*<br/>
Pointer to a document that is assigned the matching document, if the file specified by *lpszPathName* is already open.

### Return Value

A value from the **Confidence** enumeration, which is defined as follows:

```
enum Confidence
    {
    noAttempt,
    maybeAttemptForeign,
    maybeAttemptNative,
    yesAttemptForeign,
    yesAttemptNative,
    yesAlreadyOpen
    };
```

### Remarks

Use this function to determine the type of document template to use for opening a file. If your application supports multiple file types, for example, you can use this function to determine which of the available document templates is appropriate for a given file by calling `MatchDocType` for each template in turn, and choosing a template according to the confidence value returned.

If the file specified by *lpszPathName* is already open, this function returns `CDocTemplate::yesAlreadyOpen` and copies the file's `CDocument` object into the object at *rpDocMatch*.

If the file is not open but the extension in *lpszPathName* matches the extension specified by `CDocTemplate::filterExt`, this function returns `CDocTemplate::yesAttemptNative` and sets *rpDocMatch* to NULL. For more information on `CDocTemplate::filterExt`, see [CDocTemplate::GetDocString](#getdocstring).

If neither case is true, the function returns `CDocTemplate::yesAttemptForeign`.

The default implementation does not return `CDocTemplate::maybeAttemptForeign` or `CDocTemplate::maybeAttemptNative`. Override this function to implement type-matching logic appropriate to your application, perhaps using these two values from the **Confidence** enumeration.

## <a name="opendocumentfile"></a> CDocTemplate::OpenDocumentFile

Opens a file specified by a path.

```
virtual CDocument* OpenDocumentFile(LPCTSTR lpszPathName) = 0;

virtual CDocument* OpenDocumentFile(
    LPCTSTR lpszPathName,
    BOOL bAddToMRU) = 0;
```

### Parameters

*lpszPathName*<br/>
[in] Pointer to the path of the file that contains the document to be opened.

*bAddToMRU*<br/>
[in] TRUE indicates the document is one of the most recent files; FALSE indicates the document is not one of the most recent files.

### Return Value

A pointer to the document whose file is named by *lpszPathName*; NULL if unsuccessful.

### Remarks

Opens the file whose path is specified by *lpszPathName*. If *lpszPathName* is NULL, a new file that contains a document of the type associated with this template is created.

## <a name="removedocument"></a> CDocTemplate::RemoveDocument

Removes the document pointed to by *pDoc* from the list of documents associated with this template.

```
virtual void RemoveDocument(CDocument* pDoc);
```

### Parameters

*pDoc*<br/>
Pointer to the document to be removed.

### Remarks

The derived classes `CMultiDocTemplate` and `CSingleDocTemplate` override this function. If you derive your own document-template class from `CDocTemplate`, your derived class must override this function.

## <a name="saveallmodified"></a> CDocTemplate::SaveAllModified

Saves all documents that have been modified.

```
virtual BOOL SaveAllModified();
```

### Return Value

Non-zero if successful; otherwise 0.

## <a name="setcontainerinfo"></a> CDocTemplate::SetContainerInfo

Determines the resources for OLE containers when editing an in-place OLE item.

```cpp
void SetContainerInfo(UINT nIDOleInPlaceContainer);
```

### Parameters

*nIDOleInPlaceContainer*<br/>
The ID of the resources used when an embedded object is activated.

### Remarks

Call this function to set the resources to be used when an OLE object is in-place activated. These resources may include menus and accelerator tables. This function is usually called in the [CWinApp::InitInstance](../../mfc/reference/cwinapp-class.md#initinstance) function of your application.

The menu associated with *nIDOleInPlaceContainer* contains separators that allow the menu of the activated in-place item to merge with the menu of the container application. For more information about merging server and container menus, see the article [Menus and Resources (OLE)](../../mfc/menus-and-resources-ole.md).

## <a name="setdefaulttitle"></a> CDocTemplate::SetDefaultTitle

Call this function to load the document's default title and display it in the document's title bar.

```
virtual void SetDefaultTitle(CDocument* pDocument) = 0;
```

### Parameters

*pDocument*<br/>
Pointer to the document whose title is to be set.

### Remarks

For information on the default title, see the description of `CDocTemplate::docName` in [CDocTemplate::GetDocString](#getdocstring).

## <a name="setserverinfo"></a> CDocTemplate::SetServerInfo

Determines the resources and classes when the server document is embedded or edited in-place.

```cpp
void SetServerInfo(
    UINT nIDOleEmbedding,
    UINT nIDOleInPlaceServer = 0,
    CRuntimeClass* pOleFrameClass = NULL,
    CRuntimeClass* pOleViewClass = NULL);
```

### Parameters

*nIDOleEmbedding*<br/>
The ID of the resources used when an embedded object is opened in a separate window.

*nIDOleInPlaceServer*<br/>
The ID of the resources used when an embedded object is activated in-place.

*pOleFrameClass*<br/>
Pointer to a [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) structure containing class information for the frame window object created when in-place activation occurs.

*pOleViewClass*<br/>
Pointer to a `CRuntimeClass` structure containing class information for the view object created when in-place activation occurs.

### Remarks

Call this member function to identify resources that will be used by the server application when the user requests activation of an embedded object. These resources consist of menus and accelerator tables. This function is usually called in the `InitInstance` of your application.

The menu associated with *nIDOleInPlaceServer* contains separators that allow the server menu to merge with the menu of the container. For more information about merging server and container menus, see the article [Menus and Resources (OLE)](../../mfc/menus-and-resources-ole.md).

## <a name="createpreviewframe"></a> CDocTemplate::CreatePreviewFrame

Creates a child frame used for Rich Preview.

```
CFrameWnd* CreatePreviewFrame(
    CWnd* pParentWnd,
    CDocument* pDoc);
```

### Parameters

*pParentWnd*<br/>
A pointer to a parent window (usually provided by the Shell).

*pDoc*<br/>
A pointer to a document object, whose content will be previewed.

### Return Value

A valid pointer to a `CFrameWnd` object, or NULL if the creation fails.

### Remarks

## <a name="setpreviewinfo"></a> CDocTemplate::SetPreviewInfo

Sets up the out of process preview handler.

```cpp
void SetPreviewInfo(
    UINT nIDPreviewFrame,
    CRuntimeClass* pPreviewFrameClass = NULL,
    CRuntimeClass* pPreviewViewClass = NULL);
```

### Parameters

*nIDPreviewFrame*<br/>
Specifies a resource ID of the preview frame.

*pPreviewFrameClass*<br/>
Specifies a pointer to a runtime class information structure of the preview frame.

*pPreviewViewClass*<br/>
Specifies a pointer to a runtime class information structure of the preview view.

### Remarks

## See also

[CCmdTarget Class](../../mfc/reference/ccmdtarget-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[CSingleDocTemplate Class](../../mfc/reference/csingledoctemplate-class.md)<br/>
[CMultiDocTemplate Class](../../mfc/reference/cmultidoctemplate-class.md)<br/>
[CDocument Class](../../mfc/reference/cdocument-class.md)<br/>
[CView Class](../../mfc/reference/cview-class.md)<br/>
[CScrollView Class](../../mfc/reference/cscrollview-class.md)<br/>
[CEditView Class](../../mfc/reference/ceditview-class.md)<br/>
[CFormView Class](../../mfc/reference/cformview-class.md)<br/>
[CFrameWnd Class](../../mfc/reference/cframewnd-class.md)<br/>
[CMDIChildWnd Class](../../mfc/reference/cmdichildwnd-class.md)
