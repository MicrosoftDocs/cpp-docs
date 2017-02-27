---
title: "UnorderedMap::MapChanged | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"  
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::UnorderedMap::MapChanged"
ms.assetid: 6863781e-35af-4e77-9a11-277bd00f5d41
caps.latest.revision: 3
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# UnorderedMap::MapChanged
Raised when an item is inserted into or removed from the map.  
  
## Syntax  
  
```cpp  
event Windows::Foundation::Collections::MapChangedEventHandler<K,V>^ MapChanged;  
```  
  
## Property Value/Return Value  
 A [MapChangedEventHandler\<K,V>](http://msdn.microsoft.com/library/windows/apps/br206644.aspx) that contains information about the object that raised the event, and the kind of change that occurred. See also [IMapChangedEventArgs\<K>](http://msdn.microsoft.com/library/windows/apps/br226034.aspx) and [CollectionChange Enumeration](http://msdn.microsoft.com/library/windows/apps/windows.foundation.collections.collectionchange.aspx).  
  
## .NET Framework Equivalent  
 Windows Store apps that us C# or Visual Basic project IMap\<K,V> as IDictionary\<K,V>.  
  
## Requirements  
 Windows 8.0 or higher  
  
## See Also  
 [Collections](../cppcx/collections-c-cx.md)