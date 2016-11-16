---
title: "operator&lt;= (&lt;sample container&gt;) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
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
caps.latest.revision: 9
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
# operator&lt;= (&lt;sample container&gt;)
> [!NOTE]
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

