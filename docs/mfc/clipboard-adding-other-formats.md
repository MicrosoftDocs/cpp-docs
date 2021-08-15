---
description: "Learn more about: Clipboard: Adding Other Formats"
title: "Clipboard: Adding Other Formats"
ms.date: "11/04/2016"
helpviewer_keywords: ["formats [MFC], Clipboard", "Clipboard, formats", "custom formats, placing on Clipboard", "custom formats", "registering custom Clipboard data formats", "custom Clipboard data formats"]
ms.assetid: aea58159-65ed-4385-aeaa-3d9d5281903b
---
# Clipboard: Adding Other Formats

This topic explains how to expand the list of supported formats, particularly for OLE support. The topic [Clipboard: Copying and Pasting Data](clipboard-copying-and-pasting-data.md) describes the minimum implementation necessary to support copying and pasting from the Clipboard. If this is all you implement, the only formats placed on the Clipboard are **CF_METAFILEPICT**, **CF_EMBEDSOURCE**, **CF_OBJECTDESCRIPTOR**, and possibly **CF_LINKSOURCE**. Most applications will need more formats on the Clipboard than these three.

## <a name="_core_registering_custom_formats"></a> Registering Custom Formats

To create your own custom formats, follow the same procedure you would use when registering any custom Clipboard format: pass the name of the format to the **RegisterClipboardFormat** function and use its return value as the format ID.

## <a name="_core_placing_formats_on_the_clipboard"></a> Placing Formats on the Clipboard

To add more formats to those placed on the Clipboard, you must override the `OnGetClipboardData` function in the class you derived from either `COleClientItem` or `COleServerItem` (depending on whether the data to be copied is native). In this function, you should use the following procedure.

#### To place formats on the Clipboard

1. Create a `COleDataSource` object.

1. Pass this data source to a function that adds your native data formats to the list of supported formats by calling `COleDataSource::CacheGlobalData`.

1. Add standard formats by calling `COleDataSource::CacheGlobalData` for each standard format you want to support.

This technique is used in the MFC OLE sample program [HIERSVR](../overview/visual-cpp-samples.md) (examine the `OnGetClipboardData` member function of the **CServerItem** class). The only difference in this sample is that step three is not implemented because HIERSVR supports no other standard formats.

### What do you want to know more about

- [OLE data objects and data sources and uniform data transfer](data-objects-and-data-sources-ole.md)

- [OLE drag and drop](drag-and-drop-ole.md)

- [OLE](ole-background.md)

## See also

[Clipboard: Using the OLE Clipboard Mechanism](clipboard-using-the-ole-clipboard-mechanism.md)
