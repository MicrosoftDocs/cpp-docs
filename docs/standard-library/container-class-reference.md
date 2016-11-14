---
title: "Container Class::reference | Microsoft Docs"
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
  - "reference method"
ms.assetid: ab85a9fb-c628-4761-9a5f-a0231fad7690
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
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
# Container Class::reference
> [!NOTE]
>  This topic is in the Visual C++ documentation as a nonfunctional example of containers used in the Standard C++ Library. For more information, see [STL Containers](../standard-library/stl-containers.md).  
  
 Describes an object that can serve as a reference to an element of the controlled sequence.  
  
## Syntax  
  
```  
 
typedef T2 reference;  
```  
  
## Remarks  
 It is described here as a synonym for the unspecified type **T2** (typically **Alloc::reference**). An object of type **reference** can be cast to an object of type [const_reference](../standard-library/container-class-const-reference.md).  
  
## See Also  
 [Sample Container Class](../standard-library/sample-container-class.md)
