---
description: "Learn more about: CStdioFile Class"
title: "CStdioFile Class"
ms.date: "08/29/2019"
f1_keywords: ["CStdioFile", "AFX/CStdioFile", "AFX/CStdioFile::CStdioFile", "AFX/CStdioFile::Open", "AFX/CStdioFile::ReadString", "AFX/CStdioFile::Seek", "AFX/CStdioFile::WriteString", "AFX/CStdioFile::m_pStream"]
helpviewer_keywords: ["CStdioFile [MFC], CStdioFile", "CStdioFile [MFC], Open", "CStdioFile [MFC], ReadString", "CStdioFile [MFC], Seek", "CStdioFile [MFC], WriteString", "CStdioFile [MFC], m_pStream"]
ms.assetid: 88c2274c-4f0e-4327-882a-557ba4b3ae15
---
# CStdioFile Class

Represents a C run-time stream file as opened by the run-time function [fopen](../../c-runtime-library/reference/fopen-wfopen.md).

## Syntax

```
class CStdioFile : public CFile
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CStdioFile::CStdioFile](#cstdiofile)|Constructs a `CStdioFile` object from a path or file pointer.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CStdioFile::Open](#open)|Overloaded. Open is designed for use with the default `CStdioFile` constructor (Overrides [CFile::Open](../../mfc/reference/cfile-class.md#open)).|
|[CStdioFile::ReadString](#readstring)|Reads a single line of text.|
|[CStdioFile::Seek](#seek)|Positions the current file pointer.|
|[CStdioFile::WriteString](#writestring)|Writes a single line of text.|

### Public Data Members

|Name|Description|
|----------|-----------------|
|[CStdioFile::m_pStream](#m_pstream)|Contains a pointer to an open file.|

## Remarks

Stream files are buffered and can be opened in either text mode (the default) or binary mode.

Text mode provides special processing for carriage return-line feed pairs. When you write a line feed (newline) character (0x0A) to a text-mode `CStdioFile` object, the byte pair (0x0D, 0x0A) is sent to the file. When you read, the byte pair (0x0D, 0x0A) is translated to a single 0x0A byte.

The [CFile](../../mfc/reference/cfile-class.md) functions [Duplicate](../../mfc/reference/cfile-class.md#duplicate), [LockRange](../../mfc/reference/cfile-class.md#lockrange), and [UnlockRange](../../mfc/reference/cfile-class.md#unlockrange) are not supported for `CStdioFile`.

If you call these functions on a `CStdioFile`, you will get a [CNotSupportedException](../../mfc/reference/cnotsupportedexception-class.md).

For more information on using `CStdioFile`, see the articles [Files in MFC](../../mfc/files-in-mfc.md) and [File Handling](../../c-runtime-library/file-handling.md) in the *Run-Time Library Reference*.

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CFile](../../mfc/reference/cfile-class.md)

`CStdioFile`

## Requirements

**Header:** afx.h

## <a name="cstdiofile"></a> CStdioFile::CStdioFile

Constructs and initializes a `CStdioFile` object.

```
CStdioFile();
CStdioFile(CAtlTransactionManager* pTM);
CStdioFile(FILE* pOpenStream);

CStdioFile(
    LPCTSTR lpszFileName,
    UINT nOpenFlags);

CStdioFile(
    LPCTSTR lpszFileName,
    UINT nOpenFlags,
    CAtlTransactionManager* pTM);
```

### Parameters

*pOpenStream*<br/>
Specifies the file pointer returned by a call to the C run-time function [fopen](../../c-runtime-library/reference/fopen-wfopen.md).

*lpszFileName*<br/>
Specifies a string that is the path to the desired file. The path can be relative or absolute.

*nOpenFlags*<br/>
Specifies options for file creation, file sharing, and file access modes. You can specify multiple options by using the bitwise OR ( **|** ) operator.

One file access mode option is required; other modes are optional. See [CFile::CFile](../../mfc/reference/cfile-class.md#cfile) for a list of mode options and other flags. In MFC version 3.0 and later, share flags are allowed.

*pTM*<br/>
Pointer to CAtlTransactionManager object.

### Remarks

The default constructor does not attach a file to the `CStdioFile` object. When using this constructor, you must use the `CStdioFile::Open` method to open a file and attach it to the `CStdioFile` object.

The single-parameter constructor attaches an open file stream to the `CStdioFile` object. Allowed pointer values include the predefined input/output file pointers *stdin*, *stdout*, or *stderr*.

The two-parameter constructor creates a `CStdioFile` object and opens the corresponding file with the given path.

If you pass NULL for either *pOpenStream* or *lpszFileName*, the constructor throws a `CInvalidArgException*`.

If the file cannot be opened or created, the constructor throws a `CFileException*`.

### Example

[!code-cpp[NVC_MFCFiles#37](../../atl-mfc-shared/reference/codesnippet/cpp/cstdiofile-class_1.cpp)]

## <a name="m_pstream"></a> CStdioFile::m_pStream

The `m_pStream` data member is the pointer to an open file as returned by the C run-time function `fopen`.

```
FILE* m_pStream;
```

### Remarks

It is NULL if the file has never been opened or has been closed.

## <a name="open"></a> CStdioFile::Open

Overloaded. Open is designed for use with the default `CStdioFile` constructor.

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

*lpszFileName*<br/>
A string that is the path to the desired file. The path can be relative or absolute.

*nOpenFlags*<br/>
Sharing and access mode. Specifies the action to take when opening the file. You can combine options by using the bitwise-OR (&#124;) operator. One access permission and one share option are required; the modeCreate and modeNoInherit modes are optional.

*pError*<br/>
A pointer to an existing file-exception object that will receive the status of a failed operation.

*pTM*<br/>
Pointer to a `CAtlTransactionManager` object.

### Return Value

TRUE if successful; otherwise FALSE.

### Remarks

## <a name="readstring"></a> CStdioFile::ReadString

Reads text data into a buffer, up to a limit of *nMax*-1 characters, from the file associated with the `CStdioFile` object.

```
virtual LPTSTR ReadString(
    LPTSTR lpsz,
    UINT nMax);

virtual BOOL ReadString(CString& rString);
```

### Parameters

*lpsz*<br/>
Specifies a pointer to a user-supplied buffer that will receive a null-terminated text string.

*nMax*<br/>
Specifies the maximum number of characters to read, not counting the terminating null character.

*rString*<br/>
A reference to a `CString` object that will contain the string when the function returns.

### Return Value

A pointer to the buffer containing the text data. NULL if end-of-file was reached without reading any data; or if boolean, FALSE if end-of-file was reached without reading any data.

### Remarks

Reading is stopped by the first newline character. If, in that case, fewer than *nMax*-1 characters have been read, a newline character is stored in the buffer. A null character ('\0') is appended in either case.

[CFile::Read](../../mfc/reference/cfile-class.md#read) is also available for text-mode input, but it does not terminate on a carriage return-line feed pair.

> [!NOTE]
> The `CString` version of this function removes the `'\n'` if present; the LPTSTR version does not.

### Example

[!code-cpp[NVC_MFCFiles#38](../../atl-mfc-shared/reference/codesnippet/cpp/cstdiofile-class_2.cpp)]

## <a name="seek"></a> CStdioFile::Seek

Repositions the pointer in a previously opened file.

```
virtual ULONGLONG Seek(
    LONGLONG lOff,
    UINT nFrom);
```

### Parameters

*lOff*<br/>
Number of bytes to move the pointer.

*nFrom*<br/>
Pointer movement mode. Must be one of the following values:

- `CFile::begin`: Move the file pointer *lOff* bytes forward from the beginning of the file.

- `CFile::current`: Move the file pointer *lOff* bytes from the current position in the file.

- `CFile::end`: Move the file pointer *lOff* bytes from the end of the file. Note that *lOff* must be negative to seek into the existing file; positive values will seek past the end of the file.

### Return Value

If the requested position is legal, `Seek` returns the new byte offset from the beginning of the file. Otherwise, the return value is undefined and a `CFileException` object is thrown.

### Remarks

The `Seek` function permits random access to a file's contents by moving the pointer a specified amount, absolutely or relatively. No data is actually read during the seek. If the requested position is larger than the size of the file, the file length will be extended to that position, and no exception will be thrown.

When a file is opened, the file pointer is positioned at offset 0, the beginning of the file.

This implementation of `Seek` is based on the Run-Time Library (CRT) function `fseek`. There are several limits on the usage of `Seek` on streams opened in text mode. For more information, see [fseek, _fseeki64](../../c-runtime-library/reference/fseek-fseeki64.md).

### Example

The following example shows how to use `Seek` to move the pointer 1000 bytes from the beginning of the `cfile` file. Note that `Seek` does not read data, so you must subsequently call [CStdioFile::ReadString](#readstring) to read data.

[!code-cpp[NVC_MFCFiles#39](../../atl-mfc-shared/reference/codesnippet/cpp/cstdiofile-class_3.cpp)]

## <a name="writestring"></a> CStdioFile::WriteString

Writes data from a buffer to the file associated with the `CStdioFile` object.

```
virtual void WriteString(LPCTSTR lpsz);
```

### Parameters

*lpsz*<br/>
Specifies a pointer to a buffer that contains a null-terminated string.

### Remarks

The terminating null character ( `\0`) is not written to the file. This method writes newline characters in *lpsz* to the file as a carriage return-line feed pair.

If you want to write data that is not null-terminated to a file, use `CStdioFile::Write` or [CFile::Write](../../mfc/reference/cfile-class.md#write).

This method throws a `CInvalidArgException*` if you specify NULL for the *lpsz* parameter.

This method throws a `CFileException*` in response to file system errors.

### Example

[!code-cpp[NVC_MFCFiles#40](../../atl-mfc-shared/reference/codesnippet/cpp/cstdiofile-class_4.cpp)]

## See also

[CFile Class](../../mfc/reference/cfile-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[CFile Class](../../mfc/reference/cfile-class.md)<br/>
[CFile::Duplicate](../../mfc/reference/cfile-class.md#duplicate)<br/>
[CFile::LockRange](../../mfc/reference/cfile-class.md#lockrange)<br/>
[CFile::UnlockRange](../../mfc/reference/cfile-class.md#unlockrange)<br/>
[CNotSupportedException Class](../../mfc/reference/cnotsupportedexception-class.md)
