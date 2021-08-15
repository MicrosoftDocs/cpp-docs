---
description: "Learn more about: Closing Files"
title: "Closing Files"
ms.date: "11/04/2016"
helpviewer_keywords: ["MFC, file operations", "files [MFC], closing"]
ms.assetid: 8415a3a8-3c75-45b0-ac2a-d5385f49bdb3
---
# Closing Files

As usual in I/O operations, once you finish with a file, you must close it.

#### To close a file

1. Use the **Close** member function. This function closes the file-system file and flushes buffers if necessary.

If you allocated the [CFile](reference/cfile-class.md) object on the frame (as in the example shown in [Opening Files](opening-files.md)), the object will automatically be closed and then destroyed when it goes out of scope. Note that deleting the `CFile` object does not delete the physical file in the file system.

## See also

[Files](files-in-mfc.md)
