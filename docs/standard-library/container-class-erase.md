---
title: "Container Class::erase | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-standard-libraries"]
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: ["C++"]
helpviewer_keywords: ["erase method"]
ms.assetid: abc091c5-5a80-4bd8-93a8-a2d9bde2efec
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# Container Class::erase
> [!NOTE]
>  This topic is in the Visual C++ documentation as a nonfunctional example of containers used in the C++ Standard Library. For more information, see [C++ Standard Library Containers](../standard-library/stl-containers.md).  
  
 Erases an element.  
  
## Syntax  
  
```  
 
    iterator erase(
    iterator _Where);

iterator erase(
    iterator first,  
    iterator last);
```  
  
## Remarks  
 The first member function removes the element of the controlled sequence pointed to by *_Where*. The second member function removes the elements of the controlled sequence in the range [`first`, `last`). Both return an iterator that designates the first element remaining beyond any elements removed, or [end](../standard-library/container-class-end.md) if no such element exists.  
  
 The member functions throw an exception only if a copy operation throws an exception.  
  
## See Also  
 [Sample Container Class](../standard-library/sample-container-class.md)
