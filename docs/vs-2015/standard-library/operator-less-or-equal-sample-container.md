---
title: "operator&lt;= (&lt;sample container&gt;) | Microsoft Docs"
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
  - "std::<="
  - "std.operator<="
  - "operator<="
  - "std.<="
  - "std::operator<="
  - "<="
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "operator<="
  - "operator <="
  - "<= operator, with specific objects"
  - "<= operator"
ms.assetid: 338577dd-dc88-4a2b-9e12-0379c54fc8a2
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# operator&lt;= (&lt;sample container&gt;)
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [operator&lt;= (&lt;sample container&gt;)](https://docs.microsoft.com/cpp/standard-library/operator-less-or-equal-sample-container).  
  
NOTE]
>  This topic is in the Visual C++ documentation as a nonfunctional example of containers used in the Standard C++ Library. For more information, see [STL Containers](../standard-library/stl-containers.md).  
  
 Overloads **operator<=** to compare two objects of template class [Container](../standard-library/sample-container-class.md).  
  
## Syntax  
  
```  
 
    template <class Ty>  
bool operator<=(
    const Container <Ty>& left,  
    const Container <Ty>& right);
```  
  
## Return Value  
 Returns **!**(_*Right* < \_*Left*).  
  
## See Also  
 [\<sample container>](../standard-library/sample-container.md)





