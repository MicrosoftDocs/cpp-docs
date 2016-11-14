---
title: "Type Library Access | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.mfc.macros"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "type libraries, accessing"
ms.assetid: a03fa7f0-86c2-4119-bf81-202916fb74b3
caps.latest.revision: 14
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
# Type Library Access
Type libraries expose the interfaces of an OLE control to other OLE-aware applications. Each OLE control must have a type library if one or more interfaces are to be exposed.  
  
 The following macros allow an OLE control to provide access to its own type library:  
  
### Type Library Access  
  
|||  
|-|-|  
|[DECLARE_OLETYPELIB](#declare_oletypelib)|Declares a `GetTypeLib` member function of an OLE control (must be used in the class declaration).|  
|[IMPLEMENT_OLETYPELIB](#implement_oletypelib)|Implements a `GetTypeLib` member function of an OLE control (must be used in the class implementation).|  
  
##  <a name="declare_oletypelib"></a>  DECLARE_OLETYPELIB  
 Declares the `GetTypeLib` member function of your control class.  
  
```   
DECLARE_OLETYPELIB(class_name)   
```  
  
### Parameters  
 *class_name*  
 The name of the control class related to the type library.  
  
### Remarks  
 Use this macro in the control class header file.  
  
##  <a name="implement_oletypelib"></a>  IMPLEMENT_OLETYPELIB  
 Implements the control's `GetTypeLib` member function.  
  
```   
IMPLEMENT_OLETYPELIB(class_name, tlid, wVerMajor,  wVerMinor)   
```  
  
### Parameters  
 *class_name*  
 The name of the control class related to the type library.  
  
 *tlid*  
 The ID number of the type library.  
  
 `wVerMajor`  
 The type library major version number.  
  
 `wVerMinor`  
 The type library minor version number.  
  
### Remarks  
 This macro must appear in the implementation file for any control class that uses the `DECLARE_OLETYPELIB` macro.  
  
## See Also  
 [Macros and Globals](../../mfc/reference/mfc-macros-and-globals.md)
