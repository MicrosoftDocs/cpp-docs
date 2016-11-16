---
title: "Initializing Non-MFC DLLs | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "non-MFC DLLs [C++]"
  - "initializing DLLs"
  - "DLLs [C++], non-MFC"
ms.assetid: 2622b32a-28f9-4d61-9e46-6c19aaf8b7ad
caps.latest.revision: 8
author: "corob-msft"
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
# Initializing Non-MFC DLLs
To initialize non-MFC DLLs, your DLL source code must contain a function called `DllMain`. The following code presents a basic skeleton showing what the definition of `DllMain` might look like:  
  
```  
BOOL APIENTRY DllMain(HANDLE hModule,   
                      DWORD  ul_reason_for_call,   
                      LPVOID lpReserved)  
{  
    switch( ul_reason_for_call ) {  
    case DLL_PROCESS_ATTACH:  
    ...  
    case DLL_THREAD_ATTACH:  
    ...  
    case DLL_THREAD_DETACH:  
    ...  
    case DLL_PROCESS_DETACH:  
    ...  
    }  
    return TRUE;  
}  
```  
  
> [!NOTE]
>  The [!INCLUDE[winsdkshort](../atl-mfc-shared/reference/includes/winsdkshort_md.md)] documentation for **DllEntryPoint** says that the actual name of the entry-point function must be specified on the linker command-line with the /ENTRY option. With Visual C++, you do not need to use the /ENTRY option if the name of your entry-point function is `DllMain`. In fact, if you do use the /ENTRY option and name your entry-point function something other than `DllMain`, the C run-time library will not get initialized properly.  
  
## What do you want to know more about?  
  
-   [The function specification for DllMain (Windows SDK)](http://msdn.microsoft.com/library/windows/desktop/ms682583)  
  
-   [Dynamic-link library entry-point function (Windows SDK)](http://msdn.microsoft.com/library/windows/desktop/ms682596)  
  
-   [The C run-time library behavior and _DllMainCRTStartup](../build/run-time-library-behavior.md)  
  
## See Also  
 [Initializing a DLL](../build/initializing-a-dll.md)