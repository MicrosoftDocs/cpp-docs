---
description: "Learn more about: OLE in MFC"
title: "OLE in MFC"
ms.date: "11/04/2016"
helpviewer_keywords: ["MFC, OLE and", "OLE items", "OLE applications [MFC], about OLE", "OLE [MFC]", "OLE containers [MFC], about OLE", "applications [OLE], about OLE", "OLE component object model (COM)"]
ms.assetid: 5193479d-1239-4697-aea4-e82f92c707ab
---
# OLE in MFC

These articles explain the fundamentals of OLE programming using MFC. MFC provides the easiest way to write programs that use OLE:

- To use OLE visual editing (in-place activation).

- To work as OLE containers or servers.

- To implement drag-and-drop functionality.

- To work with date and time data.

- To manage the state data of MFC modules, including exported DLL function entry points, OLE/COM interface entry points, and window procedure entry points.

You can also use [Automation](automation.md).

> [!NOTE]
> The term OLE denotes the technologies associated with linking and embedding, including OLE containers, OLE servers, OLE items, in-place activation (or visual editing), trackers, drag and drop, and menu merging. The term Active applies to the Component Object Model (COM) and COM-based objects such as ActiveX controls. OLE Automation is now called Automation.

## In This Section

[OLE Background](ole-background.md)<br/>
Discusses OLE and provides conceptual information about how it works.

[Activation](activation-cpp.md)<br/>
Describes the role of activation in editing OLE items.

[Containers](containers.md)<br/>
Provides links to using containers in OLE.

[Data Objects and Data Sources](data-objects-and-data-sources-ole.md)<br/>
Provides links to topics discussing the use of the `COleDataObject` and `COleDataSource` classes.

[Drag and Drop](drag-and-drop-ole.md)<br/>
Discusses using copying and pasting with OLE.

[OLE Menus and Resources](menus-and-resources-ole.md)<br/>
Explains the use of menus and resources in MFC OLE document applications.

[Registration](registration.md)<br/>
Discusses server installation and initialization.

[Servers](servers.md)<br/>
Describes how to create OLE items (or components) for use by container applications.

[Trackers](trackers.md)<br/>
Provides information about the `CRectTracker` class, which provides a graphical interface to enable users to interact with OLE client items.

## Related Sections

[Connection Points](connection-points.md)<br/>
Explains how to implement connection points (formerly known as OLE connection points) using the MFC classes `CCmdTarget` and `CConnectionPoint`.

[Container/Server COM Components](containers-advanced-features.md)<br/>
Describes the steps necessary to incorporate optional advanced features into existing container applications.

[The Component Object Model](/windows/win32/com/the-component-object-model)<br/>
Describes using OLE without MFC.

## See also

[Concepts](mfc-concepts.md)
