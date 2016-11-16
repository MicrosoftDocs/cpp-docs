---
title: "IDocHostUIHandlerDispatch Interface | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "IDocHostUIHandlerDispatch"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IDocHostUIHandlerDispatch interface"
ms.assetid: 6963a301-601a-4ac3-8bef-f7b252ea2fc6
caps.latest.revision: 22
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
# IDocHostUIHandlerDispatch Interface
An interface to the Microsoft HTML parsing and rendering engine.  
  
> [!IMPORTANT]
>  This class and its members cannot be used in applications that execute in the [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
## Syntax  
  
```
interface IDocHostUIHandlerDispatch : IDispatch
```  
  
## Members  
  
### Public Methods  
  
> [!NOTE]
>  The links in the following table are to the INet SDK reference topics for the members of the [IDocUIHostHandler](https://msdn.microsoft.com/library/aa753260.aspx) interface. `IDocHostUIHandlerDispatch` has the same functionality as **IDocUIHostHandler**, with the difference being that `IDocHostUIHandlerDispatch` is a dispinterface whereas **IDocUIHostHandler** is a custom interface.  
  
|||  
|-|-|  
|[EnableModeless](https://msdn.microsoft.com/library/aa753253.aspx)|Called from MSHTML implementation of [IOleInPlaceActiveObject::EnableModeless](http://msdn.microsoft.com/library/windows/desktop/ms680115). Also called when MSHTML displays modal UI.|  
|[FilterDataObject](https://msdn.microsoft.com/library/aa753254.aspx)|Called on the host by MSHTML to allow the host to replace MSHTML's data object.|  
|[GetDropTarget](https://msdn.microsoft.com/library/aa753255.aspx)|Called by MSHTML when it is being used as a drop target to allow the host to supply an alternative [IDropTarget](http://msdn.microsoft.com/library/windows/desktop/ms679679).|  
|[GetExternal](https://msdn.microsoft.com/library/aa753256.aspx)|Called by MSHTML to obtain the host's IDispatch interface.|  
|[GetHostInfo](https://msdn.microsoft.com/library/aa753257.aspx)|Retrieves the UI capabilities of MSHTML host.|  
|[GetOptionKeyPath](https://msdn.microsoft.com/library/aa753258.aspx)|Returns the registry key under which MSHTML stores user preferences.|  
|[HideUI](https://msdn.microsoft.com/library/aa753259.aspx)|Called when MSHTML removes its menus and toolbars.|  
|[OnDocWindowActivate](https://msdn.microsoft.com/library/aa753261.aspx)|Called from MSHTML implementation of [IOleInPlaceActiveObject::OnDocWindowActivate](http://msdn.microsoft.com/library/windows/desktop/ms687281).|  
|[OnFrameWindowActivate](https://msdn.microsoft.com/library/aa753262.aspx)|Called from MSHTML implementation of [IOleInPlaceActiveObject::OnFrameWindowActivate](http://msdn.microsoft.com/library/windows/desktop/ms683969).|  
|[ResizeBorder](https://msdn.microsoft.com/library/aa753263.aspx)|Called from MSHTML implementation of [IOleInPlaceActiveObject::ResizeBorder](http://msdn.microsoft.com/library/windows/desktop/ms680053).|  
|[ShowContextMenu](https://msdn.microsoft.com/library/aa753264.aspx)|Called from MSHTML to display a context menu.|  
|[ShowUI](https://msdn.microsoft.com/library/aa753265.aspx)|Allows the host to replace MSHTML menus and toolbars.|  
|[TranslateAccelerator](https://msdn.microsoft.com/library/aa753266.aspx)|Called by MSHTML when [IOleInPlaceActiveObject::TranslateAccelerator](http://msdn.microsoft.com/library/windows/desktop/ms693360) or [IOleControlSite::TranslateAccelerator](http://msdn.microsoft.com/library/windows/desktop/ms693756) is called.|  
|[TranslateUrl](https://msdn.microsoft.com/library/aa753267.aspx)|Called by MSHTML to allow the host an opportunity to modify the URL to be loaded.|  
|[UpdateUI](https://msdn.microsoft.com/library/aa753268.aspx)|Notifies the host that the command state has changed.|  
  
## Remarks  
 A host can replace the menus, toolbars, and context menus used by the Microsoft HTML parsing and rendering engine (MSHTML) by implementing this interface.  
  
## Requirements  
 The definition of this interface is available as IDL or C++, as shown below.  
  
|Definition type|File|  
|---------------------|----------|  
|IDL|ATLIFace.idl|  
|C++|ATLIFace.h (also included in ATLBase.h)|  
  
## See Also  
 [IDocUIHostHandler](https://msdn.microsoft.com/library/aa753260.aspx)









