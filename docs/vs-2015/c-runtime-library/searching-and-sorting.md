---
title: "Searching and Sorting | Microsoft Docs"
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
  - "c.programs"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "sorting data"
  - "data [CRT], searching"
  - "searching [C++], CRT search functions"
  - "searching [C++]"
ms.assetid: 15e984f0-e155-46f5-8542-51c458792f54
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Searching and Sorting
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Searching and Sorting](https://docs.microsoft.com/cpp/c-runtime-library/searching-and-sorting).  
  
Use the following functions for searching and sorting.  
  
### Searching and Sorting Functions  
  
|Function|Search or Sort|.NET Framework equivalent|  
|--------------|--------------------|-------------------------------|  
|[bsearch](../c-runtime-library/reference/bsearch.md)|Binary search|[System::Collections::ArrayList::BinarySearch](https://msdn.microsoft.com/library/system.collections.arraylist.binarysearch.aspx)|  
|[bsearch_s](../c-runtime-library/reference/bsearch-s.md)|A more secure version of `bsearch`.|[System::Collections::ArrayList::BinarySearch](https://msdn.microsoft.com/library/system.collections.arraylist.binarysearch.aspx)|  
|[_lfind](../c-runtime-library/reference/lfind.md)|Linear search for given value|[System::Collections::ArrayList::Contains](https://msdn.microsoft.com/library/system.collections.arraylist.contains.aspx)|  
|[_lfind_s](../c-runtime-library/reference/lfind-s.md)|A more secure version of `_lfind`|[System::Collections::ArrayList::Contains](https://msdn.microsoft.com/library/system.collections.arraylist.contains.aspx)|  
|[_lsearch](../c-runtime-library/reference/lsearch.md)|Linear search for given value, which is added to array if not found|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[_lsearch_s](../c-runtime-library/reference/lsearch-s.md)|A more secure version of `_lsearch`|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[qsort](../c-runtime-library/reference/qsort.md)|Quick sort|[System::Collections::ArrayList::Sort](https://msdn.microsoft.com/library/system.collections.arraylist.sort.aspx)|  
|[qsort_s](../c-runtime-library/reference/qsort-s.md)|A more secure version of `qsort`|[System::Collections::ArrayList::Sort](https://msdn.microsoft.com/library/system.collections.arraylist.sort.aspx)|  
  
## See Also  
 [Run-Time Routines by Category](../c-runtime-library/run-time-routines-by-category.md)





