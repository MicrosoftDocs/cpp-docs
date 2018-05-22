---
title: "_ATL_FUNC_INFO Structure | Microsoft Docs"
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
  - "_ATL_FUNC_INFO"
  - "ATL::_ATL_FUNC_INFO"
  - "ATL._ATL_FUNC_INFO"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_ATL_FUNC_INFO structure"
  - "ATL_FUNC_INFO structure"
ms.assetid: 441ebe2c-f971-47de-9f52-a258e8d6f88e
caps.latest.revision: 25
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# _ATL_FUNC_INFO Structure
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [_ATL_FUNC_INFO Structure](https://docs.microsoft.com/cpp/atl/reference/atl-func-info-structure).  
  
  
Contains type information used to describe a method or property on a dispinterface.  
  
## Syntax  
  
```
struct _ATL_FUNC_INFO {
    CALLCONV cc;
    VARTYPE vtReturn;
    SHORT nParams;
    VARTYPE pVarTypes[_ATL_MAX_VARTYPES];
};
```  
  
## Members  
 **cc**  
 The calling convention. When using this structure with the [IDispEventSimpleImpl](../../atl/reference/idispeventsimpleimpl-class.md) class, this member must be **CC_STDCALL**. `CC_CDECL` is the only option supported in Windows CE for the `CALLCONV` field of the `_ATL_FUNC_INFO` structure. Any other value is unsupported thus its behavior undefined.  
  
 **vtReturn**  
 The variant type of the function return value.  
  
 **nParams**  
 The number of function parameters.  
  
 **pVarTypes**  
 An array of variant types of the function parameters.  
  
## Remarks  
 Internally, ATL uses this structure to hold information obtained from a type library. You may need to manipulate this structure directly if you provide type information for an event handler used with the [IDispEventSimpleImpl](../../atl/reference/idispeventsimpleimpl-class.md) class and [SINK_ENTRY_INFO](http://msdn.microsoft.com/library/1a0ae260-2c82-4926-a537-db01e5f206a7) macro.  
  
## Example  
 Given a dispinterface method defined in IDL:  
  
 [!code-cpp[NVC_ATL_Windowing#139](../../snippets/cpp/VS_Snippets_Cpp/NVC_ATL_Windowing/Cpp/NVC_ATL_Windowing.idl#139)]  
  
 you would define an `_ATL_FUNC_INFO` structure:  
  
 [!code-cpp[NVC_ATL_Windowing#140](../../snippets/cpp/VS_Snippets_Cpp/NVC_ATL_Windowing/Cpp/ThisExample.h#140)]  
  
## Requirements  
 **Header:** atlcom.h  
  
## See Also  
 [Structures](../../atl/reference/atl-structures.md)   
 [IDispEventSimpleImpl Class](../../atl/reference/idispeventsimpleimpl-class.md)   
 [SINK_ENTRY_INFO](http://msdn.microsoft.com/library/1a0ae260-2c82-4926-a537-db01e5f206a7)













