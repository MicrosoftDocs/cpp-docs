---
title: "Accessors and Rowsets"
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
ms.assetid: edc9c8b3-1a2d-4c2d-869f-7e058c631042
caps.latest.revision: 11
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
# Accessors and Rowsets
To set and retrieve data, OLE DB Templates use an accessor and a rowset through the [CAccessorRowset](../VS_visualcpp/CAccessorRowset-Class.md) class. This class can handle multiple accessors of different types.  
  
## Accessor Types  
 All accessors derive from [CAccessorBase](../VS_visualcpp/CAccessorBase-Class.md). `CAccessorBase` provides both parameter and column binding.  
  
 The following figure shows the accessor types.  
  
 ![Accessor types](../VS_visualcpp/media/vcAccessorTypes.gif "vcAccessorTypes")  
Accessor Classes  
  
-   [CAccessor](../VS_visualcpp/CAccessor-Class.md) Use this accessor when you know the structure of the database source at design time. `CAccessor` statically binds a database record, which contains the buffer, to the data source.  
  
-   [CDynamicAccessor](../VS_visualcpp/CDynamicAccessor-Class.md) Use this accessor when you do not know the structure of the database at design time. `CDynamicAccessor` calls `IColumnsInfo::GetColumnInfo` to get the database column information. It creates and manages an accessor and the buffer.  
  
-   [CDynamicParameterAccessor](../VS_visualcpp/CDynamicParameterAccessor-Class.md) Use this accessor to handle unknown command types. When you prepare the commands, `CDynamicParameterAccessor` can get parameter information from the `ICommandWithParameters` interface, if the provider supports `ICommandWithParameters`.  
  
-   [CDynamicStringAccessor](../VS_visualcpp/CDynamicStringAccessor-Class.md), [CDynamicStringAccessorA](../VS_visualcpp/CDynamicStringAccessorA-Class.md), and [CDynamicStringAccessorW](../VS_visualcpp/CDynamicStringAccessorW-Class.md) Use these classes when you have no knowledge of the database schema. `CDynamicStringAccessorA` retrieves data as ANSI strings; `CDynamicStringAccessorW` retrieves data as Unicode strings.  
  
-   [CManualAccessor](../VS_visualcpp/CManualAccessor-Class.md) With this class, you can use whatever data types you want if the provider can convert the type. It handles both result columns and command parameters.  
  
 The following table summarizes the support in the OLE DB Template accessor types.  
  
|Accessor type|Dynamic|Handles params|Buffer|Multiple accessors|  
|-------------------|-------------|--------------------|------------|------------------------|  
|`CAccessor`|No|Yes|User|Yes|  
|`CDynamicAccessor`|Yes|No|OLE DB Templates|No|  
|`CDynamicParameterAccessor`|Yes|Yes|OLE DB Templates|No|  
|`CDynamicStringAccessor[A,W]`|Yes|No|OLE DB Templates|No|  
|`CManualAccessor`|Yes|Yes|User|Yes|  
  
## Rowset Types  
 The OLE DB Templates support three kinds of rowsets (see the preceding figure): single rowsets (implemented by [CRowset](../VS_visualcpp/CRowset-Class.md)), bulk rowsets (implemented by [CBulkRowset](../VS_visualcpp/CBulkRowset-Class.md)), and array rowsets (implemented by [CArrayRowset](../VS_visualcpp/CArrayRowset-Class.md)). Single rowsets fetch a single row handle when `MoveNext` is called. Bulk rowsets can fetch multiple row handles. Array rowsets are rowsets that can be accessed using array syntax.  
  
 The following figure shows the rowset types.  
  
 ![RowsetType graphic](../VS_visualcpp/media/vcRowsetTypes.gif "vcRowsetTypes")  
Rowset Classes  
  
 [Schema rowsets](../VS_visualcpp/Obtaining-Metadata-with-Schema-Rowsets.md) do not access data in the data store but instead access information about the data store, called metadata. Schema rowsets are typically used in situations in which the database structure is not known at compile time and must be obtained at run time.  
  
## See Also  
 [OLE DB Consumer Templates](../VS_visualcpp/OLE-DB-Consumer-Templates--C---.md)