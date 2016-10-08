---
title: "operator&lt; (&lt;sample container&gt;)"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 31027dd6-53be-428b-b950-1dcb25393597
caps.latest.revision: 7
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# operator&lt; (&lt;sample container&gt;)
> [!NOTE]
>  This topic is in the Visual C++ documentation as a nonfunctional example of containers used in the Standard C++ Library. For more information, see [STL Containers](../VS_visualcpp/STL-Containers.md).  
  
 Overloads **operator<** to compare two objects of template class [Container](../VS_visualcpp/Sample-Container-Class.md).  
  
## Syntax  
  
```  
  
   template<class Ty>  
bool operator<(  
   const Container <Ty>& _Left,  
   const Container <Ty>& _Right  
);  
```  
  
## Return Value  
 Returns `lexicographical_compare`(_*Left*. [begin](../VS_visualcpp/Container-Class--begin.md), \_*Left*. [end](../VS_visualcpp/Container-Class--end.md), \_*Right***.begin**, \_*Right*.**end**).  
  
## See Also  
 [<sample container\>](../VS_visualcpp/-sample-container-.md)