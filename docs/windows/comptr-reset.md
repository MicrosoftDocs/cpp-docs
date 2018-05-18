---
title: "ComPtr::Reset | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
dev_langs: ["C++"]
ms.assetid: aa6a46f7-f56b-4fd5-add0-7cea55f7abda
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# ComPtr::Reset
Releases all references for the pointer to the interface that is associated with this ComPtr.  
  
## Syntax  
  
```  
unsigned long Reset();  
```  
  
## Return Value  
 The number of references released, if any.  
  
## Requirements  
 **Header:** client.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [ComPtr Class](../windows/comptr-class.md)