---
title: "operator&gt; (&lt;sample container&gt;) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-standard-libraries"]
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: ["std::operator>", "operator>", "std::>", ">"]
dev_langs: ["C++"]
helpviewer_keywords: ["> operator, comparing specific objects", "operator >"]
ms.assetid: 49bd417a-3305-4ffa-9884-39d3904ed87d
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# operator&gt; (&lt;sample container&gt;)
> [!NOTE]
>  This topic is in the Visual C++ documentation as a nonfunctional example of containers used in the C++ Standard Library. For more information, see [C++ Standard Library Containers](../standard-library/stl-containers.md).  
  
 Overloads **operator>** to compare two objects of template class [Container](../standard-library/sample-container-class.md).  
  
## Syntax  
  
```  
template <class Ty>  
bool operator*gt;(
    const Container <Ty>& left,  
    const Container <Ty>& right);
```  
  
## Return Value  
 Returns `right < left`.  
  
## See Also  
 [\<sample container>](../standard-library/sample-container.md)

