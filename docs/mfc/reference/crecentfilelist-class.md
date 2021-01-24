---
description: "Learn more about: CRecentFileList Class"
title: "CRecentFileList Class"
ms.date: "11/04/2016"
f1_keywords: ["CRecentFileList", "AFXADV/CRecentFileList", "AFXADV/CRecentFileList::CRecentFileList", "AFXADV/CRecentFileList::Add", "AFXADV/CRecentFileList::GetDisplayName", "AFXADV/CRecentFileList::GetSize", "AFXADV/CRecentFileList::ReadList", "AFXADV/CRecentFileList::Remove", "AFXADV/CRecentFileList::UpdateMenu", "AFXADV/CRecentFileList::WriteList"]
helpviewer_keywords: ["CRecentFileList [MFC], CRecentFileList", "CRecentFileList [MFC], Add", "CRecentFileList [MFC], GetDisplayName", "CRecentFileList [MFC], GetSize", "CRecentFileList [MFC], ReadList", "CRecentFileList [MFC], Remove", "CRecentFileList [MFC], UpdateMenu", "CRecentFileList [MFC], WriteList"]
ms.assetid: a77f0524-7584-4582-849a-7e97b76d186e
---
# CRecentFileList Class

Supports control of the most recently used (MRU) file list.

## Syntax

```
class CRecentFileList
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CRecentFileList::CRecentFileList](#crecentfilelist)|Constructs a `CRecentFileList` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CRecentFileList::Add](#add)|Adds a file to the MRU file list.|
|[CRecentFileList::GetDisplayName](#getdisplayname)|Provides a display name for menu display of an MRU filename.|
|[CRecentFileList::GetSize](#getsize)|Retrieves the number of files in the MRU file list.|
|[CRecentFileList::ReadList](#readlist)|Reads the MRU file list from the registry or .INI file.|
|[CRecentFileList::Remove](#remove)|Removes a file from the MRU file list.|
|[CRecentFileList::UpdateMenu](#updatemenu)|Updates the menu display of the MRU file list.|
|[CRecentFileList::WriteList](#writelist)|Writes the MRU file list from the registry or .INI file.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[CRecentFileList::operator \[ \]](#operator_at)|Returns a `CString` object at a given position.|

## Remarks

Files can be added to or deleted from the MRU file list, the file list can be read from or written to the registry or an .INI file, and the menu displaying the MRU file list can be updated.

## Inheritance Hierarchy

`CRecentFileList`

## Requirements

**Header:** afxadv.h

## <a name="add"></a> CRecentFileList::Add

Adds a file to the most recently used (MRU) file list.

```
virtual void Add(LPCTSTR lpszPathName);

virtual void Add(
    LPCTSTR lpszPathName,
    LPCTSTR lpszAppID);

void Add(
    IShellItem* pItem,
    LPCTSTR lpszAppID);

void Add(
    IShellLink* pLink,
    LPCTSTR lpszAppID);

void Add(
    PIDLIST_ABSOLUTE pidl,
    LPCTSTR lpszAppID);
```

### Parameters

*lpszPathName*<br/>
Specifies pathname to be added to the list.

*lpszAppID*<br/>
Specifies Application User Model ID for the application.

*pItem*<br/>
Specifies a pointer to Shell Item to be added to the list.

*pLink*<br/>
Specifies a pointer to Shell Link to be added to the list.

*pidl*<br/>
Specifies the IDLIST for the shell item that should be added to the recent docs folder.

### Remarks

The file name will be added to the top of the MRU list. If the file name already exists in the MRU list, it will be moved to the top.

## <a name="crecentfilelist"></a> CRecentFileList::CRecentFileList

Constructs a `CRecentFileList` object.

```
CRecentFileList(
    UINT nStart,
    LPCTSTR lpszSection,
    LPCTSTR lpszEntryFormat,
    int nSize,
    int nMaxDispLen = AFX_ABBREV_FILENAME_LEN);
```

### Parameters

*nStart*<br/>
Offset for the numbering in the menu display of the MRU (most recently used) file list.

*lpszSection*<br/>
Points to the name of the section of the registry or the application's .INI file where the MRU file list is read and/or written.

*lpszEntryFormat*<br/>
Points to a format string to be used for the names of the entries stored in the registry or the application's .INI file.

*nSize*<br/>
Maximum number of files in the MRU file list.

*nMaxDispLen*<br/>
Maximum length, in characters, available for the menu display of a filename in the MRU file list.

### Remarks

The format string pointed to by *lpszEntryFormat* should contain "%d", which will be used for substituting the index of each MRU item. For example, if the format string is `"file%d"` then the entries will be named `file0`, `file1`, and so on.

## <a name="getdisplayname"></a> CRecentFileList::GetDisplayName

Obtains a display name for a file in the MRU file list, for use in the menu display of the MRU list.

```
virtual BOOL GetDisplayName(
    CString& strName,
    int nIndex,
    LPCTSTR lpszCurDir,
    int nCurDir,
    BOOL bAtLeastName = TRUE) const;
```

### Parameters

*strName*<br/>
Full path of the file whose name is to be displayed in the menu list of MRU files.

*nIndex*<br/>
Zero-based index of the file in the MRU file list.

*lpszCurDir*<br/>
String holding the current directory.

*nCurDir*<br/>
Length of the current directory string.

*bAtLeastName*<br/>
If nonzero, indicates that the base name of the file should be returned, even if it exceeds the maximum display length (passed as the *nMaxDispLen* parameter to the `CRecentFileList` constructor).

### Return Value

**FALSE** if there is no filename at the specified index in the most recently used (MRU) file list.

### Remarks

If the file is in the current directory, the function leaves the directory off the display. If the filename is too long, the directory and extension are stripped. If the filename is still too long, the display name is set to an empty string unless *bAtLeastName* is nonzero.

## <a name="getsize"></a> CRecentFileList::GetSize

Retrieves the number of files in the MRU file list.

```
int GetSize() const;
```

### Return Value

The number of files in the current most recently used (MRU) file list.

## <a name="operator_at"></a> CRecentFileList::operator [ ]

The overloaded subscript (`[]`) operator returns a single `CString` specified by the zero-based index in *nIndex*.

```
CString& operator[ ](int nindex);
```

### Parameters

*nIndex*<br/>
Zero-based index of a `CString` in a set of `CString`s.

## <a name="readlist"></a> CRecentFileList::ReadList

Reads the most recently used (MRU) file list from the registry or the application's .INI file.

```
virtual void ReadList();
```

## <a name="remove"></a> CRecentFileList::Remove

Removes a file from the MRU file list.

```
virtual void Remove(int nIndex);
```

### Parameters

*nIndex*<br/>
Zero-based index of the file to be removed from the most recently used (MRU) file list.

## <a name="updatemenu"></a> CRecentFileList::UpdateMenu

Updates the menu display of the MRU file list.

```
virtual void UpdateMenu(CCmdUI* pCmdUI);
```

### Parameters

*pCmdUI*<br/>
A pointer to the [CCmdUI](../../mfc/reference/ccmdui-class.md) object for the most recently used (MRU) file list menu.

## <a name="writelist"></a> CRecentFileList::WriteList

Writes the most recently used (MRU) file list into the registry or the application's .INI file.

```
virtual void WriteList();
```

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)
