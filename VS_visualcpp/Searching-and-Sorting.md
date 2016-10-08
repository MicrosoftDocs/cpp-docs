---
title: "Searching and Sorting"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
  - C
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 15e984f0-e155-46f5-8542-51c458792f54
caps.latest.revision: 8
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
# Searching and Sorting
Use the following functions for searching and sorting.  
  
### Searching and Sorting Functions  
  
|Function|Search or Sort|.NET Framework equivalent|  
|--------------|--------------------|-------------------------------|  
|[bsearch](../VS_visualcpp/bsearch.md)|Binary search|[System::Collections::ArrayList::BinarySearch](https://msdn.microsoft.com/en-us/library/system.collections.arraylist.binarysearch.aspx)|  
|[bsearch_s](../VS_visualcpp/bsearch_s.md)|A more secure version of `bsearch`.|[System::Collections::ArrayList::BinarySearch](https://msdn.microsoft.com/en-us/library/system.collections.arraylist.binarysearch.aspx)|  
|[_lfind](../VS_visualcpp/_lfind.md)|Linear search for given value|[System::Collections::ArrayList::Contains](https://msdn.microsoft.com/en-us/library/system.collections.arraylist.contains.aspx)|  
|[_lfind_s](../VS_visualcpp/_lfind_s.md)|A more secure version of `_lfind`|[System::Collections::ArrayList::Contains](https://msdn.microsoft.com/en-us/library/system.collections.arraylist.contains.aspx)|  
|[_lsearch](../VS_visualcpp/_lsearch.md)|Linear search for given value, which is added to array if not found|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[_lsearch_s](../VS_visualcpp/_lsearch_s.md)|A more secure version of `_lsearch`|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[qsort](../VS_visualcpp/qsort.md)|Quick sort|[System::Collections::ArrayList::Sort](https://msdn.microsoft.com/en-us/library/system.collections.arraylist.sort.aspx)|  
|[qsort_s](../VS_visualcpp/qsort_s.md)|A more secure version of `qsort`|[System::Collections::ArrayList::Sort](https://msdn.microsoft.com/en-us/library/system.collections.arraylist.sort.aspx)|  
  
## See Also  
 [Run-Time Routines by Category](../VS_visualcpp/Run-Time-Routines-by-Category.md)