---
title: "vector&lt;bool&gt;::reference Class"
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
ms.assetid: f27854f9-0ef0-4e7e-ad2e-cd53b6cb3334
caps.latest.revision: 21
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
# vector&lt;bool&gt;::reference Class
The `vector<bool>::reference` class is a proxy class provided by the [vector<bool\> Class](../VS_visualcpp/vector-bool--Class.md) to simulate `bool&`.  
  
## Remarks  
 A simulated reference is required because C++ does not natively allow direct references to bits. `vector<bool>` uses only one bit per element, which can be referenced by using this proxy class. However, the reference simulation is not complete because certain assignments are not valid. For example, because the address of the `vector<bool>::reference` object cannot be taken, the following code that uses [vector<bool\>::operator&#91;&#93;](../Topic/vector%3Cbool%3E::operator.md) is not correct:  
  
```cpp  
    vector<bool> vb;  
...  
    bool* pb = &vb[1]; // conversion error - do not use  
    bool& refb = vb[1];   // conversion error - do not use  
```  
  
### Member Functions  
  
|||  
|-|-|  
|[flip](../VS_visualcpp/vector-bool---reference--flip.md)|Inverts the Boolean value of a vector element.|  
|[operator bool](../VS_visualcpp/vector-bool---reference--operator-bool.md)|Provides an implicit conversion from `vector<bool>::reference` to `bool`.|  
|[operator=](../VS_visualcpp/vector-bool---reference--operator=.md)|Assigns a Boolean value to a bit, or the value held by a referenced element to a bit.|  
  
## Requirements  
 **Header**: <vector\>  
  
 **Namespace:** std  
  
## See Also  
 [<vector\>](../VS_visualcpp/-vector-.md)   
 [Thread Safety in the C++ Standard Library](../VS_visualcpp/Thread-Safety-in-the-C---Standard-Library.md)   
 [Standard Template Library](../Topic/Standard%20Template%20Library.md)