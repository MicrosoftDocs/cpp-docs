---
description: "Learn more about: Trackers"
title: "Trackers"
ms.date: "11/04/2016"
helpviewer_keywords: ["trackers [MFC]", "OLE applications [MFC], trackers", "applications [OLE], trackers", "tracking OLE items [MFC]", "OLE containers [MFC], trackers", "CDC class [MFC], trackers", "CRectTracker class [MFC], implementing trackers", "OLE server applications [MFC], trackers"]
ms.assetid: dcd09399-6637-4621-80e5-d12670429787
---
# Trackers

The [CRectTracker](../mfc/reference/crecttracker-class.md) class provides a user interface between rectangular items in your application and your user by providing a variety of display styles. These styles include solid, hatched, or dashed borders; a hatched pattern that covers the item; and resize handles that can be located on the outside or inside of a border. Trackers are often used in conjunction with OLE items, that is, objects derived from `COleClientItem`. The tracker rectangles give visual cues on the current status of the item.

The MFC OLE sample [OCLIENT](../overview/visual-cpp-samples.md) demonstrates a common interface using trackers and OLE client items from the viewpoint of a container application. For a demonstration of the different styles and abilities of a tracker object, see the MFC general sample [TRACKER](../overview/visual-cpp-samples.md).

For more information on implementing trackers in your OLE application, see [Trackers: Implementing Trackers in Your OLE Application](../mfc/trackers-implementing-trackers-in-your-ole-application.md)

## See also

[OLE](../mfc/ole-in-mfc.md)<br/>
[COleClientItem Class](../mfc/reference/coleclientitem-class.md)
