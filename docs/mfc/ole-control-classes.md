---
description: "Learn more about: OLE Control Classes"
title: "OLE Control Classes"
ms.date: "11/04/2016"
helpviewer_keywords: ["ActiveX classes [MFC]", "custom controls [MFC], classes", "ActiveX controls [MFC], OLE control classes", "ActiveX control classes [MFC]", "OLE controls [MFC], classes", "OLE control classes [MFC]", "reusable component classes [MFC]"]
ms.assetid: 96495ec3-319e-4163-b839-1af0428ed9dd
---
# OLE Control Classes

These are the primary classes you use when writing OLE controls. The `COleControlModule` class in an OLE control module is like the [CWinApp](reference/cwinapp-class.md) class in an application. Each module implements one or more OLE controls; these controls are represented by `COleControl` objects. These controls communicate with their containers using `CConnectionPoint` objects.

The `CPictureHolder` and `CFontHolder` classes encapsulate COM interfaces for pictures and fonts, while the `COlePropertyPage` and `CPropExchange` classes help you implement property pages and property persistence for your control.

[COleControlModule](reference/colecontrolmodule-class.md)<br/>
Replaces the `CWinApp` class for your OLE control module. Derive from the `COleControlModule` class to develop an OLE control module object. It provides member functions for initializing your OLE control's module.

[COleControl](reference/colecontrol-class.md)<br/>
Derive from the `COleControl` class to develop an OLE control. Derived from `CWnd`, this class inherits all the functionality of a Windows window object plus additional OLE-specific functionality, such as event firing and the ability to support methods and properties.

[CConnectionPoint](reference/cconnectionpoint-class.md)<br/>
The `CConnectionPoint` class defines a special type of interface used to communicate with other OLE objects, called a connection point. A connection point implements an outgoing interface that is able to initiate actions on other objects, such as firing events and change notifications.

[CPictureHolder](reference/cpictureholder-class.md)<br/>
Encapsulates the functionality of a Windows picture object and the `IPicture` COM interface; used to implement the custom Picture property of an OLE control.

[CFontHolder](reference/cfontholder-class.md)<br/>
Encapsulates the functionality of a Windows font object and the `IFont` COM interface; used to implement the stock Font property of an OLE control.

[COlePropertyPage](reference/colepropertypage-class.md)<br/>
Displays the properties of an OLE control in a graphical interface, similar to a dialog box.

[CPropExchange](reference/cpropexchange-class.md)<br/>
Supports the implementation of property persistence for your OLE controls. Analogous to [CDataExchange](reference/cdataexchange-class.md) for dialog boxes.

[CMonikerFile](reference/cmonikerfile-class.md)<br/>
Takes a moniker, or a string representation that it can make into a moniker, and binds it synchronously to the stream for which the moniker is a name.

[CAsyncMonikerFile](reference/casyncmonikerfile-class.md)<br/>
Works similarly to `CMonikerFile`; however, it binds the moniker asynchronously to the stream for which the moniker is a name.

[CDataPathProperty](reference/cdatapathproperty-class.md)<br/>
Implements an OLE control property that can be loaded asynchronously.

[CCachedDataPathProperty](reference/ccacheddatapathproperty-class.md)<br/>
Implements an OLE control property transferred asynchronously and cached in a memory file.

[COleCmdUI](reference/colecmdui-class.md)<br/>
Allows an Active document to receive commands that originate in its container's user interface (such as FileNew, Open, Print, and so on), and allows a container to receive commands that originate in the Active document's user interface.

[COleSafeArray](reference/colesafearray-class.md)<br/>
Works with arrays of arbitrary type and dimension.

## See also

[Class Overview](class-library-overview.md)
