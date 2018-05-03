---
title: "accumulate (STL/CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-cli"]
ms.topic: "reference"
f1_keywords: ["cliext::accumulate"]
dev_langs: ["C++"]
helpviewer_keywords: ["accumulate function [STL/CLR]"]
ms.assetid: b80e1ef1-1858-4c1d-817b-c42ad1f17a2f
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "dotnet"]
---
# accumulate (STL/CLR)
Computes the sum of all the elements in a specified range including some initial value by computing successive partial sums or computes the result of successive partial results similarly obtained from using a specified binary operation other than the sum.  
  
## Syntax  
  
```  
template<class _InIt, class _Ty> inline  
    _Ty accumulate(_InIt _First, _InIt _Last, _Ty _Val);  
template<class _InIt, class _Ty, class _Fn2> inline  
    _Ty accumulate(_InIt _First, _InIt _Last, _Ty _Val, _Fn2 _Func);  
```  
  
## Remarks  
 This function behaves the same as the C++ Standard Library numeric function `accumulate`. For more information, see [accumulate](../standard-library/numeric-functions.md#accumulate).  
  
## Requirements  
 **Header:** \<cliext/numeric>  
  
 **Namespace:** cliext  
  
## See Also  
 [numeric (STL/CLR)](../dotnet/numeric-stl-clr.md)