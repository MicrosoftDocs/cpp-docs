---
title: "operator== (&lt;sample container&gt;) | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std.=="
  - "std::=="
  - "operator=="
  - "std.operator=="
  - "std::operator=="
  - "=="
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "operator ==, containers"
  - "operator==, containers"
  - "== operator, with specific standard C++ objects"
ms.assetid: d3d8754e-5157-4b8b-bf9c-da41856f5eed
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# operator== (&lt;sample container&gt;)
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [operator== (&lt;sample container&gt;)](https://docs.microsoft.com/cpp/standard-library/operator-equality-sample-container).  
  
NOTE]
>  This topic is in the Visual C++ documentation as a nonfunctional example of containers used in the Standard C++ Library. For more information, see [STL Containers](../standard-library/stl-containers.md).  
  
 Overloads `operator==` to compare two objects of template class [Container](../standard-library/sample-container-class.md).  
  
## Syntax  
  
```  
 
    template <class Ty>  
bool operator==(
    const Container <Ty>& left,  
    const Container <Ty>& right);
```  
  
## Return Value  
 Returns ` left`**.**[size](../standard-library/container-class-size.md) **==** ` right`**.size && equal**(_*Left***.**[begin](../standard-library/container-class-begin.md), ` left`. [end](../standard-library/container-class-end.md)*,  right***.begin**).  
  
## See Also  
 [\<sample container>](../standard-library/sample-container.md)





