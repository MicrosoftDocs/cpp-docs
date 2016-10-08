---
title: "CAtlFileMappingBase Class"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: reference
ms.assetid: be555723-2790-4f57-a8fb-be4d68460775
caps.latest.revision: 14
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# CAtlFileMappingBase Class
This class represents a memory-mapped file.  
  
> [!IMPORTANT]
>  This class and its members cannot be used in applications that execute in the Windows Runtime.  
  
## Syntax  
  
```  
  
class CAtlFileMappingBase  
  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CAtlFileMappingBase::CAtlFileMappingBase](../Topic/CAtlFileMappingBase::CAtlFileMappingBase.md)|The constructor.|  
|[CAtlFileMappingBase::~CAtlFileMappingBase](../Topic/CAtlFileMappingBase::~CAtlFileMappingBase.md)|The destructor.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CAtlFileMappingBase::CopyFrom](../Topic/CAtlFileMappingBase::CopyFrom.md)|Call this method to copy from a file-mapping object.|  
|[CAtlFileMappingBase::GetData](../Topic/CAtlFileMappingBase::GetData.md)|Call this method to get the data from a file-mapping object.|  
|[CAtlFileMappingBase::GetHandle](../Topic/CAtlFileMappingBase::GetHandle.md)|Call this method to return the file handle.|  
|[CAtlFileMappingBase::GetMappingSize](../Topic/CAtlFileMappingBase::GetMappingSize.md)|Call this method to get the mapping size from a file-mapping object.|  
|[CAtlFileMappingBase::MapFile](../Topic/CAtlFileMappingBase::MapFile.md)|Call this method to create a file-mapping object.|  
|[CAtlFileMappingBase::MapSharedMem](../Topic/CAtlFileMappingBase::MapSharedMem.md)|Call this method to create a file-mapping object that permits full access to all processes.|  
|[CAtlFileMappingBase::OpenMapping](../Topic/CAtlFileMappingBase::OpenMapping.md)|Call this method to return a handle to the file-mapping object.|  
|[CAtlFileMappingBase::Unmap](../Topic/CAtlFileMappingBase::Unmap.md)|Call this method to unmap a file-mapping object.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[CAtlFileMappingBase::operator =](../Topic/CAtlFileMappingBase::operator%20=.md)|Sets the current file-mapping object to another file-mapping object.|  
  
## Remarks  
 File mapping is the association of a file's contents with a portion of the virtual address space of a process. This class provides methods for creating file-mapping objects that permit programs to easily access and share data.  
  
 For more information, see [File Mapping](http://msdn.microsoft.com/library/windows/desktop/aa366556) in the Windows SDK.  
  
## Requirements  
 **Header:** atlfile.h  
  
##  <a name="catlfilemappingbase__catlfilemappingbase"></a>  CAtlFileMappingBase::CAtlFileMappingBase  
 The constructor.  
  
```  
  
CAtlFileMappingBase(  
      CAtlFileMappingBase&  orig  
   );  
   CAtlFileMappingBase( ) throw( );  
  
```  
  
### Parameters  
 `orig`  
 The original file-mapping object to copy to create the new object.  
  
### Remarks  
 Creates a new file-mapping object, optionally using an existing object. It is still necessary to call [CAtlFileMappingBase::MapFile](../Topic/CAtlFileMappingBase::MapFile.md) to open or create the file-mapping object for a particular file.  
  
### Example  
 [!CODE [NVC_ATL_Utilities#71](../CodeSnippet/VS_Snippets_Cpp/NVC_ATL_Utilities#71)]  
  
##  <a name="catlfilemappingbase___dtorcatlfilemappingbase"></a>  CAtlFileMappingBase::~CAtlFileMappingBase  
 The destructor.  
  
```  
  
~CAtlFileMappingBase( ) throw( );  
  
```  
  
### Remarks  
 Frees any resources allocated by the class and calls the [CAtlFileMappingBase::Unmap](../Topic/CAtlFileMappingBase::Unmap.md) method.  
  
##  <a name="catlfilemappingbase__copyfrom"></a>  CAtlFileMappingBase::CopyFrom  
 Call this method to copy from a file-mapping object.  
  
```  
  
HRESULT CopyFrom(  
      CAtlFileMappingBase&  orig  
   ) throw( );  
  
```  
  
### Parameters  
 `orig`  
 The original file-mapping object to copy from.  
  
### Return Value  
 Returns `S_OK` on success, or an error `HRESULT` on failure.  
  
##  <a name="catlfilemappingbase__getdata"></a>  CAtlFileMappingBase::GetData  
 Call this method to get the data from a file-mapping object.  
  
```  
  
void* GetData( ) const throw( );  
  
```  
  
### Return Value  
 Returns a pointer to the data.  
  
##  <a name="catlfilemappingbase__gethandle"></a>  CAtlFileMappingBase::GetHandle  
 Call this method to return a handle to the file-mapping object.  
  
```  
  
HANDLE GetHandle( ) throw ( );  
  
```  
  
### Return Value  
 Returns a handle to the file-mapping object.  
  
##  <a name="catlfilemappingbase__getmappingsize"></a>  CAtlFileMappingBase::GetMappingSize  
 Call this method to get the mapping size from a file-mapping object.  
  
```  
  
SIZE_T GetMappingSize( ) throw( );  
  
```  
  
### Return Value  
 Returns the mapping size.  
  
### Example  
 See the example for [CAtlFileMappingBase::CAtlFileMappingBase](../Topic/CAtlFileMappingBase::CAtlFileMappingBase.md).  
  
##  <a name="catlfilemappingbase__mapfile"></a>  CAtlFileMappingBase::MapFile  
 Call this method to open or create a file-mapping object for the specified file.  
  
```  
  
HRESULT MapFile(  
      HANDLE  hFile,  
      SIZE_T  nMappingSize  
    = 0,  
      ULONGLONG  nOffset  
    = 0,  
      DWORD  dwMappingProtection  
    = PAGE_READONLY,  
      DWORD  dwViewDesiredAccess  
    = FILE_MAP_READ   
   ) throw( );  
  
```  
  
### Parameters  
 `hFile`  
 Handle to the file from which to create a mapping object. `hFile` must be valid and cannot be set to INVALID_HANDLE_VALUE.  
  
 `nMappingSize`  
 The mapping size. If 0, the maximum size of the file-mapping object is equal to the current size of the file identified by *hFile.*  
  
 `nOffset`  
 The file offset where mapping is to begin. The offset value must be a multiple of the system's memory allocation granularity.  
  
 `dwMappingProtection`  
 The protection desired for the file view when the file is mapped. See `flProtect` in [CreateFileMapping](http://msdn.microsoft.com/library/windows/desktop/aa366537) in the Windows SDK.  
  
 `dwViewDesiredAccess`  
 Specifies the type of access to the file view and, therefore, the protection of the pages mapped by the file. See `dwDesiredAccess` in [MapViewOfFileEx](http://msdn.microsoft.com/library/windows/desktop/aa366763) in the Windows SDK.  
  
### Return Value  
 Returns `S_OK` on success, or an error `HRESULT` on failure.  
  
### Remarks  
 After a file-mapping object has been created, the size of the file must not exceed the size of the file-mapping object; if it does, not all of the file's contents will be available for sharing. For more details, see [CreateFileMapping](http://msdn.microsoft.com/library/windows/desktop/aa366537) and [MapViewOfFileEx](http://msdn.microsoft.com/library/windows/desktop/aa366763) in the Windows SDK.  
  
### Example  
 See the example for [CAtlFileMappingBase::CAtlFileMappingBase](../Topic/CAtlFileMappingBase::CAtlFileMappingBase.md).  
  
##  <a name="catlfilemappingbase__mapsharedmem"></a>  CAtlFileMappingBase::MapSharedMem  
 Call this method to create a file-mapping object that permits full access to all processes.  
  
```  
  
HRESULT MapSharedMem(  
      SIZE_T  nMappingSize,  
      LPCTSTR  szName,  
      BOOL*  pbAlreadyExisted  
    = NULL,  
      LPSECURITY_ATTRIBUTES  lpsa  
    = NULL,  
      DWORD  dwMappingProtection  
    = PAGE_READWRITE,  
      DWORD  dwViewDesiredAccess  
    = FILE_MAP_ALL_ACCESS   
   ) throw( );  
  
```  
  
### Parameters  
 `nMappingSize`  
 The mapping size. If 0, the maximum size of the file-mapping object is equal to the current size of the file-mapping object identified by `szName.`  
  
 `szName`  
 The name of the mapping object.  
  
 *pbAlreadyExisted*  
 Points to a BOOL value that is set to TRUE if the mapping object already existed.  
  
 `lpsa`  
 The pointer to a **SECURITY_ATTRIBUTES** structure that determines whether the returned handle can be inherited by child processes. See *lpAttributes* in [CreateFileMapping](http://msdn.microsoft.com/library/windows/desktop/aa366537) in the Windows SDK.  
  
 `dwMappingProtection`  
 The protection desired for the file view, when the file is mapped. See `flProtect` in **CreateFileMapping** in the Windows SDK.  
  
 `dwViewDesiredAccess`  
 Specifies the type of access to the file view and, therefore, the protection of the pages mapped by the file. See `dwDesiredAccess` in [MapViewOfFileEx](http://msdn.microsoft.com/library/windows/desktop/aa366763) in the Windows SDK.  
  
### Return Value  
 Returns `S_OK` on success, or an error `HRESULT` on failure.  
  
### Remarks  
 **MapShareMem** allows an existing file-mapping object, created by [CreateFileMapping](http://msdn.microsoft.com/library/windows/desktop/aa366537), to be shared between processes.  
  
##  <a name="catlfilemappingbase__openmapping"></a>  CAtlFileMappingBase::OpenMapping  
 Call this method to open a named file-mapping object for the specified file.  
  
```  
  
HRESULT OpenMapping(  
      LPCTSTR  szName,  
      SIZE_T  nMappingSize,  
      ULONGLONG  nOffset  
    = 0,  
      DWORD  dwViewDesiredAccess  
    = FILE_MAP_ALL_ACCESS   
   ) throw( );  
  
```  
  
### Parameters  
 `szName`  
 The name of the mapping object. If there is an open handle to a file-mapping object by this name and the security descriptor on the mapping object does not conflict with the `dwViewDesiredAccess` parameter, the open operation succeeds.  
  
 `nMappingSize`  
 The mapping size. If 0, the maximum size of the file-mapping object is equal to the current size of the file-mapping object identified by `szName.`  
  
 `nOffset`  
 The file offset where mapping is to begin. The offset value must be a multiple of the system's memory allocation granularity.  
  
 `dwViewDesiredAccess`  
 Specifies the type of access to the file view and, therefore, the protection of the pages mapped by the file. See `dwDesiredAccess` in [MapViewOfFileEx](http://msdn.microsoft.com/library/windows/desktop/aa366763) in the Windows SDK.  
  
### Return Value  
 Returns `S_OK` on success, or an error `HRESULT` on failure.  
  
### Remarks  
 In debug builds, an assertion error will occur if the input parameters are invalid.  
  
##  <a name="catlfilemappingbase__operator__eq"></a>  CAtlFileMappingBase::operator =  
 Sets the current file-mapping object to another file-mapping object.  
  
```  
  
CAtlFileMappingBase& operator =(  
      CAtlFileMappingBase&  orig  
   );  
  
```  
  
### Parameters  
 `orig`  
 The current file-mapping object.  
  
### Return Value  
 Returns a reference to the current object.  
  
##  <a name="catlfilemappingbase__unmap"></a>  CAtlFileMappingBase::Unmap  
 Call this method to unmap a file-mapping object.  
  
```  
  
HRESULT Unmap( ) throw( );  
  
```  
  
### Return Value  
 Returns `S_OK` on success, or an error `HRESULT` on failure.  
  
### Remarks  
 See [UnmapViewOfFile](http://msdn.microsoft.com/library/windows/desktop/aa366882) in the Windows SDK for more details.  
  
## See Also  
 [CAtlFileMapping Class](../VS_visualcpp/CAtlFileMapping-Class.md)   
 [Class Overview](../VS_visualcpp/ATL-Class-Overview.md)