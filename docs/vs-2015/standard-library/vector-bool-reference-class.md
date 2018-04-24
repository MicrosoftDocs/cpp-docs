---
title: "vector&lt;bool&gt;::reference Class | Microsoft Docs"
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
  - "vector<bool>::reference"
  - "std::vector<bool>::reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "vector<bool> reference class"
ms.assetid: f27854f9-0ef0-4e7e-ad2e-cd53b6cb3334
caps.latest.revision: 25
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# vector&lt;bool&gt;::reference Class
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [vector&lt;bool&gt;::reference Class](https://docs.microsoft.com/cpp/standard-library/vector-bool-reference-class).  
  
The `vector<bool>::reference` class is a proxy class provided by the [vector\<bool> Class](../standard-library/vector-bool-class.md) to simulate `bool&`.  
  
## Remarks  
 A simulated reference is required because C++ does not natively allow direct references to bits. `vector<bool>` uses only one bit per element, which can be referenced by using this proxy class. However, the reference simulation is not complete because certain assignments are not valid. For example, because the address of the `vector<bool>::reference` object cannot be taken, the following code that uses [vector\<bool>::operator&#91;&#93;](../Topic/vector%3Cbool%3E::operator.md) is not correct:  
  
```cpp  
    vector<bool> vb;  
...  
    bool* pb = &vb[1]; // conversion error - do not use  
    bool& refb = vb[1];   // conversion error - do not use  
```  
  
### Member Functions  
  
|||  
|-|-|  
|[flip](../standard-library/vector-bool-reference-flip.md)|Inverts the Boolean value of a vector element.|  
|[operator bool](../standard-library/vector-bool-reference-operator-bool.md)|Provides an implicit conversion from `vector<bool>::reference` to `bool`.|  
|[operator=](../standard-library/vector-bool-reference-operator-assign.md)|Assigns a Boolean value to a bit, or the value held by a referenced element to a bit.|  
  
## Requirements  
 **Header**: \<vector>  
  
 **Namespace:** std  
  
## See Also  
 [\<vector>](../standard-library/vector.md)   
 [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Standard Template Library](../misc/standard-template-library.md)





