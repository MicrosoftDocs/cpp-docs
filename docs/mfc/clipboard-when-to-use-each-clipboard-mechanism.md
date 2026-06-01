---
description: "Learn more about: Clipboard: When to Use Each Clipboard Mechanism"
title: "Clipboard: When to Use Each Clipboard Mechanism"
ms.date: "11/04/2016"
helpviewer_keywords: ["applications [OLE], Clipboard", "OLE Clipboard, guidelines", "Clipboard [MFC], mechanisms", "OLE Clipboard, formats", "formats [MFC], Clipboard for OLE", "Clipboard [MFC], formats"]
---
# Clipboard: When to Use Each Clipboard Mechanism

>[!NOTE]
> The Microsoft Foundation Classes (MFC) library continues to be supported. However, we're no longer adding features or updating the documentation.

Follow these guidelines in using the Clipboard:

- Use the OLE Clipboard mechanism now to enable new capabilities in the future. While the standard Clipboard API will be maintained, the OLE mechanism is the future of data transfer.

- Use the OLE Clipboard mechanism if you are writing an OLE application or you want any of the OLE features, such as drag and drop.

- Use the OLE Clipboard mechanism if you are providing OLE formats.

## What do you want to do

- [Use the OLE Clipboard mechanism](clipboard-using-the-ole-clipboard-mechanism.md)

- [Use the Windows Clipboard mechanism](clipboard-using-the-windows-clipboard.md)

## See also

[Clipboard](clipboard.md)
