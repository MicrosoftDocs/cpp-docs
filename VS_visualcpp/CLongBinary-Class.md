---
title: "CLongBinary Class"
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
ms.assetid: f4320059-aeb4-4ee5-bc2b-25f19d898ef5
caps.latest.revision: 17
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
# CLongBinary Class
Simplifies working with very large binary data objects (often called BLOBs, or "binary large objects") in a database.  
  
## Syntax  
  
```  
class CLongBinary : public CObject  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CLongBinary::CLongBinary](#clongbinary__clongbinary)|Constructs a `CLongBinary` object.|  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CLongBinary::m_dwDataLength](#clongbinary__m_dwdatalength)|Contains the actual size in bytes of the data object whose handle is stored in `m_hData`.|  
|[CLongBinary::m_hData](#clongbinary__m_hdata)|Contains a Windows `HGLOBAL` handle to the actual image object.|  
  
## Remarks  
 For example, a record field in a SQL table might contain a bitmap representing a picture. A `CLongBinary` object stores such an object and keeps track of its size.  
  
> [!NOTE]
>  In general, it is better practice now to use [CByteArray](../VS_visualcpp/CByteArray-Class.md) in conjunction with the [DFX_Binary](../Topic/DFX_Binary.md) function. You can still use `CLongBinary`, but in general `CByteArray` provides more functionality under Win32, since there is no longer the size limitation encountered with 16-bit `CByteArray`. This advice applies to programming with Data Access Objects (DAO) as well as Open Database Connectivity (ODBC).  
  
 To use a `CLongBinary` object, declare a field data member of type `CLongBinary` in your recordset class. This member will be an embedded member of the recordset class and will be constructed when the recordset is constructed. After the `CLongBinary` object is constructed, the record field exchange (RFX) mechanism loads the data object from a field in the current record on the data source and stores it back to the record when the record is updated. RFX queries the data source for the size of the binary large object, allocates storage for it (via the `CLongBinary` object's `m_hData` data member), and stores an `HGLOBAL` handle to the data in `m_hData`. RFX also stores the actual size of the data object in the `m_dwDataLength` data member. Work with the data in the object through `m_hData`, using the same techniques you would normally use to manipulate the data stored in a Windows `HGLOBAL` handle.  
  
 When you destroy your recordset, the embedded `CLongBinary` object is also destroyed, and its destructor deallocates the `HGLOBAL` data handle.  
  
 For more information about large objects and the use of `CLongBinary`, see the articles [Recordset (ODBC)](../VS_visualcpp/Recordset--ODBC-.md) and [Recordset: Working with Large Data Items (ODBC)](../VS_visualcpp/Recordset--Working-with-Large-Data-Items--ODBC-.md).  
  
## Inheritance Hierarchy  
 [CObject](../VS_visualcpp/CObject-Class.md)  
  
 `CLongBinary`  
  
## Requirements  
 **Header:** afxdb_.h  
  
##  <a name="clongbinary__clongbinary"></a>  CLongBinary::CLongBinary  
 Constructs a `CLongBinary` object.  
  
```  
CLongBinary();  
```  
  
##  <a name="clongbinary__m_dwdatalength"></a>  CLongBinary::m_dwDataLength  
 Stores the actual size in bytes of the data stored in the `HGLOBAL` handle in `m_hData`.  
  
```  
SQLULEN m_dwDataLength;  
```  
  
### Remarks  
 This size may be smaller than the size of the memory block allocated for the data. Call the Win32                         [GLobalSize](http://msdn.microsoft.com/library/windows/desktop/aa366593) function to get the allocated size.  
  
##  <a name="clongbinary__m_hdata"></a>  CLongBinary::m_hData  
 Stores a Windows `HGLOBAL` handle to the actual binary large object data.  
  
```  
HGLOBAL m_hData;  
```  
  
## See Also  
 [CObject Class](../VS_visualcpp/CObject-Class.md)   
 [Hierarchy Chart](../VS_visualcpp/Hierarchy-Chart.md)   
 [CRecordset Class](../VS_visualcpp/CRecordset-Class.md)