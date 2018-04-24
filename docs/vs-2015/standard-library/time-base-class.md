---
title: "time_base Class | Microsoft Docs"
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
  - "std.time_base"
  - "std::time_base"
  - "time_base"
  - "locale/std::time_base"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "time_base class"
ms.assetid: 9ae37f0b-9a42-496e-9870-3d9b71bab8fb
caps.latest.revision: 23
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# time_base Class
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [time_base Class](https://docs.microsoft.com/cpp/standard-library/time-base-class).  
  
The class serves as a base class for facets of template class time_get, defining just the enumerated type **dateorder** and several constants of this type.  
  
## Syntax  
  
```
class time_base : public locale::facet {
public:
    enum dateorder {no_order,
    dmy,
 mdy,
    ymd,
 ydm};
    time_base(
 size_t _Refs = 0)
 ~time_base();

};
```  
  
## Remarks  
 Each constant characterizes a different way to order the components of a date. The constants are:  
  
- **no_order** specifies no particular order.  
  
- **dmy** specifies the order day, month, then year, as in 2 December 1979.  
  
- **mdy** specifies the order month, day, then year, as in December 2, 1979.  
  
- **ymd** specifies the order year, month, then day, as in 1979/12/2.  
  
- **ydm** specifies the order year, day, then month, as in 1979: 2 Dec.  
  
## Requirements  
 **Header:** \<locale>  
  
 **Namespace:** std  
  
## See Also  
 [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)







