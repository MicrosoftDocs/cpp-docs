---
title: "CFileFind Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CFileFind"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "files [C++], finding"
  - "Internet files [C++], finding"
  - "CFileFind class"
  - "URLs [C++], searching for"
  - "local files"
  - "local files, searching for"
ms.assetid: 9990068c-b023-4114-9580-a50182d15240
caps.latest.revision: 22
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
|[CFileFind::CFileFind](#cfilefind__cfilefind)|Constructs a `CFileFind` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CFileFind::Close](#cfilefind__close)|Closes the search request.|  
|[CFileFind::FindFile](#cfilefind__findfile)|Searches a directory for a specified file name.|  
|[CFileFind::FindNextFile](#cfilefind__findnextfile)|Continues a file search from a previous call to [FindFile](#cfilefind__findfile).|  
|[CFileFind::GetCreationTime](#cfilefind__getcreationtime)|Gets the time the file was created.|  
|[CFileFind::GetFileName](#cfilefind__getfilename)|Gets the name, including the extension, of the found file|  
|[CFileFind::GetFilePath](#cfilefind__getfilepath)|Gets the whole path of the found file.|  
|[CFileFind::GetFileTitle](#cfilefind__getfiletitle)|Gets the title of the found file. The title does not include the extension.|  
|[CFileFind::GetFileURL](#cfilefind__getfileurl)|Gets the URL, including the file path, of the found file.|  
|[CFileFind::GetLastAccessTime](#cfilefind__getlastaccesstime)|Gets the time that the file was last accessed.|  
|[CFileFind::GetLastWriteTime](#cfilefind__getlastwritetime)|Gets the time the file was last changed and saved.|  
|[CFileFind::GetLength](#cfilefind__getlength)|Gets the length of the found file, in bytes.|  
|[CFileFind::GetRoot](#cfilefind__getroot)|Gets the root directory of the found file.|  
|[CFileFind::IsArchived](#cfilefind__isarchived)|Determines if the found file is archived.|  
|[CFileFind::IsCompressed](#cfilefind__iscompressed)|Determines if the found file is compressed.|  
|[CFileFind::IsDirectory](#cfilefind__isdirectory)|Determines if the found file is a directory.|  
|[CFileFind::IsDots](#cfilefind__isdots)|Determines if the name of the found file has the name "." or "..", indicating that is actually a directory.|  
|[CFileFind::IsHidden](#cfilefind__ishidden)|Determines if the found file is hidden.|  
|[CFileFind::IsNormal](#cfilefind__isnormal)|Determines if the found file is normal (in other words, has no other attributes).|  
|[CFileFind::IsReadOnly](#cfilefind__isreadonly)|Determines if the found file is read-only.|  
|[CFileFind::IsSystem](#cfilefind__issystem)|Determines if the found file is a system file.|  
|[CFileFind::IsTemporary](#cfilefind__istemporary)|Determines if the found file is temporary.|  
|[CFileFind::MatchesMask](#cfilefind__matchesmask)|Indicates the desired file attributes of the file to be found.|  
  
### Protected Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CFileFind::CloseContext](#cfilefind__closecontext)|Closes the file specified by the current search handle.|  
  
### Protected Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CFileFind::m_pTM](#cfilefind__m_ptm)|Pointer to a `CAtlTransactionManager` object.|  
  
## Remarks  
 `CFileFind` includes member functions that begin a search, locate a file, and return the title, name, or path of the file. For Internet searches, the member function [GetFileURL](#cfilefind__getfileurl) returns the file's URL.  
  
 `CFileFind` is the base class for two other MFC classes designed to search particular server types: `CGopherFileFind` works specifically with gopher servers, and `CFtpFileFind` works specifically with FTP servers. Together, these three classes provide a seamless mechanism for the client to find files, regardless of the server protocol, the file type, or location, on either a local machine or a remote server.  
  
 The following code will enumerate all the files in the current directory, printing the name of each file:  
  
 [!code-cpp[NVC_MFCFiles#31](../../atl-mfc-shared/reference/codesnippet/cpp/cfilefind-class_1.cpp)]  
  
 To keep the example simple, this code uses the standard C++ library `cout` class. The `cout` line could be replaced with a call to `CListBox::AddString`, for example, in a program with a graphical user interface.  
  
 For more information about how to use `CFileFind` and the other WinInet classes, see the article [Internet Programming with WinInet](../../mfc/win32-internet-extensions-wininet.md).  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CFileFind`  
  
## Requirements  
 **Header:** afx.h  
  
##  <a name="cfilefind__cfilefind"></a>  CFileFind::CFileFind  
 This member function is called when a `CFileFind` object is constructed.  
  
```  
CFileFind();

 
CFileFind(CAtlTransactionManager* pTM);
```  
  
### Parameters  
 `pTM`  
 Pointer to CAtlTransactionManager object  
  
### Example  
  See the example for [CFileFind::GetFileName](#cfilefind__getfilename).  
  
##  <a name="cfilefind__close"></a>  CFileFind::Close  
 Call this member function to end the search, reset the context, and release all resources.  
  
```  
void Close();
```  
  
### Remarks  
 After calling **Close**, you do not have to create a new `CFileFind` instance before calling [FindFile](#cfilefind__findfile) to begin a new search.  
  
### Example  
  See the example for [CFileFind::GetFileName](#cfilefind__getfilename).  
  
##  <a name="cfilefind__closecontext"></a>  CFileFind::CloseContext  
 Closes the file specified by the current search handle.  
  
```  
virtual void CloseContext();
```  
  
### Remarks  
 Closes the file specified by the current value of the search handle. Override this function to change the default behavior.  
  
 You must call the [FindFile](#cfilefind__findfile) or [FindNextFile](#cfilefind__findnextfile) functions at least once to retrieve a valid search handle. The **FindFile** and `FindNextFile` functions use the search handle to locate files with names that match a given name.  
  
##  <a name="cfilefind__findfile"></a>  CFileFind::FindFile  
 Call this member function to open a file search.  
  
```  
virtual BOOL FindFile(
    LPCTSTR pstrName = NULL,  
    DWORD dwUnused = 0);
```  
  
### Parameters  
 `pstrName`  
 A pointer to a string containing the name of the file to find. If you pass **NULL** for `pstrName`, **FindFile** does a wildcard (*.\*) search.  
  
 *dwUnused*  
 Reserved to make **FindFile** polymorphic with derived classes. Must be 0.  
  
### Return Value  
 Nonzero if successful; otherwise 0. To get extended error information, call the Win32 function [GetLastError](http://msdn.microsoft.com/library/windows/desktop/ms679360).  
  
### Remarks  
 After calling **FindFile** to begin the file search, call [FindNextFile](#cfilefind__findnextfile) to retrieve subsequent files. You must call `FindNextFile` at least once before calling any of the following attribute member functions:  
  
- [GetCreationTime](#cfilefind__getcreationtime)  
  
- [GetFileName](#cfilefind__getfilename)  
  
- [GetFileTitle](#cfilefind__getfiletitle)  
  
- [GetFilePath](#cfilefind__getfilepath)  
  
- [GetFileURL](#cfilefind__getfileurl)  
  
- [GetLastAccessTime](#cfilefind__getlastaccesstime)  
  
- [GetLastWriteTime](#cfilefind__getlastwritetime)  
  
- [GetLength](#cfilefind__getlength)  
  
- [GetRoot](#cfilefind__getroot)  
  
- [IsArchived](#cfilefind__isarchived)  
  
- [IsCompressed](#cfilefind__iscompressed)  
  
- [IsDirectory](#cfilefind__isdirectory)  
  
- [IsDots](#cfilefind__isdots)  
  
- [IsHidden](#cfilefind__ishidden)  
  
- [IsNormal](#cfilefind__isnormal)  
  
- [IsReadOnly](#cfilefind__isreadonly)  
  
- [IsSystem](#cfilefind__issystem)  
  
- [IsTemporary](#cfilefind__istemporary)  
  
- [MatchesMask](#cfilefind__matchesmask)  
  
### Example  
  See the example for [CFileFind::IsDirectory](#cfilefind__isdirectory).  
  
##  <a name="cfilefind__findnextfile"></a>  CFileFind::FindNextFile  
 Call this member function to continue a file search from a previous call to [FindFile](#cfilefind__findfile).  
  
```  
virtual BOOL FindNextFile();
```  
  
### Return Value  
 Nonzero if there are more files; zero if the file found is the last one in the directory or if an error occurred. To get extended error information, call the Win32 function [GetLastError](http://msdn.microsoft.com/library/windows/desktop/ms679360). If the file found is the last file in the directory, or if no matching files can be found, the `GetLastError` function returns ERROR_NO_MORE_FILES.  
  
### Remarks  
 You must call `FindNextFile` at least once before calling any of the following attribute member functions:  
  
- [GetCreationTime](#cfilefind__getcreationtime)  
  
- [GetFileName](#cfilefind__getfilename)  
  
- [GetFileTitle](#cfilefind__getfiletitle)  
  
- [GetFilePath](#cfilefind__getfilepath)  
  
- [GetFileURL](#cfilefind__getfileurl)  
  
- [GetLastAccessTime](#cfilefind__getlastaccesstime)  
  
- [GetLastWriteTime](#cfilefind__getlastwritetime)  
  
- [GetLength](#cfilefind__getlength)  
  
- [GetRoot](#cfilefind__getroot)  
  
- [IsArchived](#cfilefind__isarchived)  
  
- [IsCompressed](#cfilefind__iscompressed)  
  
- [IsDirectory](#cfilefind__isdirectory)  
  
- [IsDots](#cfilefind__isdots)  
  
- [IsHidden](#cfilefind__ishidden)  
  
- [IsNormal](#cfilefind__isnormal)  
  
- [IsReadOnly](#cfilefind__isreadonly)  
  
- [IsSystem](#cfilefind__issystem)  
  
- [IsTemporary](#cfilefind__istemporary)  
  
- [MatchesMask](#cfilefind__matchesmask)  
  
 `FindNextFile` wraps the Win32 function [FindNextFile](http://msdn.microsoft.com/library/windows/desktop/aa364428).  
  
### Example  
  See the example for [CFileFind::IsDirectory](#cfilefind__isdirectory).  
  
##  <a name="cfilefind__getcreationtime"></a>  CFileFind::GetCreationTime  
 Call this member function to get the time the specified file was created.  
  
```  
virtual BOOL GetCreationTime(FILETIME* pTimeStamp) const;

 
 
virtual BOOL GetCreationTime(CTime& refTime) const;

 
```  
  
### Parameters  
 `pTimeStamp`  
 A pointer to a [FILETIME](http://msdn.microsoft.com/library/windows/desktop/ms724284) structure containing the time the file was created.  
  
 `refTime`  
 A reference to a [CTime](../../atl-mfc-shared/reference/ctime-class.md) object.  
  
### Return Value  
 Nonzero if successful; 0 if unsuccessful. `GetCreationTime` returns 0 only if [FindNextFile](#cfilefind__findnextfile) has never been called on this `CFileFind` object.  
  
### Remarks  
 You must call [FindNextFile](#cfilefind__findnextfile) at least once before calling `GetCreationTime`.  
  
> [!NOTE]
>  Not all file systems use the same semantics to implement the time stamp returned by this function. This function may return the same value returned by other time stamp functions if the underlying file system or server does not support keeping the time attribute. See the [Win32_FIND_DATA](http://msdn.microsoft.com/library/windows/desktop/aa365740) structure for information about time formats. On some operation systems, the returned time is in the time zone local to the machine were the file is located. See the Win32 [FileTimeToLocalFileTime](http://msdn.microsoft.com/library/windows/desktop/ms724277) API for more information.  
  
### Example  
  See the example for [CFileFind::GetLength](#cfilefind__getlength).  
  
##  <a name="cfilefind__getfilename"></a>  CFileFind::GetFileName  
 Call this member function to get the name of the found file.  
  
```  
virtual CString GetFileName() const;

 
```  
  
### Return Value  
 The name of the most-recently-found file.  
  
### Remarks  
 You must call [FindNextFile](#cfilefind__findnextfile) at least once before calling GetFileName.  
  
 `GetFileName` is one of three `CFileFind` member functions that return some form of the file name. The following list describes the three and how they vary:  
  
- `GetFileName` returns the file name, including the extension. For example, calling `GetFileName` to generate a user message about the file `c:\myhtml\myfile.txt` returns the file name `myfile.txt`.  
  
- [GetFilePath](#cfilefind__getfilepath) returns the entire path for the file. For example, calling `GetFilePath` to generate a user message about the file `c:\myhtml\myfile.txt` returns the file path `c:\myhtml\myfile.txt`.  
  
- [GetFileTitle](#cfilefind__getfiletitle) returns the file name, excluding the file extension. For example, calling `GetFileTitle` to generate a user message about the file `c:\myhtml\myfile.txt` returns the file title `myfile`.  
  
### Example  
 [!code-cpp[NVC_MFCFiles#32](../../atl-mfc-shared/reference/codesnippet/cpp/cfilefind-class_2.cpp)]  
  
##  <a name="cfilefind__getfilepath"></a>  CFileFind::GetFilePath  
 Call this member function to get the full path of the specified file.  
  
```  
virtual CString GetFilePath() const;

 
```  
  
### Return Value  
 The path of the specified file.  
  
### Remarks  
 You must call [FindNextFile](#cfilefind__findnextfile) at least once before calling `GetFilePath`.  
  
 `GetFilePath` is one of three `CFileFind` member functions that return some form of the file name. The following list describes the three and how they vary:  
  
- [GetFileName](#cfilefind__getfilename) returns the file name, including the extension. For example, calling `GetFileName` to generate a user message about the file `c:\myhtml\myfile.txt` returns the file name `myfile.txt`.  
  
- `GetFilePath` returns the entire path for the file. For example, calling `GetFilePath` to generate a user message about the file `c:\myhtml\myfile.txt` returns the file path `c:\myhtml\myfile.txt`.  
  
- [GetFileTitle](#cfilefind__getfiletitle) returns the file name, excluding the file extension. For example, calling `GetFileTitle` to generate a user message about the file `c:\myhtml\myfile.txt` returns the file title `myfile`.  
  
### Example  
  See the example for [CFileFind::GetFileName](#cfilefind__getfilename).  
  
##  <a name="cfilefind__getfiletitle"></a>  CFileFind::GetFileTitle  
 Call this member function to get the title of the found file.  
  
```  
virtual CString GetFileTitle() const;

 
```  
  
### Return Value  
 The title of the file.  
  
### Remarks  
 You must call [FindNextFile](#cfilefind__findnextfile) at least once before calling `GetFileTitle`.  
  
 `GetFileTitle` is one of three `CFileFind` member functions that return some form of the file name. The following list describes the three and how they vary:  
  
- [GetFileName](#cfilefind__getfilename) returns the file name, including the extension. For example, calling `GetFileName` to generate a user message about the file `c:\myhtml\myfile.txt` returns the file name `myfile.txt`.  
  
- [GetFilePath](#cfilefind__getfilepath) returns the entire path for the file. For example, calling `GetFilePath` to generate a user message about the file `c:\myhtml\myfile.txt` returns the file path `c:\myhtml\myfile.txt`.  
  
- `GetFileTitle` returns the file name, excluding the file extension. For example, calling `GetFileTitle` to generate a user message about the file `c:\myhtml\myfile.txt` returns the file title `myfile`.  
  
### Example  
  See the example for [CFileFind::GetFileName](#cfilefind__getfilename).  
  
##  <a name="cfilefind__getfileurl"></a>  CFileFind::GetFileURL  
 Call this member function to retrieve the specified URL.  
  
```  
virtual CString GetFileURL() const;

 
```  
  
### Return Value  
 The complete URL.  
  
### Remarks  
 You must call [FindNextFile](#cfilefind__findnextfile) at least once before calling `GetFileURL`.  
  
 `GetFileURL` is similar to the member function [GetFilePath](#cfilefind__getfilepath), except that it returns the URL in the form `file://path`. For example, calling `GetFileURL` to get the complete URL for `myfile.txt` returns the URL `file://c:\myhtml\myfile.txt`.  
  
### Example  
  See the example for [CFileFind::GetFileName](#cfilefind__getfilename).  
  
##  <a name="cfilefind__getlastaccesstime"></a>  CFileFind::GetLastAccessTime  
 Call this member function to get the time that the specified file was last accessed.  
  
```  
virtual BOOL GetLastAccessTime(CTime& refTime) const;

 
 
virtual BOOL GetLastAccessTime(FILETIME* pTimeStamp) const;

 
```  
  
### Parameters  
 `refTime`  
 A reference to a [CTime](../../atl-mfc-shared/reference/ctime-class.md) object.  
  
 `pTimeStamp`  
 A pointer to a [FILETIME](http://msdn.microsoft.com/library/windows/desktop/ms724284) structure containing the time the file was last accessed.  
  
### Return Value  
 Nonzero if successful; 0 if unsuccessful. `GetLastAccessTime` returns 0 only if [FindNextFile](#cfilefind__findnextfile) has never been called on this `CFileFind` object.  
  
### Remarks  
 You must call [FindNextFile](#cfilefind__findnextfile) at least once before calling `GetLastAccessTime`.  
  
> [!NOTE]
>  Not all file systems use the same semantics to implement the time stamp returned by this function. This function may return the same value returned by other time stamp functions if the underlying file system or server does not support keeping the time attribute. See the [Win32_FIND_DATA](http://msdn.microsoft.com/library/windows/desktop/aa365740) structure for information about time formats. On some operation systems, the returned time is in the time zone local to the machine were the file is located. See the Win32 [FileTimeToLocalFileTime](http://msdn.microsoft.com/library/windows/desktop/ms724277) API for more information.  
  
### Example  
  See the example for [CFileFind::GetLength](#cfilefind__getlength).  
  
##  <a name="cfilefind__getlastwritetime"></a>  CFileFind::GetLastWriteTime  
 Call this member function to get the last time the file was changed.  
  
```  
virtual BOOL GetLastWriteTime(FILETIME* pTimeStamp) const;

 
 
virtual BOOL GetLastWriteTime(CTime& refTime) const;

 
```  
  
### Parameters  
 `pTimeStamp`  
 A pointer to a [FILETIME](http://msdn.microsoft.com/library/windows/desktop/ms724284) structure containing the time the file was last written to.  
  
 `refTime`  
 A reference to a [CTime](../../atl-mfc-shared/reference/ctime-class.md) object.  
  
### Return Value  
 Nonzero if successful; 0 if unsuccessful. `GetLastWriteTime` returns 0 only if [FindNextFile](#cfilefind__findnextfile) has never been called on this `CFileFind` object.  
  
### Remarks  
 You must call [FindNextFile](#cfilefind__findnextfile) at least once before calling `GetLastWriteTime`.  
  
> [!NOTE]
>  Not all file systems use the same semantics to implement the time stamp returned by this function. This function may return the same value returned by other time stamp functions if the underlying file system or server does not support keeping the time attribute. See the [Win32_Find_Data](http://msdn.microsoft.com/library/windows/desktop/aa365740) structure for information about time formats. On some operation systems, the returned time is in the time zone local to the machine were the file is located. See the Win32 [FileTimeToLocalFileTime](http://msdn.microsoft.com/library/windows/desktop/ms724277) API for more information.  
  
### Example  
  See the example for [CFileFind::GetLength](#cfilefind__getlength).  
  
##  <a name="cfilefind__getlength"></a>  CFileFind::GetLength  
 Call this member function to get the length of the found file, in bytes.  
  
```  
ULONGLONG GetLength() const;

 
```  
  
### Return Value  
 The length of the found file, in bytes.  
  
### Remarks  
 You must call [FindNextFile](#cfilefind__findnextfile) at least once before calling `GetLength`.  
  
 `GetLength` uses the Win32 structure [WIN32_FIND_DATA](http://msdn.microsoft.com/library/windows/desktop/aa365740) to get and return the value of the file size, in bytes.  
  
> [!NOTE]
>  As of MFC 7.0, `GetLength` supports 64-bit integer types. Previously existing code built with this newer version of the library may result in truncation warnings.  
  
### Example  
 [!code-cpp[NVC_MFCFiles#33](../../atl-mfc-shared/reference/codesnippet/cpp/cfilefind-class_3.cpp)]  
  
##  <a name="cfilefind__getroot"></a>  CFileFind::GetRoot  
 Call this member function to get the root of the found file.  
  
```  
virtual CString GetRoot() const;

 
```  
  
### Return Value  
 The root of the active search.  
  
### Remarks  
 You must call [FindNextFile](#cfilefind__findnextfile) at least once before calling `GetRoot`.  
  
 This member function returns the drive specifier and path name used to start a search. For example, calling [FindFile](#cfilefind__findfile) with `*.dat` results in `GetRoot` returning an empty string. Passing a path, such as `c:\windows\system\*.dll`, to **FindFile** results `GetRoot` returning `c:\windows\system\`.  
  
### Example  
  See the example for [CFileFind::GetFileName](#cfilefind__getfilename).  
  
##  <a name="cfilefind__isarchived"></a>  CFileFind::IsArchived  
 Call this member function to determine if the found file is archived.  
  
```  
BOOL IsArchived() const;

 
```  
  
### Return Value  
 Nonzero if successful; otherwise 0.  
  
### Remarks  
 Applications mark an archive file, which is to be backed up or removed, with FILE_ATTRIBUTE_ARCHIVE, a file attribute identified in the [WIN32_FIND_DATA](http://msdn.microsoft.com/library/windows/desktop/aa365740) structure.  
  
 You must call [FindNextFile](#cfilefind__findnextfile) at least once before calling `IsArchived`.  
  
 See the member function [MatchesMask](#cfilefind__matchesmask) for a complete list of file attributes.  
  
### Example  
  See the example for [CFileFind::GetLength](#cfilefind__getlength).  
  
##  <a name="cfilefind__iscompressed"></a>  CFileFind::IsCompressed  
 Call this member function to determine if the found file is compressed.  
  
```  
BOOL IsCompressed() const;

 
```  
  
### Return Value  
 Nonzero if successful; otherwise 0.  
  
### Remarks  
 A compressed file is marked with FILE_ATTRIBUTE_COMPRESSED, a file attribute identified in the [WIN32_FIND_DATA](http://msdn.microsoft.com/library/windows/desktop/aa365740) structure. For a file, this attribute indicates that all of the data in the file is compressed. For a directory, this attribute indicates that compression is the default for newly created files and subdirectories.  
  
 You must call [FindNextFile](#cfilefind__findnextfile) at least once before calling `IsCompressed`.  
  
 See the member function [MatchesMask](#cfilefind__matchesmask) for a complete list of file attributes.  
  
### Example  
  See the example for [CFileFind::GetLength](#cfilefind__getlength).  
  
##  <a name="cfilefind__isdirectory"></a>  CFileFind::IsDirectory  
 Call this member function to determine if the found file is a directory.  
  
```  
BOOL IsDirectory() const;

 
```  
  
### Return Value  
 Nonzero if successful; otherwise 0.  
  
### Remarks  
 A file that is a directory is marked with FILE_ATTRIBUTE_DIRECTORY a file attribute identified in the [WIN32_FIND_DATA](http://msdn.microsoft.com/library/windows/desktop/aa365740) structure.  
  
 You must call [FindNextFile](#cfilefind__findnextfile) at least once before calling `IsDirectory`.  
  
 See the member function [MatchesMask](#cfilefind__matchesmask) for a complete list of file attributes.  
  
### Example  
 This small program recurses every directory on the C:\ drive and prints the name of the directory.  
  
 [!code-cpp[NVC_MFCFiles#34](../../atl-mfc-shared/reference/codesnippet/cpp/cfilefind-class_4.cpp)]  
  
##  <a name="cfilefind__isdots"></a>  CFileFind::IsDots  
 Call this member function to test for the current directory and parent directory markers while iterating through files.  
  
```  
virtual BOOL IsDots() const;

 
```  
  
### Return Value  
 Nonzero if the found file has the name "." or "..", which indicates that the found file is actually a directory. Otherwise 0.  
  
### Remarks  
 You must call [FindNextFile](#cfilefind__findnextfile) at least once before calling `IsDots`.  
  
### Example  
  See the example for [CFileFind::IsDirectory](#cfilefind__isdirectory).  
  
##  <a name="cfilefind__ishidden"></a>  CFileFind::IsHidden  
 Call this member function to determine if the found file is hidden.  
  
```  
BOOL IsHidden() const;

 
```  
  
### Return Value  
 Nonzero if successful; otherwise 0.  
  
### Remarks  
 Hidden files, which are marked with FILE_ATTRIBUTE_HIDDEN, a file attribute identified in the [WIN32_FIND_DATA](http://msdn.microsoft.com/library/windows/desktop/aa365740) structure. A hidden file is not included in an ordinary directory listing.  
  
 You must call [FindNextFile](#cfilefind__findnextfile) at least once before calling `IsHidden`.  
  
 See the member function [MatchesMask](#cfilefind__matchesmask) for a complete list of file attributes.  
  
### Example  
  See the example for [CFileFind::GetLength](#cfilefind__getlength).  
  
##  <a name="cfilefind__isnormal"></a>  CFileFind::IsNormal  
 Call this member function to determine if the found file is a normal file.  
  
```  
BOOL IsNormal() const;

 
```  
  
### Return Value  
 Nonzero if successful; otherwise 0.  
  
### Remarks  
 Files marked with FILE_ATTRIBUTE_NORMAL, a file attribute identified in the [WIN32_FIND_DATA](http://msdn.microsoft.com/library/windows/desktop/aa365740) structure. A normal file has no other attributes set. All other file attributes override this attribute.  
  
 You must call [FindNextFile](#cfilefind__findnextfile) at least once before calling `IsNormal`.  
  
 See the member function [MatchesMask](#cfilefind__matchesmask) for a complete list of file attributes.  
  
### Example  
  See the example for [CFileFind::GetLength](#cfilefind__getlength).  
  
##  <a name="cfilefind__isreadonly"></a>  CFileFind::IsReadOnly  
 Call this member function to determine if the found file is read-only.  
  
```  
BOOL IsReadOnly() const;

 
```  
  
### Return Value  
 Nonzero if successful; otherwise 0.  
  
### Remarks  
 A read-only file is marked with FILE_ATTRIBUTE_READONLY, a file attribute identified in the [WIN32_FIND_DATA](http://msdn.microsoft.com/library/windows/desktop/aa365740) structure. Applications can read such a file, but they cannot write to it or delete it.  
  
 You must call [FindNextFile](#cfilefind__findnextfile) at least once before calling `IsReadOnly`.  
  
 See the member function [MatchesMask](#cfilefind__matchesmask) for a complete list of file attributes.  
  
### Example  
  See the example for [CFileFind::GetLength](#cfilefind__getlength).  
  
##  <a name="cfilefind__issystem"></a>  CFileFind::IsSystem  
 Call this member function to determine if the found file is a system file.  
  
```  
BOOL IsSystem() const;

 
```  
  
### Return Value  
 Nonzero if successful; otherwise 0.  
  
### Remarks  
 A system file is marked with FILE_ATTRIBUTE_SYSTEM, , a file attribute identified in the [WIN32_FIND_DATA](http://msdn.microsoft.com/library/windows/desktop/aa365740) structure. A system file is part of, or is used exclusively by, the operating system.  
  
 You must call [FindNextFile](#cfilefind__findnextfile) at least once before calling `IsSystem`.  
  
 See the member function [MatchesMask](#cfilefind__matchesmask) for a complete list of file attributes.  
  
### Example  
  See the example for [CFileFind::GetLength](#cfilefind__getlength).  
  
##  <a name="cfilefind__istemporary"></a>  CFileFind::IsTemporary  
 Call this member function to determine if the found file is a temporary file.  
  
```  
BOOL IsTemporary() const;

 
```  
  
### Return Value  
 Nonzero if successful; otherwise 0.  
  
### Remarks  
 A temporary file is marked with FILE_ATTRIBUTE_TEMPORARY, a file attribute identified in the [WIN32_FIND_DATA](http://msdn.microsoft.com/library/windows/desktop/aa365740) structure. A temporary file is used for temporary storage. Applications should write to the file only if absolutely necessary. Most of the file's data remains in memory without being flushed to the media because the file will soon be deleted.  
  
 You must call [FindNextFile](#cfilefind__findnextfile) at least once before calling `IsTemporary`.  
  
 See the member function [MatchesMask](#cfilefind__matchesmask) for a complete list of file attributes.  
  
### Example  
  See the example for [CFileFind::GetLength](#cfilefind__getlength).  
  
##  <a name="cfilefind__m_ptm"></a>  CFileFind::m_pTM  
 Pointer to a `CAtlTransactionManager` object.  
  
```  
CAtlTransactionManager* m_pTM;  
```  
  
### Remarks  
  
##  <a name="cfilefind__matchesmask"></a>  CFileFind::MatchesMask  
 Call this member function to test the file attributes on the found file.  
  
```  
virtual BOOL MatchesMask(DWORD dwMask) const;

 
```  
  
### Parameters  
 `dwMask`  
 Specifies one or more file attributes, identified in the [WIN32_FIND_DATA](http://msdn.microsoft.com/library/windows/desktop/aa365740) structure, for the found file. To search for multiple attributes, use the bitwise OR (&#124;) operator. Any combination of the following attributes is acceptable:  
  
-   FILE_ATTRIBUTE_ARCHIVE   The file is an archive file. Applications use this attribute to mark files for backup or removal.  
  
-   FILE_ATTRIBUTE_COMPRESSED   The file or directory is compressed. For a file, this means that all of the data in the file is compressed. For a directory, this means that compression is the default for newly created files and subdirectories.  
  
-   FILE_ATTRIBUTE_DIRECTORY   The file is a directory.  
  
-   FILE_ATTRIBUTE_NORMAL   The file has no other attributes set. This attribute is valid only if used alone. All other file attributes override this attribute.  
  
-   FILE_ATTRIBUTE_HIDDEN   The file is hidden. It is not to be included in an ordinary directory listing.  
  
-   FILE_ATTRIBUTE_READONLY   The file is read only. Applications can read the file but cannot write to it or delete it.  
  
-   FILE_ATTRIBUTE_SYSTEM   The file is part of or is used exclusively by the operating system.  
  
-   FILE_ATTRIBUTE_TEMPORARY   The file is being used for temporary storage. Applications should write to the file only if absolutely necessary. Most of the file's data remains in memory without being flushed to the media because the file will soon be deleted.  
  
### Return Value  
 Nonzero if successful; otherwise 0. To get extended error information, call the Win32 function [GetLastError](http://msdn.microsoft.com/library/windows/desktop/ms679360).  
  
### Remarks  
 You must call [FindNextFile](#cfilefind__findnextfile) at least once before calling `MatchesMask`.  
  
### Example  
 [!code-cpp[NVC_MFCFiles#35](../../atl-mfc-shared/reference/codesnippet/cpp/cfilefind-class_5.cpp)]  
  
## See Also  
 [CObject Class](../../mfc/reference/cobject-class.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [CFtpFileFind Class](../../mfc/reference/cftpfilefind-class.md)   
 [CGopherFileFind Class](../../mfc/reference/cgopherfilefind-class.md)   
 [CInternetFile Class](../../mfc/reference/cinternetfile-class.md)   
 [CGopherFile Class](../../mfc/reference/cgopherfile-class.md)   
 [CHttpFile Class](../../mfc/reference/chttpfile-class.md)
