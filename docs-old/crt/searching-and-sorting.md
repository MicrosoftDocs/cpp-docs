---
title: "Searching and Sorting"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
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
caps.latest.revision: 8
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
# Searching and Sorting
Use the following functions for searching and sorting.  
  
### Searching and Sorting Functions  
  
|Function|Search or Sort|.NET Framework equivalent|  
|--------------|--------------------|-------------------------------|  
|[bsearch](../crt/bsearch.md)|Binary search|[System::Collections::ArrayList::BinarySearch](https://msdn.microsoft.com/en-us/library/system.collections.arraylist.binarysearch.aspx)|  
|[bsearch_s](../crt/bsearch_s.md)|A more secure version of `bsearch`.|[System::Collections::ArrayList::BinarySearch](https://msdn.microsoft.com/en-us/library/system.collections.arraylist.binarysearch.aspx)|  
|[_lfind](../crt/_lfind.md)|Linear search for given value|[System::Collections::ArrayList::Contains](https://msdn.microsoft.com/en-us/library/system.collections.arraylist.contains.aspx)|  
|[_lfind_s](../crt/_lfind_s.md)|A more secure version of `_lfind`|[System::Collections::ArrayList::Contains](https://msdn.microsoft.com/en-us/library/system.collections.arraylist.contains.aspx)|  
|[_lsearch](../crt/_lsearch.md)|Linear search for given value, which is added to array if not found|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[_lsearch_s](../crt/_lsearch_s.md)|A more secure version of `_lsearch`|Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).|  
|[qsort](../crt/qsort.md)|Quick sort|[System::Collections::ArrayList::Sort](https://msdn.microsoft.com/en-us/library/system.collections.arraylist.sort.aspx)|  
|[qsort_s](../crt/qsort_s.md)|A more secure version of `qsort`|[System::Collections::ArrayList::Sort](https://msdn.microsoft.com/en-us/library/system.collections.arraylist.sort.aspx)|  
  
## See Also  
 [Run-Time Routines by Category](../crt/run-time-routines-by-category.md)