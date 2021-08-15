---
description: "Learn more about: CInternetFile Class"
title: "CInternetFile Class"
ms.date: "11/04/2016"
f1_keywords: ["CInternetFile", "AFXINET/CInternetFile", "AFXINET/CInternetFile::CInternetFile", "AFXINET/CInternetFile::Abort", "AFXINET/CInternetFile::Close", "AFXINET/CInternetFile::Flush", "AFXINET/CInternetFile::GetLength", "AFXINET/CInternetFile::Read", "AFXINET/CInternetFile::ReadString", "AFXINET/CInternetFile::Seek", "AFXINET/CInternetFile::SetReadBufferSize", "AFXINET/CInternetFile::SetWriteBufferSize", "AFXINET/CInternetFile::Write", "AFXINET/CInternetFile::WriteString", "AFXINET/CInternetFile::m_hFile"]
helpviewer_keywords: ["CInternetFile [MFC], CInternetFile", "CInternetFile [MFC], Abort", "CInternetFile [MFC], Close", "CInternetFile [MFC], Flush", "CInternetFile [MFC], GetLength", "CInternetFile [MFC], Read", "CInternetFile [MFC], ReadString", "CInternetFile [MFC], Seek", "CInternetFile [MFC], SetReadBufferSize", "CInternetFile [MFC], SetWriteBufferSize", "CInternetFile [MFC], Write", "CInternetFile [MFC], WriteString", "CInternetFile [MFC], m_hFile"]
ms.assetid: 96935681-ee71-4a8d-9783-5abc7b3e6f10
---
# CInternetFile Class

Allows access to files on remote systems that use Internet protocols.

## Syntax

```
class CInternetFile : public CStdioFile
```

## Members

### Protected Constructors

|Name|Description|
|----------|-----------------|
|[CInternetFile::CInternetFile](#cinternetfile)|Constructs a `CInternetFile` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CInternetFile::Abort](#abort)|Closes the file, ignoring all warnings and errors.|
|[CInternetFile::Close](#close)|Closes a `CInternetFile` and frees its resources.|
|[CInternetFile::Flush](#flush)|Flushes the contents of the write buffer and makes sure the data in memory is written to the target machine.|
|[CInternetFile::GetLength](#getlength)|Returns the size of the file.|
|[CInternetFile::Read](#read)|Reads the number of specified bytes.|
|[CInternetFile::ReadString](#readstring)|Reads a stream of characters.|
|[CInternetFile::Seek](#seek)|Repositions the pointer in an open file.|
|[CInternetFile::SetReadBufferSize](#setreadbuffersize)|Sets the size of the buffer where data will be read.|
|[CInternetFile::SetWriteBufferSize](#setwritebuffersize)|Sets the size of the buffer where data will be written.|
|[CInternetFile::Write](#write)|Writes the number of specified bytes.|
|[CInternetFile::WriteString](#writestring)|Writes a null-terminated string to a file.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[CInternetFile::operator HINTERNET](#operator_hinternet)|A casting operator for an Internet handle.|

### Protected Data Members

|Name|Description|
|----------|-----------------|
|[CInternetFile::m_hFile](#m_hfile)|A handle to a file.|

## Remarks

Provides a base class for the [CHttpFile](../../mfc/reference/chttpfile-class.md) and [CGopherFile](../../mfc/reference/cgopherfile-class.md) file classes. You never create a `CInternetFile` object directly. Instead, create an object of one of its derived classes by calling [CGopherConnection::OpenFile](../../mfc/reference/cgopherconnection-class.md#openfile) or [CHttpConnection::OpenRequest](../../mfc/reference/chttpconnection-class.md#openrequest). You also can create a `CInternetFile` object by calling [CFtpConnection::OpenFile](../../mfc/reference/cftpconnection-class.md#openfile).

The `CInternetFile` member functions `Open`, `LockRange`, `UnlockRange`, and `Duplicate` are not implemented for `CInternetFile`. If you call these functions on a `CInternetFile` object, you will get a [CNotSupportedException](../../mfc/reference/cnotsupportedexception-class.md).

To learn more about how `CInternetFile` works with the other MFC Internet classes, see the article [Internet Programming with WinInet](../../mfc/win32-internet-extensions-wininet.md).

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CFile](../../mfc/reference/cfile-class.md)

[CStdioFile](../../mfc/reference/cstdiofile-class.md)

`CInternetFile`

## Requirements

**Header:** afxinet.h

## <a name="abort"></a> CInternetFile::Abort

Closes the file associated with this object and makes the file unavailable for reading or writing.

```
virtual void Abort();
```

### Remarks

If you have not closed the file before destroying the object, the destructor closes it for you.

When handling exceptions, `Abort` differs from [Close](#close) in two important ways. First, the `Abort` function does not throw an exception on failures because it ignores failures. Second, `Abort` does not **ASSERT** if the file has not been opened or was closed previously.

## <a name="cinternetfile"></a> CInternetFile::CInternetFile

This member function is called when a `CInternetFile` object is created.

```
CInternetFile(
    HINTERNET hFile,
    LPCTSTR pstrFileName,
    CInternetConnection* pConnection,
    BOOL bReadMode);

CInternetFile(
    HINTERNET hFile,
    HINTERNET hSession,
    LPCTSTR pstrFileName,
    LPCTSTR pstrServer,
    DWORD_PTR dwContext,
    BOOL bReadMode);
```

### Parameters

*hFile*<br/>
A handle to an Internet file.

*pstrFileName*<br/>
A pointer to a string containing the file name.

*pConnection*<br/>
A pointer to a [CInternetConnection](../../mfc/reference/cinternetconnection-class.md) object.

*bReadMode*<br/>
Indicates whether the file is read-only.

*hSession*<br/>
A handle to an Internet session.

*pstrServer*<br/>
A pointer to a string containing the name of the server.

*dwContext*<br/>
The context identifier for the `CInternetFile` object. See [WinInet Basics](../../mfc/wininet-basics.md) for more information about the context identifier.

### Remarks

You never create a `CInternetFile` object directly. Instead, create an object of one of its derived classes by calling [CGopherConnection::OpenFile](../../mfc/reference/cgopherconnection-class.md#openfile) or [CHttpConnection::OpenRequest](../../mfc/reference/chttpconnection-class.md#openrequest). You also can create a `CInternetFile` object by calling [CFtpConnection::OpenFile](../../mfc/reference/cftpconnection-class.md#openfile).

## <a name="close"></a> CInternetFile::Close

Closes a `CInternetFile` and frees any of its resources.

```
virtual void Close();
```

### Remarks

If the file was opened for writing, there is an implicit call to [Flush](#flush) to assure that all buffered data is written to the host. You should call `Close` when you are finished using a file.

## <a name="flush"></a> CInternetFile::Flush

Call this member function to flush the contents of the write buffer.

```
virtual void Flush();
```

### Remarks

Use `Flush` to assure that all data in memory has actually been written to the target machine and to assure your transaction with the host machine has been completed. `Flush` is only effective on `CInternetFile` objects opened for writing.

## <a name="getlength"></a> CInternetFile::GetLength

Returns the size of the file.

```
virtual ULONGLONG GetLength() const;
```

## <a name="m_hfile"></a> CInternetFile::m_hFile

A handle to the file associated with this object.

```
HINTERNET m_hFile;
```

## <a name="operator_hinternet"></a> CInternetFile::operator HINTERNET

Use this operator to get the Windows handle for the current Internet session.

```
operator HINTERNET() const;
```

## <a name="read"></a> CInternetFile::Read

Call this member function to read into the given memory, starting at *lpvBuf*, the specified number of bytes, *nCount*.

```
virtual UINT Read(
    void* lpBuf,
    UINT nCount);
```

### Parameters

*lpBuf*<br/>
A pointer to a memory address to which file data is read.

*nCount*<br/>
The number of bytes to be written.

### Return Value

The number of bytes transferred to the buffer. The return value may be less than *nCount* if the end of file was reached.

### Remarks

The function returns the number of bytes actually read — a number that may be less than *nCount* if the file ends. If an error occurs while reading the file, the function throws a [CInternetException](../../mfc/reference/cinternetexception-class.md) object that describes the error. Note that reading past the end of the file is not considered an error and no exception will be thrown.

To ensure all data is retrieved, an application must continue to call the `CInternetFile::Read` method until the method returns zero.

## <a name="readstring"></a> CInternetFile::ReadString

Call this member function to read a stream of characters until it finds a newline character.

```
virtual BOOL ReadString(CString& rString);

virtual LPTSTR ReadString(
    LPTSTR pstr,
    UINT nMax);
```

### Parameters

*pstr*<br/>
A pointer to a string which will receive the line being read.

*nMax*<br/>
The maximum number of characters to be read.

*rString*<br/>
A reference to the [CString](../../atl-mfc-shared/reference/cstringt-class.md) object that receives the read line.

### Return Value

A pointer to the buffer containing plain data retrieved from the [CInternetFile](../../mfc/reference/cinternetfile-class.md) object. Regardless of the data type of the buffer passed to this method, it does not perform any manipulations on the data (for example, conversion to Unicode), so you must map the returned data to the structure you expect, as if the **`void`** <strong>\*</strong> type were returned.

NULL if end-of-file was reached without reading any data; or, if boolean, FALSE if end-of-file was reached without reading any data.

### Remarks

The function places the resulting line into the memory referenced by the *pstr* parameter. It stops reading characters when it reaches the maximum number of characters, specified by *nMax*. The buffer always receives a terminating null character.

If you call `ReadString` without first calling [SetReadBufferSize](#setreadbuffersize), you will get a buffer of 4096 bytes.

## <a name="seek"></a> CInternetFile::Seek

Call this member function to reposition the pointer in a previously opened file.

```
virtual ULONGLONG Seek(
    LONGLONG lOffset,
    UINT nFrom);
```

### Parameters

*lOffset*<br/>
Offset in bytes to move the read/write pointer in the file.

*nFrom*<br/>
Relative reference for the offset. Must be one of the following values:

- `CFile::begin` Move the file pointer *lOff* bytes forward from the beginning of the file.

- `CFile::current` Move the file pointer *lOff* bytes from the current position in the file.

- `CFile::end` Move the file pointer *lOff* bytes from the end of the file. *lOff* must be negative to seek into the existing file; positive values will seek past the end of the file.

### Return Value

The new byte offset from the beginning of the file if the requested position is legal; otherwise, the value is undefined and a [CInternetException](../../mfc/reference/cinternetexception-class.md) object is thrown.

### Remarks

The `Seek` function permits random access to a file's contents by moving the pointer a specified amount, absolutely or relatively. No data is actually read during the seek.

At this time, a call to this member function is only supported for data associated with `CHttpFile` objects. It is not supported for FTP or gopher requests. If you call `Seek` for one of these unsupported services, it will pass back you to the Win32 error code ERROR_INTERNET_INVALID_OPERATION.

When a file is opened, the file pointer is at offset 0, the beginning of the file.

> [!NOTE]
> Using `Seek` may cause an implicit call to [Flush](#flush).

### Example

  See the example for the base class implementation ( [CFile::Seek](../../mfc/reference/cfile-class.md#seek)).

## <a name="setreadbuffersize"></a> CInternetFile::SetReadBufferSize

Call this member function to set the size of the temporary read buffer used by a `CInternetFile`-derived object.

```
BOOL SetReadBufferSize(UINT nReadSize);
```

### Parameters

*nReadSize*<br/>
The desired buffer size in bytes.

### Return Value

Nonzero if successful; otherwise 0. If the call fails, the Win32 function [GetLastError](/windows/win32/api/errhandlingapi/nf-errhandlingapi-getlasterror) may be called to determine the cause of the error.

### Remarks

The underlying WinInet APIs do not perform buffering, so choose a buffer size that allows your application to read data efficiently, regardless of the amount of data to be read. If each call to [Read](#read) normally involves a large aount of data (for example, four or more kilobytes), you should not need a buffer. However, if you call `Read` to get small chunks of data, or if you use [ReadString](#readstring) to read individual lines at a time, then a read buffer improves application performance.

By default, a `CInternetFile` object does not provide any buffering for reading. If you call this member function, you must be sure that the file has been opened for read access.

You can increase the buffer size at any time, but shrinking the buffer will have no effect. If you call [ReadString](#readstring) without first calling `SetReadBufferSize`, you will get a buffer of 4096 bytes.

## <a name="setwritebuffersize"></a> CInternetFile::SetWriteBufferSize

Call this member function to set the size of the temporary write buffer used by a `CInternetFile`-derived object.

```
BOOL SetWriteBufferSize(UINT nWriteSize);
```

### Parameters

*nWriteSize*<br/>
The size of the buffer in bytes.

### Return Value

Nonzero if successful; otherwise 0. If the call fails, the Win32 function [GetLastError](/windows/win32/api/errhandlingapi/nf-errhandlingapi-getlasterror) may be called to determine the cause of the error.

### Remarks

The underlying WinInet APIs don't perform buffering, so choose a buffer size that allows your application to write data efficiently regardless of the amount of data to be written. If each call to [Write](#write) normally involves a large amount of data (for example, four or more kilobytes at a time), you should not need a buffer. However, if you call [Write](#write) to write small chunks of data, a write buffer improves your application's performance.

By default, a `CInternetFile` object does not provide any buffering for writing. If you call this member function, you must be sure that the file has been opened for write access. You can change the size of the write buffer at any time, but doing so causes an implicit call to [Flush](#flush).

## <a name="write"></a> CInternetFile::Write

Call this member function to write into the given memory, *lpvBuf*, the specified number of bytes, *nCount*.

```
virtual void Write(
    const void* lpBuf,
    UINT nCount);
```

### Parameters

*lpBuf*<br/>
A pointer to the first byte to be written.

*nCount*<br/>
Specifies the number of bytes to be written.

### Remarks

If any error occurs while writing the data, the function throws a [CInternetException](../../mfc/reference/cinternetexception-class.md) object describing the error.

## <a name="writestring"></a> CInternetFile::WriteString

This function writes a null-terminated string to the associated file.

```
virtual void WriteString(LPCTSTR pstr);
```

### Parameters

*pstr*<br/>
A pointer to a string containing the contents to be written.

### Remarks

If any error occurs while writing the data, the function throws a [CInternetException](../../mfc/reference/cinternetexception-class.md) object describing the error.

## See also

[CStdioFile Class](../../mfc/reference/cstdiofile-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[CInternetConnection Class](../../mfc/reference/cinternetconnection-class.md)
