---
title: "Importing Data Using __declspec(dllimport) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "dllimport"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "importing data [C++]"
  - "dllimport attribute [C++], data imports"
  - "__declspec(dllimport) keyword [C++]"
  - "importing DLLs [C++], __declspec(dllimport)"
ms.assetid: 0ae70b39-87c7-4181-8be9-e786e0db60b0
caps.latest.revision: 7
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
# Importing Data Using __declspec(dllimport)
In the case of data, using **__declspec(dllimport)** is a convenience item that removes a layer of indirection. When you import data from a DLL, you still have to go through the import address table. Before **__declspec(dllimport)**, this meant you had to remember to do an extra level of indirection when accessing data exported from the DLL:  
  
```  
// project.h  
#ifdef _DLL   // If accessing the data from inside the DLL  
   ULONG ulDataInDll;  
  
#else         // If accessing the data from outside the DLL  
   ULONG *ulDataInDll;  
#endif  
```  
  
 You would then export the data in your .DEF file:  
  
```  
// project.def  
LIBRARY project  
EXPORTS  
   ulDataInDll   CONSTANT  
```  
  
 and access it outside the DLL:  
  
```  
if (*ulDataInDll == 0L)   
{  
   // Do stuff here  
}  
```  
  
 When you mark the data as **__declspec(dllimport)**, the compiler automatically generates the indirection code for you. You no longer have to worry about the steps above. As stated previously, do not use **__declspec(dllimport)** declaration on the data when building the DLL. Functions within the DLL do not use the import address table to access the data object; therefore, you will not have the extra level of indirection present.  
  
 To export the data automatically from the DLL, use this declaration:  
  
```  
__declspec(dllexport) ULONG ulDataInDLL;  
```  
  
## See Also  
 [Importing into an Application](../build/importing-into-an-application.md)