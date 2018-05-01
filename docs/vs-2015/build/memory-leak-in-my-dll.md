---
title: "There&#39;s a memory leak in my regular DLL, but my code looks fine. How can I find the memory leak? | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "DLLs [C++], memory leaks"
  - "memory leaks [C++], DLLs"
ms.assetid: a5d76573-b567-4b6a-8303-dafeeed9204d
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# There&#39;s a memory leak in my regular DLL, but my code looks fine. How can I find the memory leak?
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Visual Studio 2017 Documentation](https://docs.microsoft.com/en-us/visualstudio/).  
  
One possible cause of the memory leak is that MFC creates temporary objects that are used inside message handler functions. In regular DLLs, MFC does not automatically release memory allocated for these objects. For more information, see [Memory Management and the Debug Heap](http://msdn.microsoft.com/en-us/34dc6ef6-31c9-460e-a2a7-15e7f8e3334b) or the Knowledge Base article, "Cleaning Up Temporary MFC Objects in _USRDLL DLLs" (Q105286).  
  
 Note that the term USRDLL is no longer used in the Visual C++ documentation. A regular DLL that is statically linked to MFC has the same characteristics as the former USRDLL. The advice in the Knowledge Base article also applies to regular DLLs that are dynamically linked to MFC. The information in the above Knowledge Base article applies to both regular DLLs that statically link to MFC and regular DLLs that dynamically link to MFC.  
  
## See Also  
 [DLL Frequently Asked Questions](../build/dll-frequently-asked-questions.md)

