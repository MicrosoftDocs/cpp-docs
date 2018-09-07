---
title: "Type Library Access | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "reference"
f1_keywords: ["vc.mfc.macros"]
dev_langs: ["C++"]
helpviewer_keywords: ["type libraries [MFC], accessing"]
ms.assetid: a03fa7f0-86c2-4119-bf81-202916fb74b3
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
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

### Requirements  
 **Header:** afxdisp.h  

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
  
 *wVerMajor*  
 The type library major version number.  
  
 *wVerMinor*  
 The type library minor version number.  
  
### Remarks  
 This macro must appear in the implementation file for any control class that uses the DECLARE_OLETYPELIB macro.  

### Requirements  
 **Header:** afxdisp.h  
   
## See Also  
 [Macros and Globals](../../mfc/reference/mfc-macros-and-globals.md)
