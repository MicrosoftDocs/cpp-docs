---
description: "Learn more about: Activation: Verbs"
title: "Activation: Verbs"
ms.date: "11/04/2016"
helpviewer_keywords: ["verbs [MFC]", "OLE [MFC], activation", "edit verb [MFC]", "activation [MFC], verbs", "OLE [MFC], editing", "Primary verb [MFC]", "OLE activation {MFC]"]
ms.assetid: eb56ff23-1de8-43ad-abeb-dc7346ba7b70
---
# Activation: Verbs

This article explains the role primary and secondary verbs play in OLE [activation](activation-cpp.md).

Usually, double-clicking an embedded item allows the user to edit it. However, certain items do not behave this way. For example, double-clicking an item created with the Sound Recorder application does not open the server in a separate window; instead, it plays the sound.

The reason for this behavior difference is that Sound Recorder items have a different "primary verb." The primary verb is the action performed when the user double-clicks an OLE item. For most types of OLE items, the primary verb is Edit, which launches the server that created the item. For some types of items, such as Sound Recorder items, the primary verb is Play.

Many types of OLE items support only one verb, and Edit is the most common one. However, some types of items support multiple verbs. For example, Sound Recorder items support Edit as a secondary verb.

Another verb used frequently is Open. The Open verb is identical to Edit, except the server application is launched in a separate window. This verb should be used when either the container application or the server application does not support in-place activation.

Any verbs other than the primary verb must be invoked through a submenu command when the item is selected. This submenu contains all the verbs supported by the item and is usually reached by the *typename* **Object** command on the **Edit** menu. For information on the *typename* **Object** command, see the article [Menus and Resources: Container Additions](menus-and-resources-container-additions.md).

The verbs a server application supports are listed in the Windows registration database. If your server application is written with the Microsoft Foundation Class Library, it will automatically register all verbs when the server is started. If not, you should register them during the server application's initialization phase. For more information, see the article [Registration](registration.md).

## See also

[Activation](activation-cpp.md)<br/>
[Containers](containers.md)<br/>
[Servers](servers.md)
