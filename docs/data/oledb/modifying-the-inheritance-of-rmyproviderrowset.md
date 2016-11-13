---
title: "Modifying the Inheritance of RMyProviderRowset | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "RMyProviderRowset"
  - "inheritance [C++]"
ms.assetid: 33089c90-98a4-43e7-8e67-d4bb137e267e
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Modifying the Inheritance of RMyProviderRowset
To add the `IRowsetLocate` interface to the simple read-only provider example, modify the inheritance of **RMyProviderRowset**. Initially, **RMyProviderRowset** inherits from `CRowsetImpl`. You need to modify it to inherit from **CRowsetBaseImpl**.  
  
 To do this, create a new class, `CMyRowsetImpl`, in MyProviderRS.h:  
  
```  
////////////////////////////////////////////////////////////////////////  
// MyProviderRS.h  
  
template <class T, class Storage, class CreatorClass, class ArrayType = CAtlArray<Storage> >  
class CMyRowsetImpl:  
   public CRowsetImpl<T, Storage, CreatorClass, ArrayType, CSimpleRow, IRowsetLocateImpl< T, IRowsetLocate > >  
{  
...  
};  
```  
  
 Now, edit the COM interface map in MyProviderRS.h to be as follows:  
  
```  
BEGIN_COM_MAP(CMyRowsetImpl)  
   COM_INTERFACE_ENTRY(IRowsetLocate)  
   COM_INTERFACE_ENTRY_CHAIN(_RowsetBaseClass)  
END_COM_MAP()  
```  
  
 This creates a COM interface map that tells `CMyRowsetImpl` to call **QueryInterface** for both the `IRowset` and `IRowsetLocate` interfaces. To get all of the implementation for the other rowset classes, the map links the `CMyRowsetImpl` class back to the **CRowsetBaseImpl** class defined by the OLE DB Templates; the map uses the COM_INTERFACE_ENTRY_CHAIN macro, which tells OLE DB templates to scan the COM map in **CRowsetBaseImpl** in response to a `QueryInterface` call.  
  
 Finally, link `RAgentRowset` to `CMyRowsetBaseImpl` by modifying `RAgentRowset` to inherit from `CMyRowsetImpl`, as follows:  
  
```  
class RAgentRowset : public CMyRowsetImpl<RAgentRowset, CAgentMan, CMyProviderCommand>  
```  
  
 `RAgentRowset` can now use the `IRowsetLocate` interface while taking advantage of the rest of the implementation for the rowset class.  
  
 When this is done, you can [dynamically determine columns returned to the consumer](../../data/oledb/dynamically-determining-columns-returned-to-the-consumer.md).  
  
## See Also  
 [Enhancing the Simple Read-Only Provider](../../data/oledb/enhancing-the-simple-read-only-provider.md)