---
title: "UI Support Classes  (ATL) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-atl"]
ms.topic: "reference"
f1_keywords: ["vc.atl.ui"]
dev_langs: ["C++"]
helpviewer_keywords: ["user interfaces, support classes", "user interfaces, ATL classes"]
ms.assetid: 313dfc95-308a-4118-b919-5a3c3673b865
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# UI Support Classes

The following classes provide general UI support:

- [IDocHostUIHandlerDispatch](../atl/reference/idochostuihandlerdispatch-interface.md) An interface to the Microsoft HTML parsing and rendering engine.

- [IOleObjectImpl](../atl/reference/ioleobjectimpl-class.md) Provides the principal methods through which a container communicates with a control. Manages the activation and deactivation of in-place controls.

- [IOleInPlaceObjectWindowlessImpl](../atl/reference/ioleinplaceobjectwindowlessimpl-class.md) Manages the reactivation of in-place controls. Enables a windowless control to receive messages, as well as to participate in drag-and-drop operations.

- [IOleInPlaceActiveObjectImpl](../atl/reference/ioleinplaceactiveobjectimpl-class.md) Assists communication between an in-place control and its container.

- [IViewObjectExImpl](../atl/reference/iviewobjecteximpl-class.md) Enables a control to display itself directly and to notify the container of changes in its display. Provides support for flicker-free drawing, non-rectangular and transparent controls, and hit testing.

## Related Articles

[ATL Tutorial](../atl/active-template-library-atl-tutorial.md)

## See Also

[Class Overview](../atl/atl-class-overview.md)

