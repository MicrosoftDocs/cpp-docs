---
description: "Learn more about: CArchive Class"
title: "CArchive Class"
ms.date: "11/04/2016"
f1_keywords: ["CArchive", "AFX/CArchive", "AFX/CArchive::CArchive", "AFX/CArchive::Abort", "AFX/CArchive::Close", "AFX/CArchive::Flush", "AFX/CArchive::GetFile", "AFX/CArchive::GetObjectSchema", "AFX/CArchive::IsBufferEmpty", "AFX/CArchive::IsLoading", "AFX/CArchive::IsStoring", "AFX/CArchive::MapObject", "AFX/CArchive::Read", "AFX/CArchive::ReadClass", "AFX/CArchive::ReadObject", "AFX/CArchive::ReadString", "AFX/CArchive::SerializeClass", "AFX/CArchive::SetLoadParams", "AFX/CArchive::SetObjectSchema", "AFX/CArchive::SetStoreParams", "AFX/CArchive::Write", "AFX/CArchive::WriteClass", "AFX/CArchive::WriteObject", "AFX/CArchive::WriteString", "AFX/CArchive::m_pDocument"]
helpviewer_keywords: ["CArchive [MFC], CArchive", "CArchive [MFC], Abort", "CArchive [MFC], Close", "CArchive [MFC], Flush", "CArchive [MFC], GetFile", "CArchive [MFC], GetObjectSchema", "CArchive [MFC], IsBufferEmpty", "CArchive [MFC], IsLoading", "CArchive [MFC], IsStoring", "CArchive [MFC], MapObject", "CArchive [MFC], Read", "CArchive [MFC], ReadClass", "CArchive [MFC], ReadObject", "CArchive [MFC], ReadString", "CArchive [MFC], SerializeClass", "CArchive [MFC], SetLoadParams", "CArchive [MFC], SetObjectSchema", "CArchive [MFC], SetStoreParams", "CArchive [MFC], Write", "CArchive [MFC], WriteClass", "CArchive [MFC], WriteObject", "CArchive [MFC], WriteString", "CArchive [MFC], m_pDocument"]
ms.assetid: 9e950d23-b874-456e-ae4b-fe00781a7699
---
# CArchive Class

Allows you to save a complex network of objects in a permanent binary form (usually disk storage) that persists after those objects are deleted.

## Syntax

```
class CArchive
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CArchive::CArchive](#carchive)|Creates a `CArchive` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CArchive::Abort](#abort)|Closes an archive without throwing an exception.|
|[CArchive::Close](#close)|Flushes unwritten data and disconnects from the `CFile`.|
|[CArchive::Flush](#flush)|Flushes unwritten data from the archive buffer.|
|[CArchive::GetFile](#getfile)|Gets the `CFile` object pointer for this archive.|
|[CArchive::GetObjectSchema](#getobjectschema)|Called from the `Serialize` function to determine the version of the object that is being deserialized.|
|[CArchive::IsBufferEmpty](#isbufferempty)|Determines whether the buffer has been emptied during a Windows Sockets receive process.|
|[CArchive::IsLoading](#isloading)|Determines whether the archive is loading.|
|[CArchive::IsStoring](#isstoring)|Determines whether the archive is storing.|
|[CArchive::MapObject](#mapobject)|Places objects in the map that are not serialized to the file, but that are available for subobjects to reference.|
|[CArchive::Read](#read)|Reads raw bytes.|
|[CArchive::ReadClass](#readclass)|Reads a class reference previously stored with `WriteClass`.|
|[CArchive::ReadObject](#readobject)|Calls an object's `Serialize` function for loading.|
|[CArchive::ReadString](#readstring)|Reads a single line of text.|
|[CArchive::SerializeClass](#serializeclass)|Reads or writes the class reference to the `CArchive` object depending on the direction of the `CArchive`.|
|[CArchive::SetLoadParams](#setloadparams)|Sets the size to which the load array grows. Must be called before any object is loaded or before `MapObject` or `ReadObject` is called.|
|[CArchive::SetObjectSchema](#setobjectschema)|Sets the object schema stored in the archive object.|
|[CArchive::SetStoreParams](#setstoreparams)|Sets the hash table size and the block size of the map used to identify unique objects during the serialization process.|
|[CArchive::Write](#write)|Writes raw bytes.|
|[CArchive::WriteClass](#writeclass)|Writes a reference to the `CRuntimeClass` to the `CArchive`.|
|[CArchive::WriteObject](#writeobject)|Calls an object's `Serialize` function for storing.|
|[CArchive::WriteString](#writestring)|Writes a single line of text.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[CArchive::operator &lt;&lt;](#operator_lt_lt)|Stores objects and primitive types to the archive.|
|[CArchive::operator &gt;&gt;](#operator_gt_gt)|Loads objects and primitive types from the archive.|

### Public Data Members

|Name|Description|
|----------|-----------------|
|[CArchive::m_pDocument](#m_pdocument)||

## Remarks

`CArchive` does not have a base class.

Later you can load the objects from persistent storage, reconstituting them in memory. This process of making data persistent is called "serialization."

You can think of an archive object as a kind of binary stream. Like an input/output stream, an archive is associated with a file and permits the buffered writing and reading of data to and from storage. An input/output stream processes sequences of ASCII characters, but an archive processes binary object data in an efficient, nonredundant format.

You must create a [CFile](../../mfc/reference/cfile-class.md) object before you can create a `CArchive` object. In addition, you must ensure that the archive's load/store status is compatible with the file's open mode. You are limited to one active archive per file.

When you construct a `CArchive` object, you attach it to an object of class `CFile` (or a derived class) that represents an open file. You also specify whether the archive will be used for loading or storing. A `CArchive` object can process not only primitive types but also objects of [CObject](../../mfc/reference/cobject-class.md)-derived classes designed for serialization. A serializable class usually has a `Serialize` member function, and it usually uses the [DECLARE_SERIAL](../../mfc/reference/run-time-object-model-services.md#declare_serial) and [IMPLEMENT_SERIAL](../../mfc/reference/run-time-object-model-services.md#implement_serial) macros, as described under class `CObject`.

The overloaded extraction ( **>>**) and insertion ( **<<**) operators are convenient archive programming interfaces that support both primitive types and `CObject`-derived classes.

`CArchive` also supports programming with the MFC Windows Sockets classes [CSocket](../../mfc/reference/csocket-class.md) and [CSocketFile](../../mfc/reference/csocketfile-class.md). The [IsBufferEmpty](#isbufferempty) member function supports that usage.

For more information on `CArchive`, see the articles [Serialization](../../mfc/serialization-in-mfc.md) and [Windows Sockets: Using Sockets with Archives](../../mfc/windows-sockets-using-sockets-with-archives.md).

## Inheritance Hierarchy

`CArchive`

## Requirements

**Header:** afx.h

## <a name="abort"></a> CArchive::Abort

Call this function to close the archive without throwing an exception.

```cpp
void Abort ();
```

### Remarks

The `CArchive` destructor will normally call `Close`, which will flush any data that has not been saved to the associated `CFile` object. This can cause exceptions.

When catching these exceptions, it is a good idea to use `Abort`, so that destructing the `CArchive` object doesn't cause further exceptions. When handling exceptions, `CArchive::Abort` will not throw an exception on failures because, unlike [CArchive::Close](#close), `Abort` ignores failures.

If you used **`new`** to allocate the `CArchive` object on the heap, then you must delete it after closing the file.

### Example

  See the example for [CArchive::WriteClass](#writeclass).

## <a name="carchive"></a> CArchive::CArchive

Constructs a `CArchive` object and specifies whether it will be used for loading or storing objects.

```
CArchive(
    CFile* pFile,
    UINT nMode,
    int nBufSize = 4096,
    void* lpBuf = NULL);
```

### Parameters

*pFile*<br/>
A pointer to the `CFile` object that is the ultimate source or destination of the persistent data.

*nMode*<br/>
A flag that specifies whether objects will be loaded from or stored to the archive. The *nMode* parameter must have one of the following values:

- `CArchive::load` Loads data from the archive. Requires only `CFile` read permission.

- `CArchive::store` Saves data to the archive. Requires `CFile` write permission.

- `CArchive::bNoFlushOnDelete` Prevents the archive from automatically calling `Flush` when the archive destructor is called. If you set this flag, you are responsible for explicitly calling `Close` before the destructor is called. If you do not, your data will be corrupted.

*nBufSize*<br/>
An integer that specifies the size of the internal file buffer, in bytes. Note that the default buffer size is 4,096 bytes. If you routinely archive large objects, you will improve performance if you use a larger buffer size that is a multiple of the file buffer size.

*lpBuf*<br/>
An optional pointer to a user-supplied buffer of size *nBufSize*. If you do not specify this parameter, the archive allocates a buffer from the local heap and frees it when the object is destroyed. The archive does not free a user-supplied buffer.

### Remarks

You cannot change this specification after you have created the archive.

You may not use `CFile` operations to alter the state of the file until you have closed the archive. Any such operation will damage the integrity of the archive. You may access the position of the file pointer at any time during serialization by obtaining the archive's file object from the [GetFile](#getfile) member function and then using the [CFile::GetPosition](../../mfc/reference/cfile-class.md#getposition) function. You should call [CArchive::Flush](#flush) before obtaining the position of the file pointer.

### Example

[!code-cpp[NVC_MFCSerialization#12](../../mfc/codesnippet/cpp/carchive-class_1.cpp)]

## <a name="close"></a> CArchive::Close

Flushes any data remaining in the buffer, closes the archive, and disconnects the archive from the file.

```cpp
void Close();
```

### Remarks

No further operations on the archive are permitted. After you close an archive, you can create another archive for the same file or you can close the file.

The member function `Close` ensures that all data is transferred from the archive to the file, and it makes the archive unavailable. To complete the transfer from the file to the storage medium, you must first use [CFile::Close](../../mfc/reference/cfile-class.md#close) and then destroy the `CFile` object.

### Example

  See the example for [CArchive::WriteString](#writestring).

## <a name="flush"></a> CArchive::Flush

Forces any data remaining in the archive buffer to be written to the file.

```cpp
void Flush();
```

### Remarks

The member function `Flush` ensures that all data is transferred from the archive to the file. You must call [CFile::Close](../../mfc/reference/cfile-class.md#close) to complete the transfer from the file to the storage medium.

### Example

[!code-cpp[NVC_MFCSerialization#13](../../mfc/codesnippet/cpp/carchive-class_2.cpp)]

## <a name="getfile"></a> CArchive::GetFile

Gets the `CFile` object pointer for this archive.

```
CFile* GetFile() const;
```

### Return Value

A constant pointer to the `CFile` object in use.

### Remarks

You must flush the archive before using `GetFile`.

### Example

[!code-cpp[NVC_MFCSerialization#14](../../mfc/codesnippet/cpp/carchive-class_3.cpp)]

## <a name="getobjectschema"></a> CArchive::GetObjectSchema

Call this function from the `Serialize` function to determine the version of the object that is currently being deserialized.

```
UINT GetObjectSchema();
```

### Return Value

During deserialization, the version of the object being read.

### Remarks

Calling this function is only valid when the `CArchive` object is being loaded ( [CArchive::IsLoading](#isloading) returns nonzero). It should be the first call in the `Serialize` function and called only once. A return value of ( UINT)-1 indicates that the version number is unknown.

A `CObject`-derived class may use VERSIONABLE_SCHEMA combined (using bitwise **OR**) with the schema version itself (in the IMPLEMENT_SERIAL macro) to create a "versionable object," that is, an object whose `Serialize` member function can read multiple versions. The default framework functionality (without VERSIONABLE_SCHEMA) is to throw an exception when the version is mismatched.

### Example

[!code-cpp[NVC_MFCSerialization#15](../../mfc/codesnippet/cpp/carchive-class_4.cpp)]

## <a name="isbufferempty"></a> CArchive::IsBufferEmpty

Call this member function to determine whether the archive object's internal buffer is empty.

```
BOOL IsBufferEmpty() const;
```

### Return Value

Nonzero if the archive's buffer is empty; otherwise 0.

### Remarks

This function is supplied to support programming with the MFC Windows Sockets class `CSocketFile`. You do not need to use it for an archive associated with a `CFile` object.

The reason for using `IsBufferEmpty` with an archive associated with a `CSocketFile` object is that the archive's buffer might contain more than one message or record. After receiving one message, you should use `IsBufferEmpty` to control a loop that continues receiving data until the buffer is empty. For more information, see the [Receive](../../mfc/reference/casyncsocket-class.md#receive) member function of class `CAsyncSocket`, which shows how to use `IsBufferEmpty`.

For more information, see [Windows Sockets: Using Sockets with Archives](../../mfc/windows-sockets-using-sockets-with-archives.md).

## <a name="isloading"></a> CArchive::IsLoading

Determines whether the archive is loading data.

```
BOOL IsLoading() const;
```

### Return Value

Nonzero if the archive is currently being used for loading; otherwise 0.

### Remarks

This member function is called by the `Serialize` functions of the archived classes.

### Example

[!code-cpp[NVC_MFCSerialization#16](../../mfc/codesnippet/cpp/carchive-class_5.cpp)]

## <a name="isstoring"></a> CArchive::IsStoring

Determines whether the archive is storing data.

```
BOOL IsStoring() const;
```

### Return Value

Nonzero if the archive is currently being used for storing; otherwise 0.

### Remarks

This member function is called by the `Serialize` functions of the archived classes.

If the `IsStoring` status of an archive is nonzero, then its `IsLoading` status is 0, and vice versa.

### Example

[!code-cpp[NVC_MFCSerialization#17](../../mfc/codesnippet/cpp/carchive-class_6.cpp)]

## <a name="mapobject"></a> CArchive::MapObject

Call this member function to place objects in the map that are not really serialized to the file, but that are available for subobjects to reference.

```cpp
void MapObject(const CObject* pOb);
```

### Parameters

*pOb*<br/>
A constant pointer to the object being stored.

### Remarks

For example, you might not serialize a document, but you would serialize the items that are part of the document. By calling `MapObject`, you allow those items, or subobjects, to reference the document. Also, serialized subitems can serialize their *m_pDocument* back pointer.

You can call `MapObject` when you store to and load from the `CArchive` object. `MapObject` adds the specified object to the internal data structures maintained by the `CArchive` object during serialization and deserialization, but unlike [ReadObject](#readobject) and [WriteObject](#writeobject), it does not call serialize on the object.

### Example

[!code-cpp[NVC_MFCSerialization#18](../../mfc/codesnippet/cpp/carchive-class_7.h)]

[!code-cpp[NVC_MFCSerialization#19](../../mfc/codesnippet/cpp/carchive-class_8.cpp)]

[!code-cpp[NVC_MFCSerialization#20](../../mfc/codesnippet/cpp/carchive-class_9.h)]

[!code-cpp[NVC_MFCSerialization#21](../../mfc/codesnippet/cpp/carchive-class_10.cpp)]

## <a name="m_pdocument"></a> CArchive::m_pDocument

Set to NULL by default, this pointer to a `CDocument` can be set to anything the user of the `CArchive` instance wants.

```
CDocument* m_pDocument;
```

### Remarks

A common usage of this pointer is to convey additional information about the serialization process to all objects being serialized. This is achieved by initializing the pointer with the document (a `CDocument`-derived class) that is being serialized, in such a way that objects within the document can access the document if necessary. This pointer is also used by `COleClientItem` objects during serialization.

The framework sets *m_pDocument* to the document being serialized when a user issues a File Open or Save command. If you serialize an Object Linking and Embedding (OLE) container document for reasons other than File Open or Save, you must explicitly set *m_pDocument*. For example, you would do this when serializing a container document to the Clipboard.

### Example

[!code-cpp[NVC_MFCSerialization#35](../../mfc/codesnippet/cpp/carchive-class_11.cpp)]

## <a name="operator_lt_lt"></a> CArchive::operator &lt;&lt;

Stores the indicated object or primitive type to the archive.

```
friend CArchive& operator<<(
    CArchive& ar,
    const CObject* pOb);

throw(
    CArchiveException*,
    CFileException*);

CArchive& AFXAPI operator<<(
    CArchive& ar,
    const RECT& rect);

CArchive& AFXAPI operator<<(
    CArchive& ar,
    POINT point);

CArchive& AFXAPI operator<<(
    CArchive& ar,
    SIZE size);

template<typename BaseType,
    class StringTraits> CArchive& operator<<(
    const ATL::CStringT<BaseType,
    StringTraits>& str);

CArchive& operator<<(BYTE by);
CArchive& operator<<(WORD w);
CArchive& operator<<(LONG l);
CArchive& operator<<(DWORD dw);
CArchive& operator<<(float f);
CArchive& operator<<(double d);
CArchive& operator<<(int i);
CArchive& operator<<(short w);
CArchive& operator<<(char ch);
CArchive& operator<<(wchar_t ch);
CArchive& operator<<(unsigned u);
CArchive& operator<<(bool b);
CArchive& operator<<(ULONGLONG dwdw);
CArchive& operator<<(LONGLONG dwdw);
```

### Return Value

A `CArchive` reference that enables multiple insertion operators on a single line.

### Remarks

The last two versions above are specifically for storing 64-bit integers.

If you used the IMPLEMENT_SERIAL macro in your class implementation, then the insertion operator overloaded for `CObject` calls the protected `WriteObject`. This function, in turn, calls the `Serialize` function of the class.

The [CStringT](../../atl-mfc-shared/reference/cstringt-class.md) insertion operator (<<) supports diagnostic dumping and storing to an archive.

### Example

This example demonstrates the use of the `CArchive` insertion operator << with the **`int`** and **`long`** types.

[!code-cpp[NVC_MFCSerialization#31](../../mfc/codesnippet/cpp/carchive-class_12.cpp)]

### Example

This example 2 demonstrates the use of the `CArchive` insertion operator << with the `CStringT` type.

[!code-cpp[NVC_MFCSerialization#32](../../mfc/codesnippet/cpp/carchive-class_13.cpp)]

## <a name="operator_gt_gt"></a> CArchive::operator &gt;&gt;

Loads the indicated object or primitive type from the archive.

```
friend CArchive& operator>>(
    CArchive& ar,
    CObject *& pOb);

throw(
    CArchiveException*,
    CFileException*,
    CMemoryException*);

friend CArchive& operator>>(
    CArchive& ar,
    const CObject *& pOb);

throw(
    CArchiveException*,
    CFileException*,
    CMemoryException*);

CArchive& AFXAPI operator>>(
    CArchive& ar,
    const RECT& rect);

CArchive& AFXAPI operator>>(
    CArchive& ar,
    POINT point);

CArchive& AFXAPI operator>>(
    CArchive& ar,
    SIZE size);

template<typename BaseType,
    class StringTraits> CArchive& operator>>(
    ATL::CStringT<BaseType,
    StringTraits>& str);

CArchive& operator>>(BYTE& by);
CArchive& operator>>(WORD& w);
CArchive& operator>>(int& i);
CArchive& operator>>(LONG& l);
CArchive& operator>>(DWORD& dw);
CArchive& operator>>(float& f);
CArchive& operator>>(double& d);
CArchive& operator>>(short& w);
CArchive& operator>>(char& ch);
CArchive& operator>>(wchar_t& ch);
CArchive& operator>>(unsigned& u);
CArchive& operator>>(bool& b);
CArchive& operator>>(ULONGLONG& dwdw);
CArchive& operator>>(LONGLONG& dwdw);
```

### Return Value

A `CArchive` reference that enables multiple extraction operators on a single line.

### Remarks

The last two versions above are specifically for loading 64-bit integers.

If you used the IMPLEMENT_SERIAL macro in your class implementation, then the extraction operators overloaded for `CObject` call the protected `ReadObject` function (with a nonzero run-time class pointer). This function, in turn, calls the `Serialize` function of the class.

The [CStringT](../../atl-mfc-shared/reference/cstringt-class.md) extraction operator (>>) supports loading from an archive.

### Example

This example demonstrates the use of the `CArchive` extraction operator >> with the **`int`** type.

[!code-cpp[NVC_MFCSerialization#33](../../mfc/codesnippet/cpp/carchive-class_14.cpp)]

### Example

This example demonstrates the use of the `CArchive` insertion and extraction operators <\< and >> with the `CStringT` type.

[!code-cpp[NVC_MFCSerialization#34](../../mfc/codesnippet/cpp/carchive-class_15.cpp)]

## <a name="read"></a> CArchive::Read

Reads a specified number of bytes from the archive.

```
UINT Read(void* lpBuf, UINT nMax);
```

### Parameters

*lpBuf*<br/>
A pointer to a user-supplied buffer that is to receive the data read from the archive.

*nMax*<br/>
An unsigned integer specifying the number of bytes to be read from the archive.

### Return Value

An unsigned integer containing the number of bytes actually read. If the return value is less than the number requested, the end of file has been reached. No exception is thrown on the end-of-file condition.

### Remarks

The archive does not interpret the bytes.

You can use the `Read` member function within your `Serialize` function for reading ordinary structures that are contained in your objects.

### Example

[!code-cpp[NVC_MFCSerialization#24](../../mfc/codesnippet/cpp/carchive-class_16.cpp)]

## <a name="readclass"></a> CArchive::ReadClass

Call this member function to read a reference to a class previously stored with [WriteClass](#writeclass).

```
CRuntimeClass* ReadClass(
    const CRuntimeClass* pClassRefRequested = NULL,
    UINT* pSchema = NULL,
    DWORD* pObTag = NULL);
```

### Parameters

*pClassRefRequested*<br/>
A pointer to the [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) structure that corresponds to the class reference requested. Can be NULL.

*pSchema*<br/>
A pointer to a schema of the run-time class previously stored.

*pObTag*<br/>
A number that refers to an object's unique tag. Used internally by the implementation of [ReadObject](#readobject). Exposed for advanced programming only; *pObTag* normally should be NULL.

### Return Value

A pointer to the [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) structure.

### Remarks

If *pClassRefRequested* is not NULL, `ReadClass` verifies that the archived class information is compatible with your runtime class. If it is not compatible, `ReadClass` will throw a [CArchiveException](../../mfc/reference/carchiveexception-class.md).

Your runtime class must use [DECLARE_SERIAL](../../mfc/reference/run-time-object-model-services.md#declare_serial) and [IMPLEMENT_SERIAL](../../mfc/reference/run-time-object-model-services.md#implement_serial); otherwise, `ReadClass` will throw a [CNotSupportedException](../../mfc/reference/cnotsupportedexception-class.md).

If *pSchema* is NULL, the schema of the stored class can be retrieved by calling [CArchive::GetObjectSchema](#getobjectschema); otherwise, <strong>\*</strong>*pSchema* will contain the schema of the run-time class that was previously stored.

You can use [SerializeClass](#serializeclass) instead of `ReadClass`, which handles both reading and writing of the class reference.

### Example

  See the example for [CArchive::WriteClass](#writeclass).

## <a name="readobject"></a> CArchive::ReadObject

Reads object data from the archive and constructs an object of the appropriate type.

```
CObject* ReadObject(const CRuntimeClass* pClass);
```

### Parameters

*pClass*<br/>
A constant pointer to the [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) structure that corresponds to the object you expect to read.

### Return Value

A [CObject](../../mfc/reference/cobject-class.md) pointer that must be safely cast to the correct derived class by using [CObject::IsKindOf](../../mfc/reference/cobject-class.md#iskindof).

### Remarks

This function is normally called by the `CArchive` extraction ( **>>**) operator overloaded for a [CObject](../../mfc/reference/cobject-class.md) pointer. `ReadObject`, in turn, calls the `Serialize` function of the archived class.

If you supply a nonzero *pClass* parameter, which is obtained by the [RUNTIME_CLASS](../../mfc/reference/run-time-object-model-services.md#runtime_class) macro, then the function verifies the run-time class of the archived object. This assumes you have used the IMPLEMENT_SERIAL macro in the implementation of the class.

### Example

  See the example for [CArchive::WriteObject](#writeobject).

## <a name="readstring"></a> CArchive::ReadString

Call this member function to read text data into a buffer from the file associated with the `CArchive` object.

```
BOOL ReadString(CString& rString);
LPTSTR ReadString(LPTSTR lpsz, UINT nMax);
```

### Parameters

*rString*<br/>
A reference to a [CString](../../atl-mfc-shared/reference/cstringt-class.md) that will contain the resultant string after it is read from the file associated with the CArchive object.

*lpsz*<br/>
Specifies a pointer to a user-supplied buffer that will receive a null-terminated text string.

*nMax*<br/>
Specifies the maximum number of characters to read. Should be one less than the size of the *lpsz* buffer.

### Return Value

In the version that returns BOOL, TRUE if successful; FALSE otherwise.

In the version that returns an `LPTSTR`, a pointer to the buffer containing the text data; NULL if end-of-file was reached.

### Remarks

In the version of the member function with the *nMax* parameter, the buffer will hold up to a limit of *nMax* - 1 characters. Reading is stopped by a carriage return-line feed pair. Trailing newline characters are always removed. A null character ('\0') is appended in either case.

[CArchive::Read](#read) is also available for text-mode input, but it does not terminate on a carriage return-line feed pair.

### Example

  See the example for [CArchive::WriteString](#writestring).

## <a name="serializeclass"></a> CArchive::SerializeClass

Call this member function when you want to store and load the version information of a base class.

```cpp
void SerializeClass(const CRuntimeClass* pClassRef);
```

### Parameters

*pClassRef*<br/>
A pointer to a run-time class object for the base class.

### Remarks

`SerializeClass` reads or writes the reference to a class to the `CArchive` object, depending on the direction of the `CArchive`. Use `SerializeClass` in place of [ReadClass](#readclass) and [WriteClass](#writeclass) as a convenient way to serialize base-class objects; `SerializeClass` requires less code and fewer parameters.

Like `ReadClass`, `SerializeClass` verifies that the archived class information is compatible with your runtime class. If it is not compatible, `SerializeClass` will throw a [CArchiveException](../../mfc/reference/carchiveexception-class.md).

Your runtime class must use [DECLARE_SERIAL](../../mfc/reference/run-time-object-model-services.md#declare_serial) and [IMPLEMENT_SERIAL](../../mfc/reference/run-time-object-model-services.md#implement_serial); otherwise, `SerializeClass` will throw a [CNotSupportedException](../../mfc/reference/cnotsupportedexception-class.md).

Use the [RUNTIME_CLASS](../../mfc/reference/run-time-object-model-services.md#runtime_class) macro to retrieve the value for the *pRuntimeClass* parameter. The base class must have used the [IMPLEMENT_SERIAL](../../mfc/reference/run-time-object-model-services.md#implement_serial) macro.

### Example

[!code-cpp[NVC_MFCSerialization#25](../../mfc/codesnippet/cpp/carchive-class_17.h)]

## <a name="setloadparams"></a> CArchive::SetLoadParams

Call `SetLoadParams` when you are going to read a large number of `CObject`-derived objects from an archive.

```cpp
void SetLoadParams(UINT nGrowBy = 1024);
```

### Parameters

*nGrowBy*<br/>
The minimum number of element slots to allocate if a size increase is necessary.

### Remarks

`CArchive` uses a load array to resolve references to objects stored in the archive. `SetLoadParams` allows you to set the size to which the load array grows.

You must not call `SetLoadParams` after any object is loaded, or after [MapObject](#mapobject) or [ReadObject](#readobject) is called.

### Example

[!code-cpp[NVC_MFCSerialization#26](../../mfc/codesnippet/cpp/carchive-class_18.h)]

## <a name="setobjectschema"></a> CArchive::SetObjectSchema

Call this member function to set the object schema stored in the archive object to *nSchema*.

```cpp
void SetObjectSchema(UINT nSchema);
```

### Parameters

*nSchema*<br/>
Specifies the object's schema.

### Remarks

The next call to [GetObjectSchema](#getobjectschema) will return the value stored in *nSchema*.

Use `SetObjectSchema` for advanced versioning; for example, when you want to force a particular version to be read in a `Serialize` function of a derived class.

### Example

[!code-cpp[NVC_MFCSerialization#27](../../mfc/codesnippet/cpp/carchive-class_19.cpp)]

## <a name="setstoreparams"></a> CArchive::SetStoreParams

Use `SetStoreParams` when storing a large number of `CObject`-derived objects in an archive.

```cpp
void SetStoreParams(UINT nHashSize = 2053, UINT nBlockSize = 128);
```

### Parameters

*nHashSize*<br/>
The size of the hash table for interface pointer maps. Should be a prime number.

*nBlockSize*<br/>
Specifies the memory-allocation granularity for extending the parameters. Should be a power of 2 for the best performance.

### Remarks

`SetStoreParams` allows you to set the hash table size and the block size of the map used to identify unique objects during the serialization process.

You must not call `SetStoreParams` after any objects are stored, or after [MapObject](#mapobject) or [WriteObject](#writeobject) is called.

### Example

[!code-cpp[NVC_MFCSerialization#26](../../mfc/codesnippet/cpp/carchive-class_18.h)]

## <a name="write"></a> CArchive::Write

Writes a specified number of bytes to the archive.

```cpp
void Write(const void* lpBuf, INT nMax);
```

### Parameters

*lpBuf*<br/>
A pointer to a user-supplied buffer that contains the data to be written to the archive.

*nMax*<br/>
An integer that specifies the number of bytes to be written to the archive.

### Remarks

The archive does not format the bytes.

You can use the `Write` member function within your `Serialize` function to write ordinary structures that are contained in your objects.

### Example

[!code-cpp[NVC_MFCSerialization#23](../../mfc/codesnippet/cpp/carchive-class_20.cpp)]

## <a name="writeclass"></a> CArchive::WriteClass

Use `WriteClass` to store the version and class information of a base class during serialization of the derived class.

```cpp
void WriteClass(const CRuntimeClass* pClassRef);
```

### Parameters

*pClassRef*<br/>
A pointer to the [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) structure that corresponds to the class reference requested.

### Remarks

`WriteClass` writes a reference to the [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) for the base class to the `CArchive`. Use [CArchive::ReadClass](#readclass) to retrieve the reference.

`WriteClass` verifies that the archived class information is compatible with your runtime class. If it is not compatible, `WriteClass` will throw a [CArchiveException](../../mfc/reference/carchiveexception-class.md).

Your runtime class must use [DECLARE_SERIAL](../../mfc/reference/run-time-object-model-services.md#declare_serial) and [IMPLEMENT_SERIAL](../../mfc/reference/run-time-object-model-services.md#implement_serial); otherwise, `WriteClass` will throw a [CNotSupportedException](../../mfc/reference/cnotsupportedexception-class.md).

You can use [SerializeClass](#serializeclass) instead of `WriteClass`, which handles both reading and writing of the class reference.

### Example

[!code-cpp[NVC_MFCSerialization#28](../../mfc/codesnippet/cpp/carchive-class_21.cpp)]

## <a name="writeobject"></a> CArchive::WriteObject

Stores the specified `CObject` to the archive.

```cpp
void WriteObject(const CObject* pOb);
```

### Parameters

*pOb*<br/>
A constant pointer to the object being stored.

### Remarks

This function is normally called by the `CArchive` insertion ( **<<**) operator overloaded for `CObject`. `WriteObject`, in turn, calls the `Serialize` function of the archived class.

You must use the IMPLEMENT_SERIAL macro to enable archiving. `WriteObject` writes the ASCII class name to the archive. This class name is validated later during the load process. A special encoding scheme prevents unnecessary duplication of the class name for multiple objects of the class. This scheme also prevents redundant storage of objects that are targets of more than one pointer.

The exact object encoding method (including the presence of the ASCII class name) is an implementation detail and could change in future versions of the library.

> [!NOTE]
> Finish creating, deleting, and updating all your objects before you begin to archive them. Your archive will be corrupted if you mix archiving with object modification.

### Example

For a definition of the class `CAge`, see the example for [CObList::CObList](../../mfc/reference/coblist-class.md#coblist).

[!code-cpp[NVC_MFCSerialization#29](../../mfc/codesnippet/cpp/carchive-class_22.cpp)]

## <a name="writestring"></a> CArchive::WriteString

Use this member function to write data from a buffer to the file associated with the `CArchive` object.

```cpp
void WriteString(LPCTSTR lpsz);
```

### Parameters

*lpsz*<br/>
Specifies a pointer to a buffer containing a null-terminated text string.

### Remarks

The terminating null character ('\0') is not written to the file; nor is a newline automatically written.

`WriteString` throws an exception in response to several conditions, including the disk-full condition.

`Write` is also available, but rather than terminating on a null character, it writes the requested number of bytes to the file.

### Example

[!code-cpp[NVC_MFCSerialization#30](../../mfc/codesnippet/cpp/carchive-class_23.cpp)]

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[CFile Class](../../mfc/reference/cfile-class.md)<br/>
[CObject Class](../../mfc/reference/cobject-class.md)<br/>
[CSocket Class](../../mfc/reference/csocket-class.md)<br/>
[CSocketFile Class](../../mfc/reference/csocketfile-class.md)
