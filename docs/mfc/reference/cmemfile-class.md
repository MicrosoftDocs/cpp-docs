---
title: "CMemFile Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "reference"
f1_keywords: ["CMemFile", "AFX/CMemFile", "AFX/CMemFile::CMemFile", "AFX/CMemFile::Attach", "AFX/CMemFile::Detach", "AFX/CMemFile::Alloc", "AFX/CMemFile::Free", "AFX/CMemFile::GrowFile", "AFX/CMemFile::Memcpy", "AFX/CMemFile::Realloc"]
dev_langs: ["C++"]
helpviewer_keywords: ["CMemFile [MFC], CMemFile", "CMemFile [MFC], Attach", "CMemFile [MFC], Detach", "CMemFile [MFC], Alloc", "CMemFile [MFC], Free", "CMemFile [MFC], GrowFile", "CMemFile [MFC], Memcpy", "CMemFile [MFC], Realloc"]
ms.assetid: 20e86515-e465-4f73-b2ea-e49789d63165
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# CMemFile Class
The [CFile](../../mfc/reference/cfile-class.md)-derived class that supports memory files.  
  
## Syntax  
  
```  
class CMemFile : public CFile  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CMemFile::CMemFile](#cmemfile)|Constructs a memory file object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMemFile::Attach](#attach)|Attaches a block of memory to `CMemFile`.|  
|[CMemFile::Detach](#detach)|Detaches the block of memory from `CMemFile` and returns a pointer to the block of memory detached.|  
  
### Protected Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMemFile::Alloc](#alloc)|Override to modify memory allocation behavior.|  
|[CMemFile::Free](#free)|Override to modify memory deallocation behavior.|  
|[CMemFile::GrowFile](#growfile)|Override to modify behavior when growing a file.|  
|[CMemFile::Memcpy](#memcpy)|Override to modify memory copy behavior when reading and writing files.|  
|[CMemFile::Realloc](#realloc)|Override to modify memory reallocation behavior.|  
  
## Remarks  
 These memory files behave like disk files except that the file is stored in RAM rather than on disk. A memory file is useful for fast temporary storage or for transferring raw bytes or serialized objects between independent processes.  
  
 `CMemFile` objects can automatically allocate their own memory or you can attach your own memory block to the `CMemFile` object by calling [Attach](#attach). In either case, memory for growing the memory file automatically is allocated in `nGrowBytes`-sized increments if `nGrowBytes` is not zero.  
  
 The memory block will automatically be deleted upon destruction of the `CMemFile` object if the memory was originally allocated by the `CMemFile` object; otherwise, you are responsible for deallocating the memory you attached to the object.  
  
 You can access the memory block through the pointer supplied when you detach it from the `CMemFile` object by calling [Detach](#detach).  
  
 The most common use of `CMemFile` is to create a `CMemFile` object and use it by calling [CFile](../../mfc/reference/cfile-class.md) member functions. Note that creating a `CMemFile` automatically opens it: you do not call [CFile::Open](../../mfc/reference/cfile-class.md#open), which is only used for disk files. Because `CMemFile` doesn't use a disk file, the data member `CFile::m_hFile` is not used.  
  
 The `CFile` member functions [Duplicate](../../mfc/reference/cfile-class.md#duplicate), [LockRange](../../mfc/reference/cfile-class.md#lockrange), and [UnlockRange](../../mfc/reference/cfile-class.md#unlockrange) are not implemented for `CMemFile`. If you call these functions on a `CMemFile` object, you will get a [CNotSupportedException](../../mfc/reference/cnotsupportedexception-class.md).  
  
 `CMemFile` uses the run-time library functions [malloc](../../c-runtime-library/reference/malloc.md), [realloc](../../c-runtime-library/reference/realloc.md), and [free](../../c-runtime-library/reference/free.md) to allocate, reallocate, and deallocate memory; and the intrinsic [memcpy](../../c-runtime-library/reference/memcpy-wmemcpy.md) to block copy memory when reading and writing. If you'd like to change this behavior or the behavior when `CMemFile` grows a file, derive your own class from `CMemFile` and override the appropriate functions.  
  
 For more information on `CMemFile`, see the articles [Files in MFC](../../mfc/files-in-mfc.md) and [Memory Management (MFC)](../../mfc/memory-management.md) and see [File Handling](../../c-runtime-library/file-handling.md) in the *Run-Time Library Reference*.  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CFile](../../mfc/reference/cfile-class.md)  
  
 `CMemFile`  
  
## Requirements  
 **Header:** afx.h  
  
##  <a name="alloc"></a>  CMemFile::Alloc  
 This function is called by `CMemFile` member functions.  
  
```  
virtual BYTE* Alloc(SIZE_T nBytes);
```  
  
### Parameters  
 *nBytes*  
 Number of bytes of memory to be allocated.  
  
### Return Value  
 A pointer to the memory block that was allocated, or NULL if the allocation failed.  
  
### Remarks  
 Override this function to implement custom memory allocation. If you override this function, you'll probably want to override [Free](#free) and [Realloc](#realloc) as well.  
  
 The default implementation uses the run-time library function [malloc](../../c-runtime-library/reference/malloc.md) to allocate memory.  
  
##  <a name="attach"></a>  CMemFile::Attach  
 Call this function to attach a block of memory to `CMemFile`.  
  
```  
void Attach(
    BYTE* lpBuffer,  
    UINT nBufferSize,  
    UINT nGrowBytes = 0);
```  
  
### Parameters  
 *lpBuffer*  
 Pointer to the buffer to be attached to `CMemFile`.  
  
 *nBufferSize*  
 An integer that specifies the size of the buffer in bytes.  
  
 *nGrowBytes*  
 The memory allocation increment in bytes.  
  
### Remarks  
 This causes `CMemFile` to use the block of memory as the memory file.  
  
 If *nGrowBytes* is 0, `CMemFile` will set the file length to *nBufferSize*. This means that the data in the memory block before it was attached to `CMemFile` will be used as the file. Memory files created in this manner cannot be grown.  
  
 Since the file cannot be grown, be careful not to cause `CMemFile` to attempt to grow the file. For example, don't call the `CMemFile` overrides of [CFile:Write](../../mfc/reference/cfile-class.md#write) to write past the end or don't call [CFile:SetLength](../../mfc/reference/cfile-class.md#setlength) with a length longer than *nBufferSize*.  
  
 If *nGrowBytes* is greater than 0, `CMemFile` will ignore the contents of the memory block you've attached. You'll have to write the contents of the memory file from scratch using the `CMemFile` override of `CFile::Write`. If you attempt to write past the end of the file or grow the file by calling the `CMemFile` override of `CFile::SetLength`, `CMemFile` will grow the memory allocation in increments of *nGrowBytes*. Growing the memory allocation will fail if the memory block you pass to `Attach` wasn't allocated with a method compatible with [Alloc](#alloc). To be compatible with the default implementation of `Alloc`, you must allocate the memory with the run-time library function [malloc](../../c-runtime-library/reference/malloc.md) or [calloc](../../c-runtime-library/reference/calloc.md).  
  
##  <a name="cmemfile"></a>  CMemFile::CMemFile  
 The first overload opens an empty memory file.  
  
```  
CMemFile(UINT nGrowBytes = 1024);

 
CMemFile(
    BYTE* lpBuffer,  
    UINT nBufferSize,  
    UINT nGrowBytes = 0);
```  
  
### Parameters  
 *nGrowBytes*  
 The memory allocation increment in bytes.  
  
 *lpBuffe*r  
 Pointer to a buffer that receives information of the size *nBufferSize*.  
  
 *nBufferSize*  
 An integer that specifies the size of the file buffer, in bytes.  
  
### Remarks  
 Note that the file is opened by the constructor and that you should not call [CFile::Open](../../mfc/reference/cfile-class.md#open).  
  
 The second overload acts the same as if you used the first constructor and immediately called [Attach](#attach) with the same parameters. See `Attach` for details.  
  
### Example  
 [!code-cpp[NVC_MFCFiles#36](../../atl-mfc-shared/reference/codesnippet/cpp/cmemfile-class_1.cpp)]  
  
##  <a name="detach"></a>  CMemFile::Detach  
 Call this function to get a pointer to the memory block being used by `CMemFile`.  
  
```  
BYTE* Detach();
```  
  
### Return Value  
 A pointer to the memory block that contains the contents of the memory file.  
  
### Remarks  
 Calling this function also closes the `CMemFile`. You can reattach the memory block to `CMemFile` by calling [Attach](#attach). If you want to reattach the file and use the data in it, you should call [CFile::GetLength](../../mfc/reference/cfile-class.md#getlength) to get the length of the file before calling `Detach`. Note that if you attach a memory block to `CMemFile` so that you can use its data ( `nGrowBytes` == 0), then you won't be able to grow the memory file.  
  
##  <a name="free"></a>  CMemFile::Free  
 This function is called by `CMemFile` member functions.  
  
```  
virtual void Free(BYTE* lpMem);
```  
  
### Parameters  
 *lpMem*  
 Pointer to the memory to be deallocated.  
  
### Remarks  
 Override this function to implement custom memory deallocation. If you override this function, you'll probably want to override [Alloc](#alloc) and [Realloc](#realloc) as well.  
  
##  <a name="growfile"></a>  CMemFile::GrowFile  
 This function is called by several of the `CMemFile` member functions.  
  
```  
virtual void GrowFile(SIZE_T dwNewLen);
```  
  
### Parameters  
 *dwNewLen*  
 New size of the memory file.  
  
### Remarks  
 You can override it if you want to change how `CMemFile` grows its file. The default implementation calls [Realloc](#realloc) to grow an existing block (or [Alloc](#alloc) to create a memory block), allocating memory in multiples of the `nGrowBytes` value specified in the constructor or [Attach](#attach) call.  
  
##  <a name="memcpy"></a>  CMemFile::Memcpy  
 This function is called by the `CMemFile` overrides of [CFile::Read](../../mfc/reference/cfile-class.md#read) and [CFile::Write](../../mfc/reference/cfile-class.md#write) to transfer data to and from the memory file.  
  
```  
virtual BYTE* Memcpy(
    BYTE* lpMemTarget,  
    const BYTE* lpMemSource,  
    SIZE_T nBytes);
```  
  
### Parameters  
 *lpMemTarget*  
 Pointer to the memory block into which the source memory will be copied.  
  
 *lpMemSource*  
 Pointer to the source memory block.  
  
 *nBytes*  
 Number of bytes to be copied.  
  
### Return Value  
 A copy of *lpMemTarget*.  
  
### Remarks  
 Override this function if you want to change the way that `CMemFile` does these memory copies.  
  
##  <a name="realloc"></a>  CMemFile::Realloc  
 This function is called by `CMemFile` member functions.  
  
```  
virtual BYTE* Realloc(
    BYTE* lpMem,  
    SIZE_T nBytes);
```  
  
### Parameters  
 *lpMem*  
 A pointer to the memory block to be reallocated.  
  
 *nBytes*  
 New size for the memory block.  
  
### Return Value  
 A pointer to the memory block that was reallocated (and possibly moved), or NULL if the reallocation failed.  
  
### Remarks  
 Override this function to implement custom memory reallocation. If you override this function, you'll probably want to override [Alloc](#alloc) and [Free](#free) as well.  
  
## See Also  
 [CFile Class](../../mfc/reference/cfile-class.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)



