---
title: "UnorderedMap::First Method | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::UnorderedMap::First"
ms.assetid: 915e771a-cec1-4905-8ecb-76501f63c143
caps.latest.revision: 5
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# UnorderedMap::First Method
Returns an iterator that specifies the first [Windows::Foundation::Collections::IKeyValuePair\<K,V>](http://msdn.microsoft.com/library/windows/apps/br226031.aspx) element in the unordered map.  
  
## Syntax  
  
```cpp  
  
virtual Windows::Foundation::Collections::IIterator<  
Windows::Foundation::Collections::IKeyValuePair<K, V>^>^ First();  
```  
  
## Return Value  
 An iterator that specifies the first element in the map.  
  
## Remarks  
 A convenient way to hold the iterator returned by First() is to assign the return value to a variable that is declared with the **auto** type deduction keyword. For example, `auto x = myUnorderedMap->First();`.  
  
## Requirements  
 **Header:** collection.h  
  
 **Namespace:** Platform::Collections  
  
## See Also  
 [Platform::Collections::UnorderedMap Class](../cppcx/platform-collections-unorderedmap-class.md)   
 [Collections](../cppcx/collections-c-cx.md)