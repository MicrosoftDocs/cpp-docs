---
title: "IRowsetUpdateImpl Class"
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
ms.topic: article
ms.assetid: f85af76b-ab6f-4f8b-8f4a-337c9679d68f
caps.latest.revision: 9
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
# IRowsetUpdateImpl Class
The OLE DB Templates implementation of the [IRowsetUpdate](https://msdn.microsoft.com/en-us/library/ms714401.aspx) interface.  
  
## Syntax  
  
```  
template <  
   class T,   
   class Storage,   
   class UpdateArray = CAtlArray<Storage>,   
   class RowClass = CSimpleRow,   
   class MapClass = CAtlMap <RowClass::KeyType, RowClass*>   
>  
class IRowsetUpdateImpl : public IRowsetChangeImpl<  
   T,   
   Storage,   
   IRowsetUpdate,   
   RowClass,   
   MapClass  
>  
```  
  
#### Parameters  
 `T`  
 A class derived from `IRowsetUpdateImpl`.  
  
 `Storage`  
 The user record.  
  
 `UpdateArray`  
 An array containing cached data for updating the rowset.  
  
 `RowClass`  
 The storage unit for the **HROW**.  
  
 `MapClass`  
 The storage unit for all row handles held by the provider.  
  
## Members  
  
### Interface Methods (Used with IRowsetChange)  
  
|||  
|-|-|  
|[SetData](../VS_visualcpp/IRowsetUpdateImpl--SetData.md)|Sets data values in one or more columns.|  
  
### Interface Methods (Used with IRowsetUpdate)  
  
|||  
|-|-|  
|[GetOriginalData](../VS_visualcpp/IRowsetUpdateImpl--GetOriginalData.md)|Gets the data most recently transmitted to or obtained from the data source, ignoring pending changes.|  
|[GetPendingRows](../VS_visualcpp/IRowsetUpdateImpl--GetPendingRows.md)|Returns a list of rows with pending changes.|  
|[GetRowStatus](../VS_visualcpp/IRowsetUpdateImpl--GetRowStatus.md)|Returns the status of specified rows.|  
|[Undo](../VS_visualcpp/IRowsetUpdateImpl--Undo.md)|Undoes any changes to the row since the last fetch or update.|  
|[Update](../VS_visualcpp/IRowsetUpdateImpl--Update.md)|Transmits any changes made to the row since the last fetch or update.|  
  
### Implementation Methods (Callback)  
  
|||  
|-|-|  
|[IsUpdateAllowed](../VS_visualcpp/IRowsetUpdateImpl--IsUpdateAllowed.md)|Used to check for security, integrity, and so on before allowing updates.|  
  
### Data Members  
  
|||  
|-|-|  
|[m_mapCachedData](../VS_visualcpp/IRowsetUpdateImpl--m_mapCachedData.md)|Contains the original data for the deferred operation.|  
  
## Remarks  
 You should first read and understand the documentation for [IRowsetChange](https://msdn.microsoft.com/en-us/library/ms715790.aspx), because everything described there also applies here. You should also read chapter 6 of the `OLE``DB``Programmer's``Reference` on setting data.  
  
 `IRowsetUpdateImpl` implements the OLE DB `IRowsetUpdate` interface, which enables consumers to delay the transmission of changes made with `IRowsetChange` to the data source and undo changes before transmission.  
  
> [!IMPORTANT]
>  It is strongly recommended that you read the following documentation BEFORE attempting to implement your provider:  
  
-   [Creating an Updatable Provider](../VS_visualcpp/Creating-an-Updatable-Provider.md)  
  
-   Chapter 6 of the `OLE``DB``Programmer's``Reference`  
  
-   Also see how the `RUpdateRowset` class is used in the UpdatePV sample  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [OLE DB Provider Templates](../VS_visualcpp/OLE-DB-Provider-Templates--C---.md)   
 [OLE DB Provider Template Architecture](../VS_visualcpp/OLE-DB-Provider-Template-Architecture.md)   
 [Creating an Updatable Provider](../VS_visualcpp/Creating-an-Updatable-Provider.md)