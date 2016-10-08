---
title: "COM Interface Entry Points"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 9e7421dc-0731-4748-9e1b-90acbaf26d77
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
# COM Interface Entry Points
For member functions of a COM interface, use the [METHOD_PROLOGUE](../Topic/METHOD_PROLOGUE.md) macro to maintain the proper global state when calling methods of an exported interface.  
  
 Typically, member functions of interfaces implemented by `CCmdTarget`-derived objects already use this macro to provide automatic initialization of the `pThis` pointer. For example:  
  
 [!CODE [NVC_MFCConnectionPoints#5](../CodeSnippet/VS_Snippets_Cpp/NVC_MFCConnectionPoints#5)]  
  
 For additional information, see [Technical Note 38](../VS_visualcpp/TN038--MFC-OLE-IUnknown-Implementation.md) on MFC/OLE **IUnknown** implementation.  
  
 The `METHOD_PROLOGUE` macro is defined as:  
  
 `#define METHOD_PROLOGUE(theClass, localClass) \`  
  
 `theClass* pThis = \`  
  
 `((theClass*)((BYTE*)this - offsetof(theClass, m_x##localClass))); \`  
  
 `AFX_MANAGE_STATE(pThis->m_pModuleState) \`  
  
 The portion of the macro concerned with managing the global state is:  
  
 `AFX_MANAGE_STATE( pThis->m_pModuleState )`  
  
 In this expression, *m_pModuleState* is assumed to be a member variable of the containing object. It is implemented by the `CCmdTarget` base class and is initialized to the appropriate value by `COleObjectFactory`, when the object is instantiated.  
  
## See Also  
 [Managing the State Data of MFC Modules](../VS_visualcpp/Managing-the-State-Data-of-MFC-Modules.md)