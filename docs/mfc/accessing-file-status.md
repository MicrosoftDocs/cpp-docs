---
description: "Learn more about: Accessing File Status"
title: "Accessing File Status"
ms.date: "11/04/2016"
helpviewer_keywords: ["files [MFC], status information", "examples [MFC], file status", "files [MFC], accessing", "file status [MFC]", "status of files [MFC]"]
ms.assetid: 1b8891d6-eb0f-4037-a837-4928fe595222
---
# Accessing File Status

`CFile` also supports getting file status, including whether the file exists, creation and modification dates and times, logical size, and path.

### To get file status

1. Use the [CFile](reference/cfile-class.md) class to get and set information about a file. One useful application is to use the `CFile` static member function **GetStatus** to determine if a file exists. **GetStatus** returns 0 if the specified file does not exist.

Thus, you could use the result of **GetStatus** to determine whether to use the **CFile::modeCreate** flag when opening a file, as shown by the following example:

[!code-cpp[NVC_MFCFiles#3](../atl-mfc-shared/reference/codesnippet/cpp/accessing-file-status_1.cpp)]

For related information, see [Serialization](serialization-in-mfc.md).

## See also

[Files](files-in-mfc.md)
