---
description: "Learn more about: IDocHostUIHandlerDispatch Interface"
title: "IDocHostUIHandlerDispatch Interface"
ms.date: "07/02/2019"
f1_keywords: ["IDocHostUIHandlerDispatch", "atlbase/ATL::IDocHostUIHandlerDispatch"]
helpviewer_keywords: ["IDocHostUIHandlerDispatch interface"]
ms.assetid: 6963a301-601a-4ac3-8bef-f7b252ea2fc6
---
# IDocHostUIHandlerDispatch Interface

An interface to the Microsoft HTML parsing and rendering engine.

> [!IMPORTANT]
> This class and its members cannot be used in applications that execute in the Windows Runtime.

## Syntax

```
interface IDocHostUIHandlerDispatch : IDispatch
```

## Members

### Public Methods

> [!NOTE]
> The links in the following table are to the INet SDK reference topics for the members of the [IDocUIHostHandler](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753260\(v=vs.85\)) interface. `IDocHostUIHandlerDispatch` has the same functionality as `IDocUIHostHandler`, with the difference being that `IDocHostUIHandlerDispatch` is a dispinterface whereas `IDocUIHostHandler` is a custom interface.

|Name|Description|
|-|-|
|[EnableModeless](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753253\(v=vs.85\))|Called from MSHTML implementation of [IOleInPlaceActiveObject::EnableModeless](/windows/win32/api/oleidl/nf-oleidl-ioleinplaceactiveobject-enablemodeless). Also called when MSHTML displays modal UI.|
|[FilterDataObject](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753254\(v=vs.85\))|Called on the host by MSHTML to allow the host to replace MSHTML's data object.|
|[GetDropTarget](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753255\(v=vs.85\))|Called by MSHTML when it is being used as a drop target to allow the host to supply an alternative [IDropTarget](/windows/win32/api/oleidl/nn-oleidl-idroptarget).|
|[GetExternal](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753256\(v=vs.85\))|Called by MSHTML to obtain the host's IDispatch interface.|
|[GetHostInfo](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753257\(v=vs.85\))|Retrieves the UI capabilities of MSHTML host.|
|[GetOptionKeyPath](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753258\(v=vs.85\))|Returns the registry key under which MSHTML stores user preferences.|
|[HideUI](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753259\(v=vs.85\))|Called when MSHTML removes its menus and toolbars.|
|[OnDocWindowActivate](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753261\(v=vs.85\))|Called from MSHTML implementation of [IOleInPlaceActiveObject::OnDocWindowActivate](/windows/win32/api/oleidl/nf-oleidl-ioleinplaceactiveobject-ondocwindowactivate).|
|[OnFrameWindowActivate](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753262\(v=vs.85\))|Called from MSHTML implementation of [IOleInPlaceActiveObject::OnFrameWindowActivate](/windows/win32/api/oleidl/nf-oleidl-ioleinplaceactiveobject-onframewindowactivate).|
|[ResizeBorder](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753263\(v=vs.85\))|Called from MSHTML implementation of [IOleInPlaceActiveObject::ResizeBorder](/windows/win32/api/oleidl/nf-oleidl-ioleinplaceactiveobject-resizeborder).|
|[ShowContextMenu](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753264\(v=vs.85\))|Called from MSHTML to display a context menu.|
|[ShowUI](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753265\(v=vs.85\))|Allows the host to replace MSHTML menus and toolbars.|
|[TranslateAccelerator](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753266\(v=vs.85\))|Called by MSHTML when [IOleInPlaceActiveObject::TranslateAccelerator](/windows/win32/api/oleidl/nf-oleidl-ioleinplaceactiveobject-translateaccelerator) or [IOleControlSite::TranslateAccelerator](/windows/win32/api/ocidl/nf-ocidl-iolecontrolsite-translateaccelerator) is called.|
|[TranslateUrl](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753267\(v=vs.85\))|Called by MSHTML to allow the host an opportunity to modify the URL to be loaded.|
|[UpdateUI](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753268\(v=vs.85\))|Notifies the host that the command state has changed.|

## Remarks

A host can replace the menus, toolbars, and context menus used by the Microsoft HTML parsing and rendering engine (MSHTML) by implementing this interface.

## Requirements

The definition of this interface is available as IDL or C++, as shown below.

|Definition type|File|
|---------------------|----------|
|IDL|ATLIFace.idl|
|C++|ATLIFace.h (also included in ATLBase.h)|

## See also

[IDocUIHostHandler](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753260\(v=vs.85\))
