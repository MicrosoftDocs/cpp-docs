---
title: "CFile Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CFile"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CFile class"
  - "CArchive class, using with CFile"
  - "files [C++], classes for"
ms.assetid: b2eb5757-d499-4e67-b044-dd7d1abaa0f8
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
# CFile Class
The base class for Microsoft Foundation Class file classes.  
  
## Syntax  
  
```  
class CFile : public CObject  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CFile::CFile](#cfile__cfile)|Constructs a `CFile` object from a path or file handle.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CFile::Abort](#cfile__abort)|Closes a file ignoring all warnings and errors.|  
|[CFile::Close](#cfile__close)|Closes a file and deletes the object.|  
|[CFile::Duplicate](#cfile__duplicate)|Constructs a duplicate object based on this file.|  
|[CFile::Flush](#cfile__flush)|Flushes any data yet to be written.|  
|[CFile::GetFileName](#cfile__getfilename)|Retrieves the filename of the selected file.|  
|[CFile::GetFilePath](#cfile__getfilepath)|Retrieves the full file path of the selected file.|  
|[CFile::GetFileTitle](#cfile__getfiletitle)|Retrieves the title of the selected file.|  
|[CFile::GetLength](#cfile__getlength)|Retrieves the length of the file.|  
|[CFile::GetPosition](#cfile__getposition)|Retrieves the current file pointer.|  
|[CFile::GetStatus](#cfile__getstatus)|Retrieves the status of the open file, or in the static version, retrieves the status of the specified file (static, virtual function).|  
|[CFile::LockRange](#cfile__lockrange)|Locks a range of bytes in a file.|  
|[CFile::Open](#cfile__open)|Safely opens a file with an error-testing option.|  
|[CFile::Read](#cfile__read)|Reads (unbuffered) data from a file at the current file position.|  
|[CFile::Remove](#cfile__remove)|Deletes the specified file (static function).|  
|[CFile::Rename](#cfile__rename)|Renames the specified file (static function).|  
|[CFile::Seek](#cfile__seek)|Positions the current file pointer.|  
|[CFile::SeekToBegin](#cfile__seektobegin)|Positions the current file pointer at the beginning of the file.|  
|[CFile::SeekToEnd](#cfile__seektoend)|Positions the current file pointer at the end of the file.|  
|[CFile::SetFilePath](#cfile__setfilepath)|Sets the full file path of the selected file.|  
|[CFile::SetLength](#cfile__setlength)|Changes the length of the file.|  
|[CFile::SetStatus](#cfile__setstatus)|Sets the status of the specified file (static, virtual function).|  
|[CFile::UnlockRange](#cfile__unlockrange)|Unlocks a range of bytes in a file.|  
|[CFile::Write](#cfile__write)|Writes (unbuffered) data in a file to the current file position.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[CFile::operator HANDLE](#cfile__operator_handle)|A handle to a `CFile` object.|  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CFile::hFileNull](#cfile__hfilenull)|Determines if the `CFile` object has a valid handle.|  
|[CFile::m_hFile](#cfile__m_hfile)|Usually contains the operating-system file handle.|  
  
### Protected Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CFile::m_pTM](#cfile__m_ptm)|Pointer to `CAtlTransactionManager` object.|  
  
## Remarks  
 It directly provides unbuffered, binary disk input/output services, and it indirectly supports text files and memory files through its derived classes. `CFile` works in conjunction with the `CArchive` class to support serialization of Microsoft Foundation Class objects.  
  
 The hierarchical relationship between this class and its derived classes allows your program to operate on all file objects through the polymorphic `CFile` interface. A memory file, for example, behaves like a disk file.  
  
 Use `CFile` and its derived classes for general-purpose disk I/O. Use `ofstream` or other Microsoft iostream classes for formatted text sent to a disk file.  
  
 Normally, a disk file is opened automatically on `CFile` construction and closed on destruction. Static member functions permit you to interrogate a file's status without opening the file.  
  
 For more information on using `CFile`, see the articles [Files in MFC](../../mfc/files-in-mfc.md) and [File Handling](../../c-runtime-library/file-handling.md) in the *Run-Time Library Reference*.  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CFile`  
  
## Requirements  
 **Header:** afx.h  
  
##  <a name="cfile__abort"></a>  CFile::Abort  
 Closes the file associated with this object and makes the file unavailable for reading or writing.  
  
```  
virtual void Abort();
```  
  
### Remarks  
 If you have not closed the file before destroying the object, the destructor closes it for you.  
  
 When handling exceptions, `CFile::Abort` differs from `CFile::Close` in two important ways. First, the **Abort** function will not throw an exception on failures because failures are ignored by **Abort**. Second, **Abort** will not **ASSERT** if the file has not been opened or was closed previously.  
  
 If you used **new** to allocate the `CFile` object on the heap, then you must delete it after closing the file. **Abort** sets `m_hFile` to `CFile::hFileNull`.  
  
### Example  
 [!code-cpp[NVC_MFCFiles#5](../../atl-mfc-shared/reference/codesnippet/cpp/cfile-class_1.cpp)]  
  
##  <a name="cfile__cfile"></a>  CFile::CFile  
 Constructs and initializes a `CFile` object.  
  
```  
 
CFile();

 
CFile(
CAtlTransactionManager* pTM);

 
CFile(
HANDLE hFile);

 
CFile(
LPCTSTR lpszFileName,  
UINT nOpenFlags);

 
CFile(
LPCTSTR lpszFileName,  
UINT nOpenFlags,  
CAtlTransactionManager* pTM);
```  
  
### Parameters  
 `hFile`  
 Handle of a file to attach to the `CFile` object.  
  
 `lpszFileName`  
 Relative or full path of a file to attach to the `CFile` object.  
  
 `nOpenFlags`  
 Bitwise combination (OR) of file access options for the specified file. See the Remarks section for possible options.  
  
 `pTM`  
 Pointer to CAtlTransactionManager object  
  
### Remarks  
 The following five tables list the possible options for the `nOpenFlags` parameter.  
  
 Choose only one of the following file access mode options. The default file access mode is `CFile::modeRead`, which is read only.  
  
|Value|Description|  
|-----------|-----------------|  
|`CFile::modeRead`|Requests read access only.|  
|`CFile::modeWrite`|Requests write access only.|  
|`CFile::modeReadWrite`|Requests read and write access.|  
  
 Choose one of the following character mode options.  
  
|Value|Description|  
|-----------|-----------------|  
|`CFile::typeBinary`|Sets binary mode (used in derived classes only).|  
|`CFile::typeText`|Sets text mode with special processing for carriage return–linefeed pairs (used in derived classes only).|  
|`CFile::typeUnicode`|Sets Unicode mode (used in derived classes only). Text is written to the file in Unicode format when the application is built in a Unicode configuration. No BOM is written to the file.|  
  
 Choose only one of the following file share mode options. The default file share mode is `CFile::shareExclusive`, which is exclusive.  
  
|Value|Description|  
|-----------|-----------------|  
|`CFile::shareDenyNone`|No sharing restrictions.|  
|`CFile::shareDenyRead`|Denies read access to all others.|  
|`CFile::shareDenyWrite`|Denies write access to all others.|  
|`CFile::shareExclusive`|Denies read and write access to all others.|  
  
 Choose the first, or both, of the following file creation mode options. The default creation mode is `CFile::modeNoTruncate`, which is open existing.  
  
|Value|Description|  
|-----------|-----------------|  
|`CFile::modeCreate`|Creates a new file if no file exists.; If the file already exists, [CFileException](../../mfc/reference/cfileexception-class.md) is raised.|  
|`CFile::modeNoTruncate`|Creates a new file if no file exists; otherwise, if the file already exists, it is attached to the `CFile` object.|  
  
 Choose the following file caching options as described. By default, the system uses a general purpose caching scheme that is not available as an option.  
  
|Value|Description|  
|-----------|-----------------|  
|`CFile::osNoBuffer`|The system does not use an intermediate cache for the file. This option cancels the following 2 options.|  
|`CFile::osRandomAccess`|The file cache is optimized for random access. Do not use this option and the sequential scan option.|  
|`CFile::osSequentialScan`|The file cache is optimized for sequential access. Do not use this option and the random access option.|  
|`CFile::osWriteThrough`|Write operations are performed without delay.|  
  
 Choose the following security option to prevent the file handle from being inherited. By default, any new child processes can use the file handle.  
  
|Value|Description|  
|-----------|-----------------|  
|`CFile::modeNoInherit`|Prevents any child processes from using the file handle.|  
  
 The default constructor initializes members but does not attach a file to the `CFile` object. After using this constructor, use the [CFile::Open](#cfile__open) method to open a file and attach it to the `CFile` object.  
  
 The constructor with one parameter initializes members and attaches an existing file to the `CFile` object.  
  
 The constructor with two parameters initializes members and tries to open the specified file. If this constructor successfully opens the specified file, the file is attached to the `CFile` object; otherwise, this constructor throws a pointer to a `CInvalidArgException` object. For more information about how to handle exceptions, see [Exceptions](../../mfc/exception-handling-in-mfc.md).  
  
 If a `CFile` object successfully opens a specified file, it will close this file automatically when the `CFile` object is destroyed; otherwise, you must explicitly close the file after it is no longer attached to the `CFile` object.  
  
### Example  
 The following code shows how to use a `CFile`.  
  
 [!code-cpp[NVC_MFCFiles#4](../../atl-mfc-shared/reference/codesnippet/cpp/cfile-class_2.cpp)]  
  
##  <a name="cfile__close"></a>  CFile::Close  
 Closes the file associated with this object and makes the file unavailable for reading or writing.  
  
```  
virtual void Close();
```  
  
### Remarks  
 If you have not closed the file before destroying the object, the destructor closes it for you.  
  
 If you used **new** to allocate the `CFile` object on the heap, then you must delete it after closing the file. **Close** sets `m_hFile` to `CFile::hFileNull`.  
  
### Example  
 See the example for [CFile::CFile](#cfile__cfile).  
  
##  <a name="cfile__duplicate"></a>  CFile::Duplicate  
 Constructs a duplicate `CFile` object for a given file.  
  
```  
virtual CFile* Duplicate() const;

 
```  
  
### Return Value  
 A pointer to a duplicate `CFile` object.  
  
### Remarks  
 This is equivalent to the C run-time function `_dup`.  
  
##  <a name="cfile__flush"></a>  CFile::Flush  
 Forces any data remaining in the file buffer to be written to the file.  
  
```  
virtual void Flush();
```  
  
### Remarks  
 The use of `Flush` does not guarantee flushing of `CArchive` buffers. If you are using an archive, call [CArchive::Flush](../../mfc/reference/carchive-class.md#carchive__flush) first.  
  
### Example  
 See the example for [CFile::SetFilePath](#cfile__setfilepath).  
  
##  <a name="cfile__getfilename"></a>  CFile::GetFileName  
 Call this member function to retrieve the name of a specified file.  
  
```  
virtual CString GetFileName() const;

 
```  
  
### Return Value  
 The name of the file.  
  
### Remarks  
 For example, when you call `GetFileName` to generate a message to the user about the file `c:\windows\write\myfile.wri`, the filename, `myfile.wri`, is returned.  
  
 To return the entire path of the file, including the name, call [GetFilePath](#cfile__getfilepath). To return the title of the file ( `myfile`), call [GetFileTitle](#cfile__getfiletitle).  
  
### Example  
 This code fragment opens the SYSTEM.INI file in your WINDOWS directory. If found, the example will print out the name and path and title, as shown under Output:  
  
 [!code-cpp[NVC_MFCFiles#6](../../atl-mfc-shared/reference/codesnippet/cpp/cfile-class_3.cpp)]  
  
##  <a name="cfile__getfilepath"></a>  CFile::GetFilePath  
 Call this member function to retrieve the full path of a specified file.  
  
```  
virtual CString GetFilePath() const;

 
```  
  
### Return Value  
 The full path of the specified file.  
  
### Remarks  
 For example, when you call `GetFilePath` to generate a message to the user about the file `c:\windows\write\myfile.wri`, the file path, `c:\windows\write\myfile.wri`, is returned.  
  
 To return just the name of the file ( `myfile.wri`), call [GetFileName](#cfile__getfilename). To return the title of the file ( `myfile`), call [GetFileTitle](#cfile__getfiletitle).  
  
### Example  
 See the example for [GetFileName](#cfile__getfilename).  
  
##  <a name="cfile__getfiletitle"></a>  CFile::GetFileTitle  
 Call this member function to retrieve the file title (the display name) for the file.  
  
```  
virtual CString GetFileTitle() const;

 
```  
  
### Return Value  
 The title of the underlying file.  
  
### Remarks  
 This method calls [GetFileTitle](http://msdn.microsoft.com/library/windows/desktop/ms646924) to retrieve the title of the file. If successful, the method returns the string that the system would use to display the file name to the user. Otherwise, the method calls [PathFindFileName](http://msdn.microsoft.com/library/windows/desktop/bb773589) to retrieve the file name (including the file extension) of the underlying file. Therefore, the file extension will not always be included in the returned file title string. For more information, see [GetFileTitle](http://msdn.microsoft.com/library/windows/desktop/ms646924) and [PathFindFileName](http://msdn.microsoft.com/library/windows/desktop/bb773589) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 To return the entire path of the file, including the name, call [GetFilePath](#cfile__getfilepath). To return just the name of the file, call [GetFileName](#cfile__getfilename).  
  
### Example  
 See the example for [GetFileName](#cfile__getfilename).  
  
##  <a name="cfile__getlength"></a>  CFile::GetLength  
 Obtains the current logical length of the file in bytes.  
  
```  
virtual ULONGLONG GetLength() const;

 
```  
  
### Return Value  
 The length of the file.  
  
### Example  
 [!code-cpp[NVC_MFCFiles#7](../../atl-mfc-shared/reference/codesnippet/cpp/cfile-class_4.cpp)]  
  
##  <a name="cfile__getposition"></a>  CFile::GetPosition  
 Obtains the current value of the file pointer, which can be used in subsequent calls to `Seek`.  
  
```  
virtual ULONGLONG GetPosition() const;

 
```  
  
### Return Value  
 The file pointer.  
  
### Example  
 [!code-cpp[NVC_MFCFiles#8](../../atl-mfc-shared/reference/codesnippet/cpp/cfile-class_5.cpp)]  
  
##  <a name="cfile__getstatus"></a>  CFile::GetStatus  
 This method retrieves status information related to a given `CFile` object instance or a given file path.  
  
```  
BOOL GetStatus(
    CFileStatus& rStatus) const;

 
 
static BOOL PASCAL GetStatus(
    LPCTSTR lpszFileName,  
    CFileStatus& rStatus,
    CAtlTransactionManager* pTM = NULL);
```  
  
### Parameters  
 `rStatus`  
 A reference to a user-supplied **CFileStatus** structure that will receive the status information. The **CFileStatus** structure has the following fields:  
  
- **CTime m_ctime** The date and time the file was created.  
  
- **CTime m_mtime** The date and time the file was last modified.  
  
- **CTime m_atime** The date and time the file was last accessed for reading.  
  
- **ULONGLONG m_size** The logical size of the file in bytes, as reported by the DIR command.  
  
- **BYTE m_attribute** The attribute byte of the file.  
  
- **char m_szFullName[_MAX_PATH]** The absolute filename in the Windows character set.  
  
 `lpszFileName`  
 A string in the Windows character set that is the path to the desired file. The path can be relative or absolute, or it can contain a network path name.  
  
 `pTM`  
 Pointer to CAtlTransactionManager object  
  
### Return Value  
 **TRUE** if the status information for the specified file is successfully obtained; otherwise, **FALSE**.  
  
### Remarks  
 The non-static version of **GetStatus** retrieves status information of the open file associated with the given `CFile` object.  The static version of **GetStatus** obtains the file status from a given file path without actually opening the file. This is useful for testing the existence and access rights of a file.  
  
 The **m_attribute** member of the **CFileStatus** structure refers to the file attribute set. The `CFile` class provides the **Attribute** enumeration type so file attributes can be specified symbolically:  
  
 `enum Attribute {`  
  
 `normal =    0x00,`  
  
 `readOnly =  0x01,`  
  
 `hidden =    0x02,`  
  
 `system =    0x04,`  
  
 `volume =    0x08,`  
  
 `directory = 0x10,`  
  
 `archive =   0x20`  
  
 `};`  
  
### Example  
 [!code-cpp[NVC_MFCFiles#10](../../atl-mfc-shared/reference/codesnippet/cpp/cfile-class_6.cpp)]  
  
##  <a name="cfile__hfilenull"></a>  CFile::hFileNull  
 Determines the presence of a valid file handle for the `CFile` object.  
  
```  
static AFX_DATA const HANDLE hFileNull;  
```  
  
### Remarks  
 This constant is used to determine if the `CFile` object has a valid file handle.  
  
 The following example demonstrates this operation:  
  
 [!code-cpp[NVC_MFCFiles#22](../../atl-mfc-shared/reference/codesnippet/cpp/cfile-class_7.cpp)]  
  
##  <a name="cfile__lockrange"></a>  CFile::LockRange  
 Locks a range of bytes in an open file, throwing an exception if the file is already locked.  
  
```  
virtual void LockRange(
    ULONGLONG dwPos,  
    ULONGLONG dwCount);
```  
  
### Parameters  
 `dwPos`  
 The byte offset of the start of the byte range to lock.  
  
 `dwCount`  
 The number of bytes in the range to lock.  
  
### Remarks  
 Locking bytes in a file prevents access to those bytes by other processes. You can lock more than one region of a file, but no overlapping regions are allowed.  
  
 When you unlock the region, using the `UnlockRange` member function, the byte range must correspond exactly to the region that was previously locked. The `LockRange` function does not merge adjacent regions; if two locked regions are adjacent, you must unlock each region separately.  
  
> [!NOTE]
>  This function is not available for the `CMemFile`-derived class.  
  
### Example  
 [!code-cpp[NVC_MFCFiles#12](../../atl-mfc-shared/reference/codesnippet/cpp/cfile-class_8.cpp)]  
  
##  <a name="cfile__m_hfile"></a>  CFile::m_hFile  
 Contains the operating-system file handle for an open file.  
  
```  
HANDLE m_hFile;  
```  
  
### Remarks  
 `m_hFile` is a public variable of type **UINT**. It contains `CFile::hFileNull` (an operating-system-independent empty file indicator) if the handle has not been assigned.  
  
 Use of `m_hFile` is not recommended because the member's meaning depends on the derived class. `m_hFile` is made a public member for convenience in supporting nonpolymorphic use of the class.  
  
##  <a name="cfile__m_ptm"></a>  CFile::m_pTM  
 Pointer to a `CAtlTransactionManager` object.  
  
```  
CAtlTransactionManager* m_pTM;  
```  
  
### Remarks  
  
##  <a name="cfile__open"></a>  CFile::Open  
 Overloaded. **Open** is designed for use with the default `CFile` constructor.  
  
```  
virtual BOOL Open(
    LPCTSTR lpszFileName,  
    UINT nOpenFlags,  
    CFileException* pError = NULL);

 
virtual BOOL Open(
    LPCTSTR lpszFileName,
    UINT nOpenFlags,
    CAtlTransactionManager* pTM,
    CFileException* pError = NULL);
```  
  
### Parameters  
 `lpszFileName`  
 A string that is the path to the desired file. The path can be relative, absolute, or a network name (UNC).  
  
 `nOpenFlags`  
 A **UINT** that defines the file's sharing and access mode. It specifies the action to take when opening the file. You can combine options by using the bitwise-OR ( **&#124;** ) operator. One access permission and one share option are required; the **modeCreate** and **modeNoInherit** modes are optional. See the [CFile](#cfile__cfile) constructor for a list of mode options.  
  
 `pError`  
 A pointer to an existing file-exception object that will receive the status of a failed operation.  
  
 `pTM`  
 Pointer to CAtlTransactionManager object  
  
### Return Value  
 Nonzero if the open was successful; otherwise 0. The `pError` parameter is meaningful only if 0 is returned.  
  
### Remarks  
 The two functions form a "safe" method for opening a file where a failure is a normal, expected condition.  
  
 While the `CFile` constructor will throw an exception in an error condition, **Open** will return **FALSE** for error conditions. **Open** can still initialize a [CFileException](../../mfc/reference/cfileexception-class.md) object to describe the error, however. If you don't supply the `pError` parameter, or if you pass **NULL** for `pError`, **Open** will return **FALSE** and not throw a `CFileException`. If you pass a pointer to an existing `CFileException`, and **Open** encounters an error, the function will fill it with information describing that error. In neither case will **Open** throw an exception.  
  
 The following table describes the possible results of **Open**.  
  
|`pError`|Error encountered|Return value|CFileException content|  
|--------------|------------------------|------------------|----------------------------|  
|**NULL**|No|**TRUE**|n/a|  
|ptr to `CFileException`|No|**TRUE**|unchanged|  
|**NULL**|Yes|**FALSE**|n/a|  
|ptr to `CFileException`|Yes|**FALSE**|initialized to describe error|  
  
### Example  
 [!code-cpp[NVC_MFCFiles#13](../../atl-mfc-shared/reference/codesnippet/cpp/cfile-class_9.cpp)]  
  
 [!code-cpp[NVC_MFCFiles#14](../../atl-mfc-shared/reference/codesnippet/cpp/cfile-class_10.cpp)]  
  
##  <a name="cfile__operator_handle"></a>  CFile::operator HANDLE  
 Use this operator to pass a handle to a `CFile` object to functions such as [ReadFileEx](http://msdn.microsoft.com/library/windows/desktop/aa365468) and [GetFileTime](http://msdn.microsoft.com/library/windows/desktop/ms724320) that expect a `HANDLE`.  
  
```  
operator HANDLE() const;

 
```  
  
##  <a name="cfile__read"></a>  CFile::Read  
 Reads data into a buffer from the file associated with the `CFile` object.  
  
```  
virtual UINT Read(
    void* lpBuf,  
    UINT nCount);
```  
  
### Parameters  
 `lpBuf`  
 Pointer to the user-supplied buffer that is to receive the data read from the file.  
  
 `nCount`  
 The maximum number of bytes to be read from the file. For text-mode files, carriage return–linefeed pairs are counted as single characters.  
  
### Return Value  
 The number of bytes transferred to the buffer. Note that for all `CFile` classes, the return value may be less than `nCount` if the end of file was reached.  
  
### Example  
 [!code-cpp[NVC_MFCFiles#15](../../atl-mfc-shared/reference/codesnippet/cpp/cfile-class_11.cpp)]  
  
 For another example see [CFile::Open](#cfile__open).  
  
##  <a name="cfile__remove"></a>  CFile::Remove  
 This static function deletes the file specified by the path.  
  
```  
static void PASCAL Remove(
    LPCTSTR lpszFileName, CAtlTransactionManager* pTM = NULL);
```  
  
### Parameters  
 `lpszFileName`  
 A string that is the path to the desired file. The path can be relative or absolute, and can contain a network name.  
  
 `pTM`  
 Pointer to CAtlTransactionManager object  
  
### Remarks  
 It will not remove a directory.  
  
 The **Remove** member function throws an exception if the connected file is open or if the file cannot be removed. This is equivalent to the DEL command.  
  
### Example  
 [!code-cpp[NVC_MFCFiles#17](../../atl-mfc-shared/reference/codesnippet/cpp/cfile-class_12.cpp)]  
  
##  <a name="cfile__rename"></a>  CFile::Rename  
 This static function renames the specified file.  
  
```  
static void PASCAL Rename(
    LPCTSTR lpszOldName,  
    LPCTSTR lpszNewName,  
    CAtlTransactionManager* pTM = NULL);
```  
  
### Parameters  
 `lpszOldName`  
 The old path.  
  
 `lpszNewName`  
 The new path.  
  
 `pTM`  
 Pointer to CAtlTransactionManager object  
  
### Remarks  
 Directories cannot be renamed. This is equivalent to the REN command.  
  
### Example  
 [!code-cpp[NVC_MFCFiles#18](../../atl-mfc-shared/reference/codesnippet/cpp/cfile-class_13.cpp)]  
  
##  <a name="cfile__seek"></a>  CFile::Seek  
 Repositions the file pointer in an open file.  
  
```  
 
virtual ULONGLONG Seek(
LONGLONG lOff,  
UINT nFrom);
```  
  
### Parameters  
 `lOff`  
 Number of bytes to move the file pointer. Positive values move the file pointer towards the end of the file; negative values move the file pointer towards the start of the file.  
  
 `nFrom`  
 Position to seek from. See the Remarks section for possible values.  
  
### Return Value  
 The position of the file pointer if the method was successful; otherwise, the return value is undefined and a pointer to a `CFileException` exception is thrown.  
  
### Remarks  
 The following table lists possible values for the `nFrom` parameter.  
  
|Value|Description|  
|-----------|-----------------|  
|`CFile::begin`|Seek from the start of the file.|  
|`CFile::current`|Seek from the current location of the file pointer.|  
|`CFile::end`|Seek from the end of the file.|  
  
 When a file is opened, the file pointer is positioned at 0, the start of the file.  
  
 You can set the file pointer to a position beyond the end of a file. If you do this, the size of the file does not increase until you write to the file.  
  
 The exception handler for this method must delete the exception object after the exception is processed.  
  
### Example  
 [!code-cpp[NVC_MFCFiles#9](../../atl-mfc-shared/reference/codesnippet/cpp/cfile-class_14.cpp)]  
  
##  <a name="cfile__seektobegin"></a>  CFile::SeekToBegin  
 Sets the value of the file pointer to the beginning of the file.  
  
```  
void SeekToBegin();
```  
  
### Remarks  
 `SeekToBegin()` is equivalent to `Seek( 0L, CFile::begin )`.  
  
### Example  
 [!code-cpp[NVC_MFCFiles#19](../../atl-mfc-shared/reference/codesnippet/cpp/cfile-class_15.cpp)]  
  
##  <a name="cfile__seektoend"></a>  CFile::SeekToEnd  
 Sets the value of the file pointer to the logical end of the file.  
  
```  
ULONGLONG SeekToEnd();
```  
  
### Return Value  
 The length of the file in bytes.  
  
### Remarks  
 `SeekToEnd()` is equivalent to `CFile::Seek( 0L, CFile::end )`.  
  
### Example  
 [!code-cpp[NVC_MFCFiles#19](../../atl-mfc-shared/reference/codesnippet/cpp/cfile-class_15.cpp)]  
  
##  <a name="cfile__setfilepath"></a>  CFile::SetFilePath  
 Call this function to specify the path of the file; for example, if the path of a file is not available when a [CFile](../../mfc/reference/cfile-class.md) object is constructed, call `SetFilePath` to provide it.  
  
```  
virtual void SetFilePath(LPCTSTR lpszNewName);
```  
  
### Parameters  
 `lpszNewName`  
 Pointer to a string specifying the new path.  
  
### Remarks  
  
> [!NOTE]
> `SetFilePath` does not open the file or create the file; it simply associates the `CFile` object with a path name, which can then be used.  
  
### Example  
 [!code-cpp[NVC_MFCFiles#20](../../atl-mfc-shared/reference/codesnippet/cpp/cfile-class_16.cpp)]  
  
##  <a name="cfile__setlength"></a>  CFile::SetLength  
 Call this function to change the length of the file.  
  
```  
virtual void SetLength(ULONGLONG dwNewLen);
```  
  
### Parameters  
 `dwNewLen`  
 Desired length of the file in bytes. This value can be larger or smaller than the current length of the file. The file will be extended or truncated as appropriate.  
  
### Remarks  
  
> [!NOTE]
>  With `CMemFile`, this function could throw a `CMemoryException` object.  
  
### Example  
 [!code-cpp[NVC_MFCFiles#11](../../atl-mfc-shared/reference/codesnippet/cpp/cfile-class_17.cpp)]  
  
##  <a name="cfile__setstatus"></a>  CFile::SetStatus  
 Sets the status of the file associated with this file location.  
  
```  
static void PASCAL SetStatus(
    LPCTSTR lpszFileName,  
    const CFileStatus& status,  
    CAtlTransactionManager* pTM = NULL);
```  
  
### Parameters  
 `lpszFileName`  
 A string that is the path to the desired file. The path can be relative or absolute, and can contain a network name.  
  
 *status*  
 The buffer containing the new status information. Call the **GetStatus** member function to prefill the **CFileStatus** structure with current values, then make changes as required. If a value is 0, then the corresponding status item is not updated. See the [GetStatus](#cfile__getstatus) member function for a description of the **CFileStatus** structure.  
  
 `pTM`  
 Pointer to CAtlTransactionManager object  
  
### Remarks  
 To set the time, modify the **m_mtime** field of *status*.  
  
 Please note that when you make a call to `SetStatus` in an attempt to change only the attributes of the file, and the **m_mtime** member of the file status structure is nonzero, the attributes may also be affected (changing the time stamp may have side effects on the attributes). If you want to only change the attributes of the file, first set the **m_mtime** member of the file status structure to zero and then make a call to `SetStatus`.  
  
### Example  
 [!code-cpp[NVC_MFCFiles#21](../../atl-mfc-shared/reference/codesnippet/cpp/cfile-class_18.cpp)]  
  
##  <a name="cfile__unlockrange"></a>  CFile::UnlockRange  
 Unlocks a range of bytes in an open file.  
  
```  
virtual void UnlockRange(
    ULONGLONG dwPos,  
    ULONGLONG dwCount);
```  
  
### Parameters  
 `dwPos`  
 The byte offset of the start of the byte range to unlock.  
  
 `dwCount`  
 The number of bytes in the range to unlock.  
  
### Remarks  
 See the description of the [LockRange](#cfile__lockrange) member function for details.  
  
> [!NOTE]
>  This function is not available for the `CMemFile`-derived class.  
  
### Example  
 [!code-cpp[NVC_MFCFiles#12](../../atl-mfc-shared/reference/codesnippet/cpp/cfile-class_8.cpp)]  
  
##  <a name="cfile__write"></a>  CFile::Write  
 Writes data from a buffer to the file associated with the `CFile` object.  
  
```  
virtual void Write(
    const void* lpBuf,  
    UINT nCount);
```  
  
### Parameters  
 `lpBuf`  
 A pointer to the user-supplied buffer that contains the data to be written to the file.  
  
 `nCount`  
 The number of bytes to be transferred from the buffer. For text-mode files, carriage return–linefeed pairs are counted as single characters.  
  
### Remarks  
 **Write** throws an exception in response to several conditions, including the disk-full condition.  
  
### Example  
 [!code-cpp[NVC_MFCFiles#16](../../atl-mfc-shared/reference/codesnippet/cpp/cfile-class_19.cpp)]  
  
 In addition, see the examples for [CFile::CFile](#cfile__cfile) and [CFile::Open](#cfile__open).  
  
## See Also  
 [MFC Sample DRAWCLI](../../visual-cpp-samples.md)   
 [CObject Class](../../mfc/reference/cobject-class.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [CStdioFile Class](../../mfc/reference/cstdiofile-class.md)   
 [CMemFile Class](../../mfc/reference/cmemfile-class.md)
