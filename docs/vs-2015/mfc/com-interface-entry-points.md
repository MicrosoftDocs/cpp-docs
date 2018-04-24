---
title: "COM Interface Entry Points | Microsoft Docs"
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
  - "entry points, COM interfaces"
  - "state management, OLE/COM interfaces"
  - "MFC COM, COM interface entry points"
  - "OLE, interface entry points"
  - "MFC, managing state data"
  - "COM interfaces, entry points"
ms.assetid: 9e7421dc-0731-4748-9e1b-90acbaf26d77
caps.latest.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# COM Interface Entry Points
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [COM Interface Entry Points](https://docs.microsoft.com/cpp/mfc/com-interface-entry-points).  
  
  
For member functions of a COM interface, use the [METHOD_PROLOGUE](http://msdn.microsoft.com/library/e94c4939-64ea-42de-a501-55594c952828) macro to maintain the proper global state when calling methods of an exported interface.  
  
 Typically, member functions of interfaces implemented by `CCmdTarget`-derived objects already use this macro to provide automatic initialization of the `pThis` pointer. For example:  
  
 [!code-cpp[NVC_MFCConnectionPoints#5](../snippets/cpp/VS_Snippets_Cpp/NVC_MFCConnectionPoints/Cpp/MyClass.cpp#5)]  
  
 For additional information, see [Technical Note 38](../mfc/tn038-mfc-ole-iunknown-implementation.md) on MFC/OLE **IUnknown** implementation.  
  
 The `METHOD_PROLOGUE` macro is defined as:  
  
 `#define METHOD_PROLOGUE(theClass, localClass) \`  
  
 `theClass* pThis = \`  
  
 `((theClass*)((BYTE*)this - offsetof(theClass, m_x##localClass))); \`  
  
 `AFX_MANAGE_STATE(pThis->m_pModuleState) \`  
  
 The portion of the macro concerned with managing the global state is:  
  
 `AFX_MANAGE_STATE( pThis->m_pModuleState )`  
  
 In this expression, *m_pModuleState* is assumed to be a member variable of the containing object. It is implemented by the `CCmdTarget` base class and is initialized to the appropriate value by `COleObjectFactory`, when the object is instantiated.  
  
## See Also  
 [Managing the State Data of MFC Modules](../mfc/managing-the-state-data-of-mfc-modules.md)





