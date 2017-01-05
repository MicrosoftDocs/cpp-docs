---
title: "AFX_EXTENSION_MODULE Structure | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "AFX_EXTENSION_MODULE"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "AFX_EXTENSION_MODULE structure"
ms.assetid: b85a989c-d0c5-4b28-b53c-dad45b75704e
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
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
# AFX_EXTENSION_MODULE Structure
The `AFX_EXTENSION_MODULE` is used during initialization of MFC extension DLLs to hold the state of extension DLL module.  
  
## Syntax  
  
```  
struct AFX_EXTENSION_MODULE  
{  
    BOOL bInitialized;  
    HMODULE hModule;  
    HMODULE hResource;  
    CRuntimeClass* pFirstSharedClass;  
    COleObjectFactory* pFirstSharedFactory;  
};  
```  
  
#### Parameters  
 *bInitialized*  
 **TRUE** if the DLL module has been initialized with `AfxInitExtensionModule`.  
  
 `hModule`  
 Specifies the handle of the DLL module.  
  
 *hResource*  
 Specifies the handle of the DLL custom resource module.  
  
 *pFirstSharedClass*  
 A pointer to information (the `CRuntimeClass` structure) about the DLL module's first runtime class. Used to provide the start of the runtime class list.  
  
 *pFirstSharedFactory*  
 A pointer to the DLL module's first object factory (a `COleObjectFactory` object). Used to provide the start of the class factory list.  
  
## Remarks  
 MFC extension DLLs need to do two things in their `DllMain` function:  
  
-   Call [AfxInitExtensionModule](http://msdn.microsoft.com/library/15f0c820-ff34-4da6-8077-79afbbb8dac1) and check the return value.  
  
-   Create a **CDynLinkLibrary** object if the DLL will be exporting [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) objects or has its own custom resources.  
  
 The `AFX_EXTENSION_MODULE` structure is used to hold a copy of the extension DLL module state, including a copy of the runtime class objects that have been initialized by the extension DLL as part of normal static object construction executed before `DllMain` is entered. For example:  
  
 [!code-cpp[NVC_MFC_DLL#2](../../atl-mfc-shared/codesnippet/cpp/afx-extension-module-structure_1.cpp)]  
  
 The module information stored in the `AFX_EXTENSION_MODULE` structure can be copied into the **CDynLinkLibrary** object. For example:  
  
 [!code-cpp[NVC_MFC_DLL#5](../../atl-mfc-shared/codesnippet/cpp/afx-extension-module-structure_2.cpp)]  
  
## Requirements  
 **Header:** afx.h  
  
## See Also  
 [Structures, Styles, Callbacks, and Message Maps](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [AfxInitExtensionModule](http://msdn.microsoft.com/library/15f0c820-ff34-4da6-8077-79afbbb8dac1)   
 [AfxTermExtensionModule](http://msdn.microsoft.com/library/b64de402-f1e3-4c26-9823-08c07876aaaa)

