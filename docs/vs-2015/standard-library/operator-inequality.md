---
title: "operator!= | Microsoft Docs"
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
  - "std::!="
  - "!="
  - "std::operator!="
  - "std.operator!="
  - "std.!="
  - "operator!="
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "!= operator"
  - "operator!="
  - "operator !="
ms.assetid: ef2be7f0-1c94-4edc-b65c-731fddd519f4
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# operator!=
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [operator!=](https://docs.microsoft.com/cpp/standard-library/operator-inequality).  
  
NOTE]
>  This topic is in the Visual C++ documentation as a nonfunctional example of containers used in the Standard C++ Library. For more information, see [STL Containers](../standard-library/stl-containers.md).  
  
 Overloads `operator!=` to compare two objects of template class [Container](../standard-library/sample-container-class.md).  
  
## Syntax  
  
```  
 
    template <class Ty>  
bool operator!=(
    const Container <Ty>& left,  
    const Container <Ty>& right);
```  
  
## Return Value  
 Returns **!**(_*Left* **==** ` right`).  
  
## See Also  
 [\<sample container>](../standard-library/sample-container.md)





