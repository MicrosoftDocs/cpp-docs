---
description: "Learn more about: CDataRecoveryHandler Class"
title: "CDataRecoveryHandler Class"
ms.date: "03/27/2019"
f1_keywords: ["CDataRecoveryHandler", "AFXDATARECOVERY/CDataRecoveryHandler", "AFXDATARECOVERY/CDataRecoveryHandler::CDataRecoveryHandler", "AFXDATARECOVERY/CDataRecoveryHandler::AutosaveAllDocumentInfo", "AFXDATARECOVERY/CDataRecoveryHandler::AutosaveDocumentInfo", "AFXDATARECOVERY/CDataRecoveryHandler::CreateDocumentInfo", "AFXDATARECOVERY/CDataRecoveryHandler::DeleteAllAutosavedFiles", "AFXDATARECOVERY/CDataRecoveryHandler::DeleteAutosavedFile", "AFXDATARECOVERY/CDataRecoveryHandler::GenerateAutosaveFileName", "AFXDATARECOVERY/CDataRecoveryHandler::GetAutosaveInterval", "AFXDATARECOVERY/CDataRecoveryHandler::GetAutosavePath", "AFXDATARECOVERY/CDataRecoveryHandler::GetDocumentListName", "AFXDATARECOVERY/CDataRecoveryHandler::GetNormalDocumentTitle", "AFXDATARECOVERY/CDataRecoveryHandler::GetRecoveredDocumentTitle", "AFXDATARECOVERY/CDataRecoveryHandler::GetRestartIdentifier", "AFXDATARECOVERY/CDataRecoveryHandler::GetSaveDocumentInfoOnIdle", "AFXDATARECOVERY/CDataRecoveryHandler::GetShutdownByRestartManager", "AFXDATARECOVERY/CDataRecoveryHandler::Initialize", "AFXDATARECOVERY/CDataRecoveryHandler::QueryRestoreAutosavedDocuments", "AFXDATARECOVERY/CDataRecoveryHandler::ReadOpenDocumentList", "AFXDATARECOVERY/CDataRecoveryHandler::RemoveDocumentInfo", "AFXDATARECOVERY/CDataRecoveryHandler::ReopenPreviousDocuments", "AFXDATARECOVERY/CDataRecoveryHandler::RestoreAutosavedDocuments", "AFXDATARECOVERY/CDataRecoveryHandler::SaveOpenDocumentList", "AFXDATARECOVERY/CDataRecoveryHandler::SetAutosaveInterval", "AFXDATARECOVERY/CDataRecoveryHandler::SetAutosavePath", "AFXDATARECOVERY/CDataRecoveryHandler::SetRestartIdentifier", "AFXDATARECOVERY/CDataRecoveryHandler::SetSaveDocumentInfoOnIdle", "AFXDATARECOVERY/CDataRecoveryHandler::SetShutdownByRestartManager", "AFXDATARECOVERY/CDataRecoveryHandler::UpdateDocumentInfo"]
helpviewer_keywords: ["CDataRecoveryHandler [MFC], CDataRecoveryHandler", "CDataRecoveryHandler [MFC], AutosaveAllDocumentInfo", "CDataRecoveryHandler [MFC], AutosaveDocumentInfo", "CDataRecoveryHandler [MFC], CreateDocumentInfo", "CDataRecoveryHandler [MFC], DeleteAllAutosavedFiles", "CDataRecoveryHandler [MFC], DeleteAutosavedFile", "CDataRecoveryHandler [MFC], GenerateAutosaveFileName", "CDataRecoveryHandler [MFC], GetAutosaveInterval", "CDataRecoveryHandler [MFC], GetAutosavePath", "CDataRecoveryHandler [MFC], GetDocumentListName", "CDataRecoveryHandler [MFC], GetNormalDocumentTitle", "CDataRecoveryHandler [MFC], GetRecoveredDocumentTitle", "CDataRecoveryHandler [MFC], GetRestartIdentifier", "CDataRecoveryHandler [MFC], GetSaveDocumentInfoOnIdle", "CDataRecoveryHandler [MFC], GetShutdownByRestartManager", "CDataRecoveryHandler [MFC], Initialize", "CDataRecoveryHandler [MFC], QueryRestoreAutosavedDocuments", "CDataRecoveryHandler [MFC], ReadOpenDocumentList", "CDataRecoveryHandler [MFC], RemoveDocumentInfo", "CDataRecoveryHandler [MFC], ReopenPreviousDocuments", "CDataRecoveryHandler [MFC], RestoreAutosavedDocuments", "CDataRecoveryHandler [MFC], SaveOpenDocumentList", "CDataRecoveryHandler [MFC], SetAutosaveInterval", "CDataRecoveryHandler [MFC], SetAutosavePath", "CDataRecoveryHandler [MFC], SetRestartIdentifier", "CDataRecoveryHandler [MFC], SetSaveDocumentInfoOnIdle", "CDataRecoveryHandler [MFC], SetShutdownByRestartManager", "CDataRecoveryHandler [MFC], UpdateDocumentInfo"]
ms.assetid: 7794802c-e583-4eba-90b9-2fed1a161f9c
---
# CDataRecoveryHandler Class

The `CDataRecoveryHandler` autosaves documents and restores them if an application unexpectedly exits.

## Syntax

```
class CDataRecoveryHandler : public CObject
```

## Members

### Constructors

|Name|Description|
|-|-|
|[CDataRecoveryHandler::CDataRecoveryHandler](#cdatarecoveryhandler)|Constructs a `CDataRecoveryHandler` object.|

### Methods

|Name|Description|
|-|-|
|[CDataRecoveryHandler::AutosaveAllDocumentInfo](#autosavealldocumentinfo)|Autosaves each file registered with the `CDataRecoveryHandler` class.|
|[CDataRecoveryHandler::AutosaveDocumentInfo](#autosavedocumentinfo)|Autosaves the specified document.|
|[CDataRecoveryHandler::CreateDocumentInfo](#createdocumentinfo)|Adds a document to the list of open documents.|
|[CDataRecoveryHandler::DeleteAllAutosavedFiles](#deleteallautosavedfiles)|Deletes all the current autosaved files.|
|[CDataRecoveryHandler::DeleteAutosavedFile](#deleteautosavedfile)|Deletes the specified autosaved file.|
|[CDataRecoveryHandler::GenerateAutosaveFileName](#generateautosavefilename)|Generates the name for an autosave file associated with the supplied document file name.|
|[CDataRecoveryHandler::GetAutosaveInterval](#getautosaveinterval)|Returns the interval between autosave tries.|
|[CDataRecoveryHandler::GetAutosavePath](#getautosavepath)|Returns the path of the autosaved files.|
|[CDataRecoveryHandler::GetDocumentListName](#getdocumentlistname)|Retrieves the document name from a `CDocument` object.|
|[CDataRecoveryHandler::GetNormalDocumentTitle](#getnormaldocumenttitle)|Retrieves the normal title for the specified document.|
|[CDataRecoveryHandler::GetRecoveredDocumentTitle](#getrecovereddocumenttitle)|Creates and returns the title for the recovered document.|
|[CDataRecoveryHandler::GetRestartIdentifier](#getrestartidentifier)|Retrieves the unique restart identifier for the application.|
|[CDataRecoveryHandler::GetSaveDocumentInfoOnIdle](#getsavedocumentinfoonidle)|Indicates whether the `CDataRecoveryHandler` performs an autosave on the current idle loop.|
|[CDataRecoveryHandler::GetShutdownByRestartManager](#getshutdownbyrestartmanager)|Indicates whether the restart manager caused the application to exit.|
|[CDataRecoveryHandler::Initialize](#initialize)|Initializes the `CDataRecoveryHandler`.|
|[CDataRecoveryHandler::QueryRestoreAutosavedDocuments](#queryrestoreautosaveddocuments)|Displays a dialog box to the user for each document that the `CDataRecoveryHandler` autosaved. The dialog box determines whether the user wants to restore the autosaved document.|
|[CDataRecoveryHandler::ReadOpenDocumentList](#readopendocumentlist)|Loads the open document list from the registry.|
|[CDataRecoveryHandler::RemoveDocumentInfo](#removedocumentinfo)|Removes the supplied document from the open document list.|
|[CDataRecoveryHandler::ReopenPreviousDocuments](#reopenpreviousdocuments)|Opens the previously open documents.|
|[CDataRecoveryHandler::RestoreAutosavedDocuments](#restoreautosaveddocuments)|Restores the autosaved documents based on user input.|
|[CDataRecoveryHandler::SaveOpenDocumentList](#saveopendocumentlist)|Saves the current list of open documents to the Windows registry.|
|[CDataRecoveryHandler::SetAutosaveInterval](#setautosaveinterval)|Sets the time between autosave cycles in milliseconds.|
|[CDataRecoveryHandler::SetAutosavePath](#setautosavepath)|Sets the directory where autosaved files are stored.|
|[CDataRecoveryHandler::SetRestartIdentifier](#setrestartidentifier)|Sets the unique restart identifier for this instance of the `CDataRecoveryHandler`.|
|[CDataRecoveryHandler::SetSaveDocumentInfoOnIdle](#setsavedocumentinfoonidle)|Sets whether the `CDataRecoveryHandler` saves the open document information to the Windows registry during the current idle cycle.|
|[CDataRecoveryHandler::SetShutdownByRestartManager](#setshutdownbyrestartmanager)|Sets whether the previous exit of the application was caused by the restart manager.|
|[CDataRecoveryHandler::UpdateDocumentInfo](#updatedocumentinfo)|Updates the information for a document because the user saved it.|

### Data Members

|Name|Description|
|-|-|
|m_bRestoringPreviousOpenDocs|Indicates whether the data recovery handler reopens previously open documents.|
|m_bSaveDocumentInfoOnIdle|Indicates whether the data recovery handler autosaves documents on the next idle loop.|
|m_bShutdownByRestartManager|Indicates whether the restart manager causes the application to exit.|
|m_dwRestartManagerSupportFlags|Flags that indicate what support the restart manager provides for the application.|
|m_lstAutosavesToDelete|A list of autosaved files that were not deleted when the original documents were closed. When the application exits, the restart manager retries deleting the files.|
|m_mapDocNameToAutosaveName|A map of the document names to the autosaved file names.|
|m_mapDocNameToDocumentPtr|A map of the document names to the [CDocument](../../mfc/reference/cdocument-class.md) pointers.|
|m_mapDocNameToRestoreBool|A map of the document names to a Boolean parameter that indicates whether to restore the autosaved document.|
|m_mapDocumentPtrToDocName|A map of the `CDocument` pointers to the document names.|
|m_mapDocumentPtrToDocTitle|A map of the `CDocument` pointers to the document titles. These titles are used for saving files.|
|m_nAutosaveInterval|Time in milliseconds between autosaves.|
|m_nTimerID|The identifier for the autosave timer.|
|m_strAutosavePath|The location where the autosaved documents are stored.|
|m_strRestartIdentifier|The string representation of a GUID for the restart manager.|

## Remarks

The restart manager uses the `CDataRecoveryHandler` class to keep track of all open documents and to autosave them as necessary. To enable autosave, use the [CDataRecoveryHandler::SetSaveDocumentInfoOnIdle](#setsavedocumentinfoonidle) method. This method directs the `CDataRecoveryHandler` to perform an autosave on the next idle loop. The restart manager calls `SetSaveDocumentInfoOnIdle` when the `CDataRecoveryHandler` should perform an autosave.

All of the methods of the `CDataRecoveryHandler` class are virtual. Override the methods in this class to create your own custom data recovery handler. Unless you create your own data recovery handler or restart manager, do not instantiate a CDataRecoveryHandler. The [CWinApp Class](../../mfc/reference/cwinapp-class.md) creates a `CDataRecoveryHandler` object as it is required.

Before you can use a `CDataRecoveryHandler` object, you must call [CDataRecoveryHandler::Initialize](#initialize).

Because the `CDataRecoveryHandler` class is closely connected to the restart manager, `CDataRecoveryHandler` depends on the global parameter `m_dwRestartManagerSupportFlags`. This parameter determines what permissions the restart manager has and how it interacts with your application. To incorporate the restart manager into an existing application, you have to assign `m_dwRestartManagerSupportFlags` the appropriate value in the constructor of your main application. For more information about how to use the restart manager, see [How to: Add Restart Manager Support](../../mfc/how-to-add-restart-manager-support.md).

## Requirements

**Header:** afxdatarecovery.h

## <a name="autosavealldocumentinfo"></a> CDataRecoveryHandler::AutosaveAllDocumentInfo

Autosaves each file registered with the `CDataRecoveryHandler` class.

```
virtual BOOL AutosaveAllDocumentInfo();
```

### Return Value

TRUE if the `CDataRecoveryHandler` saved all the documents; FALSE if any document was not saved.

### Remarks

This method returns TRUE if there are no documents that must be saved. It also returns TRUE without saving any documents if retrieving the `CWinApp` or `CDocManager` for the application generates an error.

To use this method, either AFX_RESTART_MANAGER_AUTOSAVE_AT_RESTART or AFX_RESTART_MANAGER_AUTOSAVE_AT_INTERVAL must be set in `m_dwRestartManagerSupportFlags`. For more information, see [How to: Add Restart Manager Support](../../mfc/how-to-add-restart-manager-support.md).

## <a name="autosavedocumentinfo"></a> CDataRecoveryHandler::AutosaveDocumentInfo

Autosaves the specified document.

```
virtual BOOL AutosaveDocumentInfo(
    CDocument* pDocument,
    BOOL bResetModifiedFlag = TRUE);
```

### Parameters

*pDocument*\
[in] A pointer to the `CDocument` to save.

*bResetModifiedFlag*\
[in] TRUE indicates that the `CDataRecoveryHandler` considers *pDocument* to be modified; FALSE indicates that the framework considers *pDocument* to be unmodified. See the Remarks section for more information about the effect of this flag.

### Return Value

TRUE if the appropriate flags are set and *pDocument* is a valid `CDocument` object.

### Remarks

Each `CDocument` object has a flag that indicates if it has changed since the last save. Use [CDocument::IsModified](../../mfc/reference/cdocument-class.md#ismodified) to determine the state of this flag. If a `CDocument` has not changed since the last save, `AutosaveDocumentInfo` deletes any autosaved files for that document. If a document has changed since the last save, closing it prompts the user to save the document before closing.

> [!NOTE]
> Using *bResetModifiedFlag* to change the state of the document to unmodified may cause the user to lose unsaved data. If the framework considers a document unmodified, closing it does not prompt the user to save.

This method throws an exception with the [ASSERT](diagnostic-services.md#assert) macro if *pDocument* is not a valid `CDocument` object.

To use this method, either AFX_RESTART_MANAGER_AUTOSAVE_AT_RESTART or AFX_RESTARTMANAGER_AUTOSAVE_AT_INTERVAL must be set in *m_dwRestartManagerSupportFlags*.

## <a name="cdatarecoveryhandler"></a> CDataRecoveryHandler::CDataRecoveryHandler

Constructs a `CDataRecoveryHandler` object.

```
CDataRecoveryHandler(
    DWORD dwRestartManagerSupportFlags,
    int nAutosaveInterval);
```

### Parameters

*dwRestartManagerSupportFlags*\
[in] Indicates which options of the restart manager are supported.

*nAutosaveInterval*\
[in] The time between autosaves. This parameter is in milliseconds.

### Remarks

The MFC framework automatically creates a `CDataRecoveryHandler` object for your application when you use the **New Project** wizard. Unless you are customizing the data recovery behavior or the restart manager, you should not create a `CDataRecoveryHandler` object.

## <a name="createdocumentinfo"></a> CDataRecoveryHandler::CreateDocumentInfo

Adds a document to the list of open documents.

```
virtual BOOL CreateDocumentInfo(CDocument* pDocument);
```

### Parameters

*pDocument*\
[in] A pointer to a `CDocument`. This method creates the document information for this `CDocument`.

### Return Value

The default implementation returns TRUE.

### Remarks

This method checks if *pDocument* is already in the list of documents before it adds the document. If *pDocument* is already in the list, this method deletes the autosaved file associated with *pDocument*.

To use this method, either AFX_RESTART_MANAGER_AUTOSAVE_AT_RESTART or AFX_RESTARTMANAGER_AUTOSAVE_AT_INTERVAL must be set in *m_dwRestartManagerSupportFlags*.

## <a name="deleteallautosavedfiles"></a> CDataRecoveryHandler::DeleteAllAutosavedFiles

Deletes all the current autosaved files.

```
virtual BOOL DeleteAllAutosavedFiles();
```

### Return Value

The default implementation always returns TRUE.

## <a name="deleteautosavedfile"></a> CDataRecoveryHandler::DeleteAutosavedFile

Deletes the specified autosaved file.

```
virtual BOOL DeleteAutosavedFile(const CString& strAutosavedFile);
```

### Parameters

*strAutosavedFile*\
[in] A string that contains the autosaved file name.

### Return Value

The default implementation always return TRUE.

### Remarks

If this method cannot delete the autosaved file, it saves the name of the file in a list. The destructor for the `CDataRecoveryHandler` tries to delete each autosaved file specified in that list.

## <a name="generateautosavefilename"></a> CDataRecoveryHandler::GenerateAutosaveFileName

Generates the name for an autosave file associated with the supplied document file name.

```
virtual CString GenerateAutosaveFileName(const CString& strDocumentName) const;
```

### Parameters

*strDocumentName*<br/>
[in] A string that contains the document name. `GenerateAutosaveFileName` uses this document name to generate a corresponding autosave file name.

### Return Value

The autosave file name generated from *strDocumentName*.

### Remarks

Each document name has a one-to-one mapping with an autosave file name.

## <a name="getautosaveinterval"></a> CDataRecoveryHandler::GetAutosaveInterval

Returns the interval between autosave tries.

```
virtual int GetAutosaveInterval() const;
```

### Return Value

The number of milliseconds between autosave tries.

## <a name="getautosavepath"></a> CDataRecoveryHandler::GetAutosavePath

Returns the path of the autosaved files.

```
virtual CString GetAutosavePath() const;
```

### Return Value

The location where the autosaved documents are stored.

## <a name="getdocumentlistname"></a> CDataRecoveryHandler::GetDocumentListName

Retrieves the document name from a `CDocument` object.

```
virtual CString GetDocumentListName(CDocument* pDocument) const;
```

### Parameters

*pDocument*\
[in] A pointer to a `CDocument`. `GetDocumentListName` retrieves the document name from this `CDocument`.

### Return Value

The document name from *pDocument*.

### Remarks

The `CDataRecoveryHandler` uses the document name as the key in *m_mapDocNameToAutosaveName*, *m_mapDocNameToDocumentPtr*, and *m_mapDocNameToRestoreBool*. These parameter enable the `CDataRecoveryHandler` to monitor `CDocument` objects, the autosave file name, and the autosave settings.

## <a name="getnormaldocumenttitle"></a> CDataRecoveryHandler::GetNormalDocumentTitle

Retrieves the normal title for the specified document.

```
virtual CString GetNormalDocumentTitle(CDocument* pDocument);
```

### Parameters

*pDocument*\
[in] A pointer to a `CDocument`.

### Return Value

The normal title for the specified document.

### Remarks

The normal title of a document is usually the file name of the document without the path. This is the title in the **File name** field of the **Save As** dialog box.

## <a name="getrecovereddocumenttitle"></a> CDataRecoveryHandler::GetRecoveredDocumentTitle

Creates and returns the title for the recovered document.

```
virtual CString GetRecoveredDocumentTitle(const CString& strDocumentTitle) const;
```

### Parameters

*strDocumentTitle*<br/>
[in] The normal title for the document.

### Return Value

The recovered document title.

### Remarks

By default, the recovered title of a document is the normal title with **[recovered]** appended to it. The recovered title is displayed to the user when the `CDataRecoveryHandler` queries the user to restore autosaved documents.

## <a name="getrestartidentifier"></a> CDataRecoveryHandler::GetRestartIdentifier

Retrieves the unique restart identifier for the application.

```
virtual CString GetRestartIdentifier() const;
```

### Return Value

The unique restart identifier.

### Remarks

The restart identifier is unique for each execution of the application.

The `CDataRecoveryHandler` stores information in the registry about the currently open documents. When the restart manager exits an application and restarts it, it supplies the restart identifier to the `CDataRecoveryHandler`. The `CDataRecoveryHandler` uses the restart identifier to retrieve the list of previously open documents. This enables the `CDataRecoveryHandler` to try to find and restore autosaved files.

## <a name="getsavedocumentinfoonidle"></a> CDataRecoveryHandler::GetSaveDocumentInfoOnIdle

Indicates whether the `CDataRecoveryHandler` performs an autosave on the current idle loop.

```
virtual BOOL GetSaveDocumentInfoOnIdle() const;
```

### Return Value

TRUE indicates the `CDataRecoveryHandler` autosaves on the current idle loop; FALSE indicates it does not.

## <a name="getshutdownbyrestartmanager"></a> CDataRecoveryHandler::GetShutdownByRestartManager

Indicates whether the restart manager caused the application to exit.

```
virtual BOOL GetShutdownByRestartManager() const;
```

### Return Value

TRUE indicates the restart manager caused the application to exit; FALSE indicates it did not.

## <a name="initialize"></a> CDataRecoveryHandler::Initialize

Initializes the `CDataRecoveryHandler`.

```
virtual BOOL Initialize();
```

### Return Value

TRUE if the initialization is successful; otherwise FALSE.

### Remarks

The initialization process loads the path for storing autosave files from the registry. If the `Initialize` method cannot find this directory or if the path is NULL, `Initialize` fails and returns `FALSE`.

Use [CDataRecoveryHandler::SetAutosavePath](#setautosavepath) to change the autosave path after your application initializes the `CDataRecoveryHandler`.

The `Initialize` method also starts a timer to monitor when the next autosave occurs. Use [CDataRecoveryHandler::SetAutosaveInterval](#setautosaveinterval) to change the autosave interval after your application initializes the `CDataRecoveryHandler`.

## <a name="queryrestoreautosaveddocuments"></a> CDataRecoveryHandler::QueryRestoreAutosavedDocuments

Displays a dialog box to the user for each document that the `CDataRecoveryHandler` autosaved. The dialog box determines whether the user wants to restore the autosaved document.

```
virtual void QueryRestoreAutosavedDocuments();
```

### Remarks

If your application is Unicode, this method displays a [CTaskDialog](../../mfc/reference/ctaskdialog-class.md) to the user. Otherwise, the framework uses [AfxMessageBox](../../mfc/reference/cstring-formatting-and-message-box-display.md#afxmessagebox) to query the user.

After `QueryRestoreAutosavedDocuments` gathers all the responses from the user, it stores the information in the member variable *m_mapDocNameToRestoreBool*. This method does not restore the autosaved documents.

## <a name="readopendocumentlist"></a> CDataRecoveryHandler::ReadOpenDocumentList

Loads the open document list from the registry.

```
virtual BOOL ReadOpenDocumentList();
```

### Return Value

TRUE indicates that `ReadOpenDocumentList` loaded the information for at least one document from the registry; FALSE indicates no document information was loaded.

### Remarks

This function loads the open document information from the registry and stores it in the member variable *m_mapDocNameToAutosaveName*.

After `ReadOpenDocumentList` loads all the data, it deletes the document information from the registry.

## <a name="removedocumentinfo"></a> CDataRecoveryHandler::RemoveDocumentInfo

Removes the supplied document from the open document list.

```
virtual BOOL RemoveDocumentInfo(CDocument* pDocument);
```

### Parameters

*pDocument*\
[in] A pointer to the document to remove.

### Return Value

TRUE if *pDocument* was removed from the list; FALSE if an error occurred.

### Remarks

When the user closes a document, the framework uses this method to remove it from the list of open documents.

If `RemoveDocumentInfo` cannot find *pDocument* in the list of open documents, it does nothing and returns TRUE.

To use this method, AFX_RESTART_MANAGER_REOPEN_PREVIOUS_FILES must be set in *m_dwRestartManagerSupportFlags*.

## <a name="reopenpreviousdocuments"></a> CDataRecoveryHandler::ReopenPreviousDocuments

Opens the previously open documents.

```
virtual BOOL ReopenPreviousDocuments();
```

### Return Value

TRUE if at least one document was opened; otherwise FALSE.

### Remarks

This method opens the most recent save of the previously open documents. If a document was not saved or autosaved, `ReopenPreviousDocuments` opens a blank document based on the template for that file type.

To use this method, AFX_RESTART_MANAGER_REOPEN_PREVIOUS_FILES must be set in *m_dwRestartManagerSupportFlags*. If this parameter is not set, `ReopenPreviousDocuments` does nothing and returns FALSE.

If there are no documents stored in the list of previously open documents, `ReopenPreviousDocuments` does nothing and returns FALSE.

## <a name="restoreautosaveddocuments"></a> CDataRecoveryHandler::RestoreAutosavedDocuments

Restores the autosaved documents based on user input.

```
virtual BOOL RestoreAutosavedDocuments();
```

### Return Value

TRUE if this method successfully restores the documents.

### Remarks

This method calls [CDataRecoveryHandler::QueryRestoreAutosavedDocuments](#queryrestoreautosaveddocuments) to determine which documents the user wants to restore. If a user decides not to restore an autosaved document, `RestoreAutosavedDocuments` deletes the autosave file. Otherwise, `RestoreAutosavedDocuments` replaces the open document with the autosaved version.

To use this method, either AFX_RESTART_MANAGER_REOPEN_PREVIOUS_FILES or AFX_RESTART_MANAGER_RESTORE_AUTOSAVED_FILES must be set in `m_dwRestartManagerSupportFlags`.

## <a name="saveopendocumentlist"></a> CDataRecoveryHandler::SaveOpenDocumentList

Saves the current list of open documents to the Windows registry.

```
virtual BOOL SaveOpenDocumentList();
```

### Return Value

TRUE if there are no open documents to save or if they were saved successfully. FALSE if there are documents to save to the registry, but they were not saved because an error occurred.

### Remarks

The restart manager calls `SaveOpenDocumentList` when the application exits unexpectedly or when it exits for an upgrade. When the application restarts, it uses [CDataRecoveryHandler::ReadOpenDocumentList](#readopendocumentlist) to retrieve the list of open documents.

This method saves only the list of open documents. The method [CDataRecoveryHandler::AutosaveDocumentInfo](#autosavedocumentinfo) is responsible for saving the documents themselves.

## <a name="setautosaveinterval"></a> CDataRecoveryHandler::SetAutosaveInterval

Sets the time between autosave cycles in milliseconds.

```
Virtual void SetAutosaveInterval(int nAutosaveInterval);
```

### Parameters

*nAutosaveInterval*<br/>
[in] The new autosave interval in milliseconds.

## <a name="setautosavepath"></a> CDataRecoveryHandler::SetAutosavePath

Sets the directory where autosaved files are stored.

```
virtual void SetAutosavePath(const CString& strAutosavePath);
```

### Parameters

*strAutosavePath*\
[in] The path where autosave files are stored.

### Remarks

Changing the autosave directory does not move currently autosaved files.

## <a name="setrestartidentifier"></a> CDataRecoveryHandler::SetRestartIdentifier

Sets the unique restart identifier for this instance of the `CDataRecoveryHandler`.

```
virtual void SetRestartIdentifier(const CString& strRestartIdentifier);
```

### Parameters

*strRestartIdentifier*\
[in] The unique identifier for the restart manager.

### Remarks

The restart manager records information about the open documents in the registry. This information is stored with the unique restart identifier as the key. Because the restart identifier is unique for each instance of an application, multiple instances of an application may exit unexpectedly and the restart manager can recover each of them.

## <a name="setsavedocumentinfoonidle"></a> CDataRecoveryHandler::SetSaveDocumentInfoOnIdle

Sets whether the `CDataRecoveryHandler` saves the open document information to the Windows registry during the current idle cycle.

```
virtual void SetSaveDocumentInfoOnIdle(BOOL bSaveOnIdle);
```

### Parameters

*bSaveOnIdle*\
[in] TRUE to save document information during the current idle cycle; FALSE to not perform a save.

## <a name="setshutdownbyrestartmanager"></a> CDataRecoveryHandler::SetShutdownByRestartManager

Sets whether the previous exit of the application was caused by the restart manager.

```
virtual void SetShutdownByRestartManager(BOOL bShutdownByRestartManager);
```

### Parameters

*bShutdownByRestartManager*\
[in] TRUE to indicate that the restart manager caused the application to exit; FALSE to indicate that the application exited for another reason.

### Remarks

The framework behaves differently based on whether the previous exit was unexpected or whether it was initiated by the restart manager.

## <a name="updatedocumentinfo"></a> CDataRecoveryHandler::UpdateDocumentInfo

Updates the information for a document because the user saved it.

```
virtual BOOL UpdateDocumentInfo(CDocument* pDocument);
```

### Parameters

*pDocument*\
[in] A pointer to the saved document.

### Return Value

TRUE if this method deleted the autosaved document and updated the document information; FALSE if an error occurred.

### Remarks

When a user saves a document, the application removes the autosaved file because it is no longer needed. `UpdateDocumentInfo` deletes the autosaved file by calling [CDataRecoveryHandler::RemoveDocumentInfo](#removedocumentinfo). `UpdateDocumentInfo` then adds the information from *pDocument* to the list of currently open documents because `RemoveDocumentInfo` deletes that information, but the saved document is still open.

To use this method, AFX_RESTART_MANAGER_REOPEN_PREVIOUS_FILES must be set in *m_dwRestartManagerSupportFlags*.

## See also

[Classes](../../mfc/reference/mfc-classes.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[CObject Class](../../mfc/reference/cobject-class.md)<br/>
[How to: Add Restart Manager Support](../../mfc/how-to-add-restart-manager-support.md)
