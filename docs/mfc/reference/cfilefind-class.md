---
description: "Learn more about: CFileFind Class"
title: "CFileFind Class"
ms.date: "11/04/2016"
f1_keywords: ["CFileFind", "AFX/CFileFind", "AFX/CFileFind::CFileFind", "AFX/CFileFind::Close", "AFX/CFileFind::FindFile", "AFX/CFileFind::FindNextFile", "AFX/CFileFind::GetCreationTime", "AFX/CFileFind::GetFileName", "AFX/CFileFind::GetFilePath", "AFX/CFileFind::GetFileTitle", "AFX/CFileFind::GetFileURL", "AFX/CFileFind::GetLastAccessTime", "AFX/CFileFind::GetLastWriteTime", "AFX/CFileFind::GetLength", "AFX/CFileFind::GetRoot", "AFX/CFileFind::IsArchived", "AFX/CFileFind::IsCompressed", "AFX/CFileFind::IsDirectory", "AFX/CFileFind::IsDots", "AFX/CFileFind::IsHidden", "AFX/CFileFind::IsNormal", "AFX/CFileFind::IsReadOnly", "AFX/CFileFind::IsSystem", "AFX/CFileFind::IsTemporary", "AFX/CFileFind::MatchesMask", "AFX/CFileFind::CloseContext", "AFX/CFileFind::m_pTM"]
helpviewer_keywords: ["CFileFind [MFC], CFileFind", "CFileFind [MFC], Close", "CFileFind [MFC], FindFile", "CFileFind [MFC], FindNextFile", "CFileFind [MFC], GetCreationTime", "CFileFind [MFC], GetFileName", "CFileFind [MFC], GetFilePath", "CFileFind [MFC], GetFileTitle", "CFileFind [MFC], GetFileURL", "CFileFind [MFC], GetLastAccessTime", "CFileFind [MFC], GetLastWriteTime", "CFileFind [MFC], GetLength", "CFileFind [MFC], GetRoot", "CFileFind [MFC], IsArchived", "CFileFind [MFC], IsCompressed", "CFileFind [MFC], IsDirectory", "CFileFind [MFC], IsDots", "CFileFind [MFC], IsHidden", "CFileFind [MFC], IsNormal", "CFileFind [MFC], IsReadOnly", "CFileFind [MFC], IsSystem", "CFileFind [MFC], IsTemporary", "CFileFind [MFC], MatchesMask", "CFileFind [MFC], CloseContext", "CFileFind [MFC], m_pTM"]
ms.assetid: 9990068c-b023-4114-9580-a50182d15240
---
# CFileFind Class

Performs local file searches and is the base class for [CGopherFileFind](../../mfc/reference/cgopherfilefind-class.md) and [CFtpFileFind](../../mfc/reference/cftpfilefind-class.md), which perform Internet file searches.

## Syntax

```
class CFileFind : public CObject
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CFileFind::CFileFind](#cfilefind)|Constructs a `CFileFind` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CFileFind::Close](#close)|Closes the search request.|
|[CFileFind::FindFile](#findfile)|Searches a directory for a specified file name.|
|[CFileFind::FindNextFile](#findnextfile)|Continues a file search from a previous call to [FindFile](#findfile).|
|[CFileFind::GetCreationTime](#getcreationtime)|Gets the time the file was created.|
|[CFileFind::GetFileName](#getfilename)|Gets the name, including the extension, of the found file|
|[CFileFind::GetFilePath](#getfilepath)|Gets the whole path of the found file.|
|[CFileFind::GetFileTitle](#getfiletitle)|Gets the title of the found file. The title does not include the extension.|
|[CFileFind::GetFileURL](#getfileurl)|Gets the URL, including the file path, of the found file.|
|[CFileFind::GetLastAccessTime](#getlastaccesstime)|Gets the time that the file was last accessed.|
|[CFileFind::GetLastWriteTime](#getlastwritetime)|Gets the time the file was last changed and saved.|
|[CFileFind::GetLength](#getlength)|Gets the length of the found file, in bytes.|
|[CFileFind::GetRoot](#getroot)|Gets the root directory of the found file.|
|[CFileFind::IsArchived](#isarchived)|Determines if the found file is archived.|
|[CFileFind::IsCompressed](#iscompressed)|Determines if the found file is compressed.|
|[CFileFind::IsDirectory](#isdirectory)|Determines if the found file is a directory.|
|[CFileFind::IsDots](#isdots)|Determines if the name of the found file has the name "." or "..", indicating that is actually a directory.|
|[CFileFind::IsHidden](#ishidden)|Determines if the found file is hidden.|
|[CFileFind::IsNormal](#isnormal)|Determines if the found file is normal (in other words, has no other attributes).|
|[CFileFind::IsReadOnly](#isreadonly)|Determines if the found file is read-only.|
|[CFileFind::IsSystem](#issystem)|Determines if the found file is a system file.|
|[CFileFind::IsTemporary](#istemporary)|Determines if the found file is temporary.|
|[CFileFind::MatchesMask](#matchesmask)|Indicates the desired file attributes of the file to be found.|

### Protected Methods

|Name|Description|
|----------|-----------------|
|[CFileFind::CloseContext](#closecontext)|Closes the file specified by the current search handle.|

### Protected Data Members

|Name|Description|
|----------|-----------------|
|[CFileFind::m_pTM](#m_ptm)|Pointer to a `CAtlTransactionManager` object.|

## Remarks

`CFileFind` includes member functions that begin a search, locate a file, and return the title, name, or path of the file. For Internet searches, the member function [GetFileURL](#getfileurl) returns the file's URL.

`CFileFind` is the base class for two other MFC classes designed to search particular server types: `CGopherFileFind` works specifically with gopher servers, and `CFtpFileFind` works specifically with FTP servers. Together, these three classes provide a seamless mechanism for the client to find files, regardless of the server protocol, the file type, or location, on either a local machine or a remote server.

The following code will enumerate all the files in the current directory, printing the name of each file:

[!code-cpp[NVC_MFCFiles#31](../../atl-mfc-shared/reference/codesnippet/cpp/cfilefind-class_1.cpp)]

To keep the example simple, this code uses the C++ Standard Library `cout` class. The `cout` line could be replaced with a call to `CListBox::AddString`, for example, in a program with a graphical user interface.

For more information about how to use `CFileFind` and the other WinInet classes, see the article [Internet Programming with WinInet](../../mfc/win32-internet-extensions-wininet.md).

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

`CFileFind`

## Requirements

**Header:** afx.h

## <a name="cfilefind"></a> CFileFind::CFileFind

This member function is called when a `CFileFind` object is constructed.

```
CFileFind();
CFileFind(CAtlTransactionManager* pTM);
```

### Parameters

*pTM*<br/>
Pointer to CAtlTransactionManager object

### Example

  See the example for [CFileFind::GetFileName](#getfilename).

## <a name="close"></a> CFileFind::Close

Call this member function to end the search, reset the context, and release all resources.

```cpp
void Close();
```

### Remarks

After calling `Close`, you do not have to create a new `CFileFind` instance before calling [FindFile](#findfile) to begin a new search.

### Example

  See the example for [CFileFind::GetFileName](#getfilename).

## <a name="closecontext"></a> CFileFind::CloseContext

Closes the file specified by the current search handle.

```
virtual void CloseContext();
```

### Remarks

Closes the file specified by the current value of the search handle. Override this function to change the default behavior.

You must call the [FindFile](#findfile) or [FindNextFile](#findnextfile) functions at least once to retrieve a valid search handle. The `FindFile` and `FindNextFile` functions use the search handle to locate files with names that match a given name.

## <a name="findfile"></a> CFileFind::FindFile

Call this member function to open a file search.

```
virtual BOOL FindFile(
    LPCTSTR pstrName = NULL,
    DWORD dwUnused = 0);
```

### Parameters

*pstrName*<br/>
A pointer to a string containing the name of the file to find. If you pass NULL for *pstrName*, `FindFile` does a wildcard (*.\*) search.

*dwUnused*<br/>
Reserved to make `FindFile` polymorphic with derived classes. Must be 0.

### Return Value

Nonzero if successful; otherwise 0. To get extended error information, call the Win32 function [GetLastError](/windows/win32/api/errhandlingapi/nf-errhandlingapi-getlasterror).

### Remarks

After calling `FindFile` to begin the file search, call [FindNextFile](#findnextfile) to retrieve subsequent files. You must call `FindNextFile` at least once before calling any of the following attribute member functions:

- [GetCreationTime](#getcreationtime)

- [GetFileName](#getfilename)

- [GetFileTitle](#getfiletitle)

- [GetFilePath](#getfilepath)

- [GetFileURL](#getfileurl)

- [GetLastAccessTime](#getlastaccesstime)

- [GetLastWriteTime](#getlastwritetime)

- [GetLength](#getlength)

- [GetRoot](#getroot)

- [IsArchived](#isarchived)

- [IsCompressed](#iscompressed)

- [IsDirectory](#isdirectory)

- [IsDots](#isdots)

- [IsHidden](#ishidden)

- [IsNormal](#isnormal)

- [IsReadOnly](#isreadonly)

- [IsSystem](#issystem)

- [IsTemporary](#istemporary)

- [MatchesMask](#matchesmask)

### Example

  See the example for [CFileFind::IsDirectory](#isdirectory).

## <a name="findnextfile"></a> CFileFind::FindNextFile

Call this member function to continue a file search from a previous call to [FindFile](#findfile).

```
virtual BOOL FindNextFile();
```

### Return Value

Nonzero if there are more files; zero if the file found is the last one in the directory or if an error occurred. To get extended error information, call the Win32 function [GetLastError](/windows/win32/api/errhandlingapi/nf-errhandlingapi-getlasterror). If the file found is the last file in the directory, or if no matching files can be found, the `GetLastError` function returns ERROR_NO_MORE_FILES.

### Remarks

You must call `FindNextFile` at least once before calling any of the following attribute member functions:

- [GetCreationTime](#getcreationtime)

- [GetFileName](#getfilename)

- [GetFileTitle](#getfiletitle)

- [GetFilePath](#getfilepath)

- [GetFileURL](#getfileurl)

- [GetLastAccessTime](#getlastaccesstime)

- [GetLastWriteTime](#getlastwritetime)

- [GetLength](#getlength)

- [GetRoot](#getroot)

- [IsArchived](#isarchived)

- [IsCompressed](#iscompressed)

- [IsDirectory](#isdirectory)

- [IsDots](#isdots)

- [IsHidden](#ishidden)

- [IsNormal](#isnormal)

- [IsReadOnly](#isreadonly)

- [IsSystem](#issystem)

- [IsTemporary](#istemporary)

- [MatchesMask](#matchesmask)

`FindNextFile` wraps the Win32 function [FindNextFile](/windows/win32/api/fileapi/nf-fileapi-findnextfilew).

### Example

  See the example for [CFileFind::IsDirectory](#isdirectory).

## <a name="getcreationtime"></a> CFileFind::GetCreationTime

Call this member function to get the time the specified file was created.

```
virtual BOOL GetCreationTime(FILETIME* pTimeStamp) const;
virtual BOOL GetCreationTime(CTime& refTime) const;
```

### Parameters

*pTimeStamp*<br/>
A pointer to a [FILETIME](/windows/win32/api/minwinbase/ns-minwinbase-filetime) structure containing the time the file was created.

*refTime*<br/>
A reference to a [CTime](../../atl-mfc-shared/reference/ctime-class.md) object.

### Return Value

Nonzero if successful; 0 if unsuccessful. `GetCreationTime` returns 0 only if [FindNextFile](#findnextfile) has never been called on this `CFileFind` object.

### Remarks

You must call [FindNextFile](#findnextfile) at least once before calling `GetCreationTime`.

> [!NOTE]
> Not all file systems use the same semantics to implement the time stamp returned by this function. This function may return the same value returned by other time stamp functions if the underlying file system or server does not support keeping the time attribute. See the [WIN32_FIND_DATA](/windows/win32/api/minwinbase/ns-minwinbase-win32_find_dataw) structure for information about time formats. On some operation systems, the returned time is in the time zone local to the machine were the file is located. See the Win32 [FileTimeToLocalFileTime](/windows/win32/api/fileapi/nf-fileapi-filetimetolocalfiletime) API for more information.

### Example

  See the example for [CFileFind::GetLength](#getlength).

## <a name="getfilename"></a> CFileFind::GetFileName

Call this member function to get the name of the found file.

```
virtual CString GetFileName() const;
```

### Return Value

The name of the most-recently-found file.

### Remarks

You must call [FindNextFile](#findnextfile) at least once before calling GetFileName.

`GetFileName` is one of three `CFileFind` member functions that return some form of the file name. The following list describes the three and how they vary:

- `GetFileName` returns the file name, including the extension. For example, calling `GetFileName` to generate a user message about the file *c:\myhtml\myfile.txt* returns the file name *myfile.txt*.

- [GetFilePath](#getfilepath) returns the entire path for the file. For example, calling `GetFilePath` to generate a user message about the file *c:\myhtml\myfile.txt* returns the file path *c:\myhtml\myfile.txt*.

- [GetFileTitle](#getfiletitle) returns the file name, excluding the file extension. For example, calling `GetFileTitle` to generate a user message about the file *c:\myhtml\myfile.txt* returns the file title *myfile*.

### Example

[!code-cpp[NVC_MFCFiles#32](../../atl-mfc-shared/reference/codesnippet/cpp/cfilefind-class_2.cpp)]

## <a name="getfilepath"></a> CFileFind::GetFilePath

Call this member function to get the full path of the specified file.

```
virtual CString GetFilePath() const;
```

### Return Value

The path of the specified file.

### Remarks

You must call [FindNextFile](#findnextfile) at least once before calling `GetFilePath`.

`GetFilePath` is one of three `CFileFind` member functions that return some form of the file name. The following list describes the three and how they vary:

- [GetFileName](#getfilename) returns the file name, including the extension. For example, calling `GetFileName` to generate a user message about the file *c:\myhtml\myfile.txt* returns the file name *myfile.txt*.

- `GetFilePath` returns the entire path for the file. For example, calling `GetFilePath` to generate a user message about the file `c:\myhtml\myfile.txt` returns the file path `c:\myhtml\myfile.txt`.

- [GetFileTitle](#getfiletitle) returns the file name, excluding the file extension. For example, calling `GetFileTitle` to generate a user message about the file *c:\myhtml\myfile.txt* returns the file title *myfile*.

### Example

  See the example for [CFileFind::GetFileName](#getfilename).

## <a name="getfiletitle"></a> CFileFind::GetFileTitle

Call this member function to get the title of the found file.

```
virtual CString GetFileTitle() const;
```

### Return Value

The title of the file.

### Remarks

You must call [FindNextFile](#findnextfile) at least once before calling `GetFileTitle`.

`GetFileTitle` is one of three `CFileFind` member functions that return some form of the file name. The following list describes the three and how they vary:

- [GetFileName](#getfilename) returns the file name, including the extension. For example, calling `GetFileName` to generate a user message about the file *c:\myhtml\myfile.txt* returns the file name *myfile.txt*.

- [GetFilePath](#getfilepath) returns the entire path for the file. For example, calling `GetFilePath` to generate a user message about the file *c:\myhtml\myfile.txt* returns the file path *c:\myhtml\myfile.txt*.

- `GetFileTitle` returns the file name, excluding the file extension. For example, calling `GetFileTitle` to generate a user message about the file *c:\myhtml\myfile.txt* returns the file title *myfile*.

### Example

  See the example for [CFileFind::GetFileName](#getfilename).

## <a name="getfileurl"></a> CFileFind::GetFileURL

Call this member function to retrieve the specified URL.

```
virtual CString GetFileURL() const;
```

### Return Value

The complete URL.

### Remarks

You must call [FindNextFile](#findnextfile) at least once before calling `GetFileURL`.

`GetFileURL` is similar to the member function [GetFilePath](#getfilepath), except that it returns the URL in the form `file://path`. For example, calling `GetFileURL` to get the complete URL for *myfile.txt* returns the URL `file://c:\myhtml\myfile.txt`.

### Example

  See the example for [CFileFind::GetFileName](#getfilename).

## <a name="getlastaccesstime"></a> CFileFind::GetLastAccessTime

Call this member function to get the time that the specified file was last accessed.

```
virtual BOOL GetLastAccessTime(CTime& refTime) const;
virtual BOOL GetLastAccessTime(FILETIME* pTimeStamp) const;
```

### Parameters

*refTime*<br/>
A reference to a [CTime](../../atl-mfc-shared/reference/ctime-class.md) object.

*pTimeStamp*<br/>
A pointer to a [FILETIME](/windows/win32/api/minwinbase/ns-minwinbase-filetime) structure containing the time the file was last accessed.

### Return Value

Nonzero if successful; 0 if unsuccessful. `GetLastAccessTime` returns 0 only if [FindNextFile](#findnextfile) has never been called on this `CFileFind` object.

### Remarks

You must call [FindNextFile](#findnextfile) at least once before calling `GetLastAccessTime`.

> [!NOTE]
> Not all file systems use the same semantics to implement the time stamp returned by this function. This function may return the same value returned by other time stamp functions if the underlying file system or server does not support keeping the time attribute. See the [WIN32_FIND_DATA](/windows/win32/api/minwinbase/ns-minwinbase-win32_find_dataw) structure for information about time formats. On some operation systems, the returned time is in the time zone local to the machine were the file is located. See the Win32 [FileTimeToLocalFileTime](/windows/win32/api/fileapi/nf-fileapi-filetimetolocalfiletime) API for more information.

### Example

  See the example for [CFileFind::GetLength](#getlength).

## <a name="getlastwritetime"></a> CFileFind::GetLastWriteTime

Call this member function to get the last time the file was changed.

```
virtual BOOL GetLastWriteTime(FILETIME* pTimeStamp) const;
virtual BOOL GetLastWriteTime(CTime& refTime) const;
```

### Parameters

*pTimeStamp*<br/>
A pointer to a [FILETIME](/windows/win32/api/minwinbase/ns-minwinbase-filetime) structure containing the time the file was last written to.

*refTime*<br/>
A reference to a [CTime](../../atl-mfc-shared/reference/ctime-class.md) object.

### Return Value

Nonzero if successful; 0 if unsuccessful. `GetLastWriteTime` returns 0 only if [FindNextFile](#findnextfile) has never been called on this `CFileFind` object.

### Remarks

You must call [FindNextFile](#findnextfile) at least once before calling `GetLastWriteTime`.

> [!NOTE]
> Not all file systems use the same semantics to implement the time stamp returned by this function. This function may return the same value returned by other time stamp functions if the underlying file system or server does not support keeping the time attribute. See the [WIN32_FIND_DATA](/windows/win32/api/minwinbase/ns-minwinbase-win32_find_dataw) structure for information about time formats. On some operation systems, the returned time is in the time zone local to the machine were the file is located. See the Win32 [FileTimeToLocalFileTime](/windows/win32/api/fileapi/nf-fileapi-filetimetolocalfiletime) API for more information.

### Example

  See the example for [CFileFind::GetLength](#getlength).

## <a name="getlength"></a> CFileFind::GetLength

Call this member function to get the length of the found file, in bytes.

```
ULONGLONG GetLength() const;
```

### Return Value

The length of the found file, in bytes.

### Remarks

You must call [FindNextFile](#findnextfile) at least once before calling `GetLength`.

`GetLength` uses the Win32 structure [WIN32_FIND_DATA](/windows/win32/api/minwinbase/ns-minwinbase-win32_find_dataw) to get and return the value of the file size, in bytes.

> [!NOTE]
> As of MFC 7.0, `GetLength` supports 64-bit integer types. Previously existing code built with this newer version of the library may result in truncation warnings.

### Example

[!code-cpp[NVC_MFCFiles#33](../../atl-mfc-shared/reference/codesnippet/cpp/cfilefind-class_3.cpp)]

## <a name="getroot"></a> CFileFind::GetRoot

Call this member function to get the root of the found file.

```
virtual CString GetRoot() const;
```

### Return Value

The root of the active search.

### Remarks

You must call [FindNextFile](#findnextfile) at least once before calling `GetRoot`.

This member function returns the drive specifier and path name used to start a search. For example, calling [FindFile](#findfile) with `*.dat` results in `GetRoot` returning an empty string. Passing a path, such as `c:\windows\system\*.dll`, to `FindFile` results `GetRoot` returning `c:\windows\system\`.

### Example

  See the example for [CFileFind::GetFileName](#getfilename).

## <a name="isarchived"></a> CFileFind::IsArchived

Call this member function to determine if the found file is archived.

```
BOOL IsArchived() const;
```

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

Applications mark an archive file, which is to be backed up or removed, with FILE_ATTRIBUTE_ARCHIVE, a file attribute identified in the [WIN32_FIND_DATA](/windows/win32/api/minwinbase/ns-minwinbase-win32_find_dataw) structure.

You must call [FindNextFile](#findnextfile) at least once before calling `IsArchived`.

See the member function [MatchesMask](#matchesmask) for a complete list of file attributes.

### Example

  See the example for [CFileFind::GetLength](#getlength).

## <a name="iscompressed"></a> CFileFind::IsCompressed

Call this member function to determine if the found file is compressed.

```
BOOL IsCompressed() const;
```

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

A compressed file is marked with FILE_ATTRIBUTE_COMPRESSED, a file attribute identified in the [WIN32_FIND_DATA](/windows/win32/api/minwinbase/ns-minwinbase-win32_find_dataw) structure. For a file, this attribute indicates that all of the data in the file is compressed. For a directory, this attribute indicates that compression is the default for newly created files and subdirectories.

You must call [FindNextFile](#findnextfile) at least once before calling `IsCompressed`.

See the member function [MatchesMask](#matchesmask) for a complete list of file attributes.

### Example

  See the example for [CFileFind::GetLength](#getlength).

## <a name="isdirectory"></a> CFileFind::IsDirectory

Call this member function to determine if the found file is a directory.

```
BOOL IsDirectory() const;
```

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

A file that is a directory is marked with FILE_ATTRIBUTE_DIRECTORY a file attribute identified in the [WIN32_FIND_DATA](/windows/win32/api/minwinbase/ns-minwinbase-win32_find_dataw) structure.

You must call [FindNextFile](#findnextfile) at least once before calling `IsDirectory`.

See the member function [MatchesMask](#matchesmask) for a complete list of file attributes.

### Example

This small program recurses every directory on the C:\ drive and prints the name of the directory.

[!code-cpp[NVC_MFCFiles#34](../../atl-mfc-shared/reference/codesnippet/cpp/cfilefind-class_4.cpp)]

## <a name="isdots"></a> CFileFind::IsDots

Call this member function to test for the current directory and parent directory markers while iterating through files.

```
virtual BOOL IsDots() const;
```

### Return Value

Nonzero if the found file has the name "." or "..", which indicates that the found file is actually a directory. Otherwise 0.

### Remarks

You must call [FindNextFile](#findnextfile) at least once before calling `IsDots`.

### Example

  See the example for [CFileFind::IsDirectory](#isdirectory).

## <a name="ishidden"></a> CFileFind::IsHidden

Call this member function to determine if the found file is hidden.

```
BOOL IsHidden() const;
```

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

Hidden files, which are marked with FILE_ATTRIBUTE_HIDDEN, a file attribute identified in the [WIN32_FIND_DATA](/windows/win32/api/minwinbase/ns-minwinbase-win32_find_dataw) structure. A hidden file is not included in an ordinary directory listing.

You must call [FindNextFile](#findnextfile) at least once before calling `IsHidden`.

See the member function [MatchesMask](#matchesmask) for a complete list of file attributes.

### Example

  See the example for [CFileFind::GetLength](#getlength).

## <a name="isnormal"></a> CFileFind::IsNormal

Call this member function to determine if the found file is a normal file.

```
BOOL IsNormal() const;
```

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

Files marked with FILE_ATTRIBUTE_NORMAL, a file attribute identified in the [WIN32_FIND_DATA](/windows/win32/api/minwinbase/ns-minwinbase-win32_find_dataw) structure. A normal file has no other attributes set. All other file attributes override this attribute.

You must call [FindNextFile](#findnextfile) at least once before calling `IsNormal`.

See the member function [MatchesMask](#matchesmask) for a complete list of file attributes.

### Example

  See the example for [CFileFind::GetLength](#getlength).

## <a name="isreadonly"></a> CFileFind::IsReadOnly

Call this member function to determine if the found file is read-only.

```
BOOL IsReadOnly() const;
```

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

A read-only file is marked with FILE_ATTRIBUTE_READONLY, a file attribute identified in the [WIN32_FIND_DATA](/windows/win32/api/minwinbase/ns-minwinbase-win32_find_dataw) structure. Applications can read such a file, but they cannot write to it or delete it.

You must call [FindNextFile](#findnextfile) at least once before calling `IsReadOnly`.

See the member function [MatchesMask](#matchesmask) for a complete list of file attributes.

### Example

  See the example for [CFileFind::GetLength](#getlength).

## <a name="issystem"></a> CFileFind::IsSystem

Call this member function to determine if the found file is a system file.

```
BOOL IsSystem() const;
```

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

A system file is marked with FILE_ATTRIBUTE_SYSTEM, , a file attribute identified in the [WIN32_FIND_DATA](/windows/win32/api/minwinbase/ns-minwinbase-win32_find_dataw) structure. A system file is part of, or is used exclusively by, the operating system.

You must call [FindNextFile](#findnextfile) at least once before calling `IsSystem`.

See the member function [MatchesMask](#matchesmask) for a complete list of file attributes.

### Example

  See the example for [CFileFind::GetLength](#getlength).

## <a name="istemporary"></a> CFileFind::IsTemporary

Call this member function to determine if the found file is a temporary file.

```
BOOL IsTemporary() const;
```

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

A temporary file is marked with FILE_ATTRIBUTE_TEMPORARY, a file attribute identified in the [WIN32_FIND_DATA](/windows/win32/api/minwinbase/ns-minwinbase-win32_find_dataw) structure. A temporary file is used for temporary storage. Applications should write to the file only if absolutely necessary. Most of the file's data remains in memory without being flushed to the media because the file will soon be deleted.

You must call [FindNextFile](#findnextfile) at least once before calling `IsTemporary`.

See the member function [MatchesMask](#matchesmask) for a complete list of file attributes.

### Example

  See the example for [CFileFind::GetLength](#getlength).

## <a name="m_ptm"></a> CFileFind::m_pTM

Pointer to a `CAtlTransactionManager` object.

```
CAtlTransactionManager* m_pTM;
```

### Remarks

## <a name="matchesmask"></a> CFileFind::MatchesMask

Call this member function to test the file attributes on the found file.

```
virtual BOOL MatchesMask(DWORD dwMask) const;
```

### Parameters

*dwMask*<br/>
Specifies one or more file attributes, identified in the [WIN32_FIND_DATA](/windows/win32/api/minwinbase/ns-minwinbase-win32_find_dataw) structure, for the found file. To search for multiple attributes, use the bitwise OR (&#124;) operator. Any combination of the following attributes is acceptable:

- FILE_ATTRIBUTE_ARCHIVE   The file is an archive file. Applications use this attribute to mark files for backup or removal.

- FILE_ATTRIBUTE_COMPRESSED   The file or directory is compressed. For a file, this means that all of the data in the file is compressed. For a directory, this means that compression is the default for newly created files and subdirectories.

- FILE_ATTRIBUTE_DIRECTORY   The file is a directory.

- FILE_ATTRIBUTE_NORMAL   The file has no other attributes set. This attribute is valid only if used alone. All other file attributes override this attribute.

- FILE_ATTRIBUTE_HIDDEN   The file is hidden. It is not to be included in an ordinary directory listing.

- FILE_ATTRIBUTE_READONLY   The file is read only. Applications can read the file but cannot write to it or delete it.

- FILE_ATTRIBUTE_SYSTEM   The file is part of or is used exclusively by the operating system.

- FILE_ATTRIBUTE_TEMPORARY   The file is being used for temporary storage. Applications should write to the file only if absolutely necessary. Most of the file's data remains in memory without being flushed to the media because the file will soon be deleted.

### Return Value

Nonzero if successful; otherwise 0. To get extended error information, call the Win32 function [GetLastError](/windows/win32/api/errhandlingapi/nf-errhandlingapi-getlasterror).

### Remarks

You must call [FindNextFile](#findnextfile) at least once before calling `MatchesMask`.

### Example

[!code-cpp[NVC_MFCFiles#35](../../atl-mfc-shared/reference/codesnippet/cpp/cfilefind-class_5.cpp)]

## See also

[CObject Class](../../mfc/reference/cobject-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[CFtpFileFind Class](../../mfc/reference/cftpfilefind-class.md)<br/>
[CGopherFileFind Class](../../mfc/reference/cgopherfilefind-class.md)<br/>
[CInternetFile Class](../../mfc/reference/cinternetfile-class.md)<br/>
[CGopherFile Class](../../mfc/reference/cgopherfile-class.md)<br/>
[CHttpFile Class](../../mfc/reference/chttpfile-class.md)
