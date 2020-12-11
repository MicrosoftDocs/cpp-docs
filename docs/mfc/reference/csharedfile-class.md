---
description: "Learn more about: CSharedFile Class"
title: "CSharedFile Class"
ms.date: "11/04/2016"
f1_keywords: ["CSharedFile", "AFXADV/CSharedFile", "AFXADV/CSharedFile::CSharedFile", "AFXADV/CSharedFile::Detach", "AFXADV/CSharedFile::SetHandle"]
helpviewer_keywords: ["CSharedFile [MFC], CSharedFile", "CSharedFile [MFC], Detach", "CSharedFile [MFC], SetHandle"]
ms.assetid: 5d000422-9ede-4318-a8c9-f7412b674f39
---
# CSharedFile Class

The [CMemFile](../../mfc/reference/cmemfile-class.md)-derived class that supports shared memory files.

## Syntax

```
class CSharedFile : public CMemFile
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CSharedFile::CSharedFile](#csharedfile)|Constructs a `CSharedFile` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CSharedFile::Detach](#detach)|Closes the shared memory file and returns the handle of its memory block.|
|[CSharedFile::SetHandle](#sethandle)|Attaches the shared memory file to a memory block.|

## Remarks

Memory files behave like disk files. The difference is, a memory file is stored in RAM rather than on disk. A memory file is useful for fast temporary storage, or for transferring raw bytes or serialized objects between independent processes.

Shared memory files differ from other memory files in that memory for them is allocated with the [GlobalAlloc](/windows/win32/api/winbase/nf-winbase-globalalloc) Windows function. The `CSharedFile` class stores data in a globally allocated memory block (created using `GlobalAlloc`), and this memory block can be shared using DDE, the Clipboard, or other OLE/COM uniform data transfer operations, for example, using `IDataObject`.

`GlobalAlloc` returns an HGLOBAL handle rather than a pointer to memory, such as the pointer returned by [malloc](../../c-runtime-library/reference/malloc.md). The HGLOBAL handle is needed in certain applications. For example, to put data on the Clipboard you need an HGLOBAL handle.

`CSharedFile` doesn't use memory-mapped files, and the data can't be directly shared between processes.

`CSharedFile` objects can automatically allocate their own memory. Or, you can attach your own memory block to the `CSharedFile` object by calling [CSharedFile::SetHandle](#sethandle). In either case, memory for growing the memory file automatically is allocated in `nGrowBytes`-sized increments if `nGrowBytes` isn't zero.

For more information, see the article [Files in MFC](../../mfc/files-in-mfc.md) and [File Handling](../../c-runtime-library/file-handling.md) in the *Run-Time Library Reference*.

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CFile](../../mfc/reference/cfile-class.md)

[CMemFile](../../mfc/reference/cmemfile-class.md)

`CSharedFile`

## Requirements

**Header:** afxadv.h

## <a name="csharedfile"></a> CSharedFile::CSharedFile

Constructs a `CSharedFile` object and allocates memory for it.

```
CSharedFile(
    UINT nAllocFlags = GMEM_DDESHARE | GMEM_MOVEABLE,
    UINT nGrowBytes = 4096);
```

### Parameters

*nAllocFlags*<br/>
Flags indicating how memory is to be allocated. See [GlobalAlloc](/windows/win32/api/winbase/nf-winbase-globalalloc) for a list of valid flag values.

*nGrowBytes*<br/>
The memory allocation increment in bytes.

## <a name="detach"></a> CSharedFile::Detach

Call this function to close the memory file and detach it from the memory block.

```
HGLOBAL Detach();
```

### Return Value

The handle of the memory block that contains the contents of the memory file.

### Remarks

You can reopen it by calling [SetHandle](#sethandle), using the handle returned by **Detach**.

## <a name="sethandle"></a> CSharedFile::SetHandle

Call this function to attach a block of global memory to the `CSharedFile` object.

```cpp
void SetHandle(
    HGLOBAL hGlobalMemory,
    BOOL bAllowGrow = TRUE);
```

### Parameters

*hGlobalMemory*<br/>
Handle to the global memory to be attached to the `CSharedFile`.

*bAllowGrow*<br/>
Specifies whether the memory block is allowed to grow.

### Remarks

If *bAllowGrow* is nonzero, the size of the memory block is increased as necessary, for example, if you attempt to write more bytes to the file than the size of the memory block.

## See also

[CMemFile Class](../../mfc/reference/cmemfile-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[CMemFile Class](../../mfc/reference/cmemfile-class.md)
