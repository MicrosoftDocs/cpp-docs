---
description: "Learn more about: CDumpContext Class"
title: "CDumpContext Class"
ms.date: "11/04/2016"
f1_keywords: ["CDumpContext", "AFX/CDumpContext", "AFX/CDumpContext::CDumpContext", "AFX/CDumpContext::DumpAsHex", "AFX/CDumpContext::Flush", "AFX/CDumpContext::GetDepth", "AFX/CDumpContext::HexDump", "AFX/CDumpContext::SetDepth"]
helpviewer_keywords: ["CDumpContext [MFC], CDumpContext", "CDumpContext [MFC], DumpAsHex", "CDumpContext [MFC], Flush", "CDumpContext [MFC], GetDepth", "CDumpContext [MFC], HexDump", "CDumpContext [MFC], SetDepth"]
ms.assetid: 98c52b2d-14b5-48ed-b423-479a4d1c60fa
---
# CDumpContext Class

Supports stream-oriented diagnostic output in the form of human-readable text.

## Syntax

```
class CDumpContext
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CDumpContext::CDumpContext](#cdumpcontext)|Constructs a `CDumpContext` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CDumpContext::DumpAsHex](#dumpashex)|Dumps the indicated item in hexadecimal format.|
|[CDumpContext::Flush](#flush)|Flushes any data in the dump context buffer.|
|[CDumpContext::GetDepth](#getdepth)|Gets an integer corresponding to the depth of the dump.|
|[CDumpContext::HexDump](#hexdump)|Dumps bytes contained in an array in hexadecimal format.|
|[CDumpContext::SetDepth](#setdepth)|Sets the depth of the dump.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[CDumpContext::operator &lt;&lt;](#operator_lt_lt)|Inserts variables and objects into the dump context.|

## Remarks

`CDumpContext` does not have a base class.

You can use [afxDump](diagnostic-services.md#afxdump), a predeclared `CDumpContext` object, for most of your dumping. The `afxDump` object is available only in the Debug version of the Microsoft Foundation Class Library.

Several of the memory [diagnostic services](../../mfc/reference/diagnostic-services.md) use `afxDump` for their output.

Under the Windows environment, the output from the predefined `afxDump` object, conceptually similar to the `cerr` stream, is routed to the debugger via the Windows function `OutputDebugString`.

The `CDumpContext` class has an overloaded insertion ( **<<**) operator for `CObject` pointers that dumps the object's data. If you need a custom dump format for a derived object, override [CObject::Dump](../../mfc/reference/cobject-class.md#dump). Most Microsoft Foundation classes implement an overridden `Dump` member function.

Classes that are not derived from `CObject`, such as `CString`, `CTime`, and `CTimeSpan`, have their own overloaded `CDumpContext` insertion operators, as do often-used structures such as `CFileStatus`, `CPoint`, and `CRect`.

If you use the [IMPLEMENT_DYNAMIC](../../mfc/reference/run-time-object-model-services.md#implement_dynamic) or [IMPLEMENT_SERIAL](../../mfc/reference/run-time-object-model-services.md#implement_serial) macro in the implementation of your class, then `CObject::Dump` will print the name of your `CObject`-derived class. Otherwise, it will print `CObject`.

The `CDumpContext` class is available with both the Debug and Release versions of the library, but the `Dump` member function is defined only in the Debug version. Use **#ifdef _DEBUG** / `#endif` statements to bracket your diagnostic code, including your custom `Dump` member functions.

Before you create your own `CDumpContext` object, you must create a `CFile` object that serves as the dump destination.

For more information on `CDumpContext`, see [Debugging MFC Applications](/visualstudio/debugger/mfc-debugging-techniques).

**#define _DEBUG**

## Inheritance Hierarchy

`CDumpContext`

## Requirements

**Header:** afx.h

## <a name="cdumpcontext"></a> CDumpContext::CDumpContext

Constructs an object of class `CDumpContext`.

```
CDumpContext(CFile* pFile = NULL);
```

### Parameters

*pFile*<br/>
A pointer to the `CFile` object that is the dump destination.

### Remarks

The `afxDump` object is constructed automatically.

Do not write to the underlying `CFile` while the dump context is active; otherwise, you will interfere with the dump. Under the Windows environment, the output is routed to the debugger via the Windows function `OutputDebugString`.

### Example

[!code-cpp[NVC_MFC_Utilities#12](../../mfc/codesnippet/cpp/cdumpcontext-class_1.cpp)]

## <a name="dumpashex"></a> CDumpContext::DumpAsHex

Dumps the specified type formatted as hexadecimal numbers.

```
CDumpContext& DumpAsHex(BYTE b);
CDumpContext& DumpAsHex(DWORD dw);
CDumpContext& DumpAsHex(int n);
CDumpContext& DumpAsHex(LONG l);
CDumpContext& DumpAsHex(LONGLONG n);
CDumpContext& DumpAsHex(UINT u);
CDumpContext& DumpAsHex(ULONGLONG n);
CDumpContext& DumpAsHex(WORD w);
```

### Return Value

A reference to a `CDumpContext` object.

### Remarks

Call this member function to dump the item of the specified type as a hexadecimal number. To dump an array, call [CDumpContext::HexDump](#hexdump).

### Example

[!code-cpp[NVC_MFC_Utilities#13](../../mfc/codesnippet/cpp/cdumpcontext-class_2.cpp)]

## <a name="flush"></a> CDumpContext::Flush

Forces any data remaining in buffers to be written to the file attached to the dump context.

```cpp
void Flush();
```

### Example

[!code-cpp[NVC_MFC_Utilities#14](../../mfc/codesnippet/cpp/cdumpcontext-class_3.cpp)]

## <a name="getdepth"></a> CDumpContext::GetDepth

Determines whether a deep or shallow dump is in process.

```
int GetDepth() const;
```

### Return Value

The depth of the dump as set by `SetDepth`.

### Example

  See the example for [SetDepth](#setdepth).

## <a name="hexdump"></a> CDumpContext::HexDump

Dumps an array of bytes formatted as hexadecimal numbers.

```cpp
void HexDump(
    LPCTSTR lpszLine,
    BYTE* pby,
    int nBytes,
    int nWidth);
```

### Parameters

*lpszLine*<br/>
A string to output at the start of a new line.

*pby*<br/>
A pointer to a buffer containing the bytes to dump.

*nBytes*<br/>
The number of bytes to dump.

*nWidth*<br/>
Maximum number of bytes dumped per line (not the width of the output line).

### Remarks

To dump a single, specific item type as a hexadecimal number, call [CDumpContext::DumpAsHex](#dumpashex).

### Example

[!code-cpp[NVC_MFC_Utilities#15](../../mfc/codesnippet/cpp/cdumpcontext-class_4.cpp)]

## <a name="operator_lt_lt"></a> CDumpContext::operator &lt;&lt;

Outputs the specified data to the dump context.

```
CDumpContext& operator<<(const CObject* pOb);
CDumpContext& operator<<(const CObject& ob);
CDumpContext& operator<<(LPCTSTR lpsz);
CDumpContext& operator<<(const void* lp);
CDumpContext& operator<<(BYTE by);
CDumpContext& operator<<(WORD w);
CDumpContext& operator<<(DWORD dw);
CDumpContext& operator<<(int n);
CDumpContext& operator<<(double d);
CDumpContext& operator<<(float f);
CDumpContext& operator<<(LONG l);
CDumpContext& operator<<(UINT u);
CDumpContext& operator<<(LPCWSTR lpsz);
CDumpContext& operator<<(LPCSTR lpsz);
CDumpContext& operator<<(LONGLONG n);
CDumpContext& operator<<(ULONGLONG n);
CDumpContext& operator<<(HWND h);
CDumpContext& operator<<(HDC h);
CDumpContext& operator<<(HMENU h);
CDumpContext& operator<<(HACCEL h);
CDumpContext& operator<<(HFONT h);
```

### Return Value

A `CDumpContext` reference. Using the return value, you can write multiple insertions on a single line of source code.

### Remarks

The insertion operator is overloaded for `CObject` pointers as well as for most primitive types. A pointer to character results in a dump of string contents; a pointer to **`void`** results in a hexadecimal dump of the address only. A LONGLONG results in a dump of a 64-bit signed integer; A ULONGLONG results in a dump of a 64-bit unsigned integer.

If you use the IMPLEMENT_DYNAMIC or IMPLEMENT_SERIAL macro in the implementation of your class, then the insertion operator, through `CObject::Dump`, will print the name of your `CObject`-derived class. Otherwise, it will print `CObject`. If you override the `Dump` function of the class, then you can provide a more meaningful output of the object's contents instead of a hexadecimal dump.

### Example

[!code-cpp[NVC_MFC_Utilities#17](../../mfc/codesnippet/cpp/cdumpcontext-class_5.cpp)]

## <a name="setdepth"></a> CDumpContext::SetDepth

Sets the depth for the dump.

```cpp
void SetDepth(int nNewDepth);
```

### Parameters

*nNewDepth*<br/>
The new depth value.

### Remarks

If you are dumping a primitive type or simple `CObject` that contains no pointers to other objects, then a value of 0 is sufficient. A value greater than 0 specifies a deep dump where all objects are dumped recursively. For example, a deep dump of a collection will dump all elements of the collection. You may use other specific depth values in your derived classes.

> [!NOTE]
> Circular references are not detected in deep dumps and can result in infinite loops.

### Example

[!code-cpp[NVC_MFC_Utilities#16](../../mfc/codesnippet/cpp/cdumpcontext-class_6.cpp)]

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[CFile Class](../../mfc/reference/cfile-class.md)<br/>
[CObject Class](../../mfc/reference/cobject-class.md)
