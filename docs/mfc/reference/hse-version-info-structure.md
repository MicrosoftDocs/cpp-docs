---
description: "Learn more about: HSE_VERSION_INFO Structure"
title: "HSE_VERSION_INFO Structure"
ms.date: "11/04/2016"
f1_keywords: ["HSE_VERSION_INFO"]
helpviewer_keywords: ["HSE_VERSION_INFO structure [MFC]"]
ms.assetid: 4837312d-68c8-4d05-9afa-1934d7d49b20
---
# HSE_VERSION_INFO Structure

This structure is pointed to by the *pVer* parameter in the `CHttpServer::GetExtensionVersion` member function. It provides the ISA version number and a text description of the ISA.

## Syntax

```
typedef struct _HSE_VERSION_INFO {
    DWORD dwExtensionVersion;
    CHAR lpszExtensionDesc[HSE_MAX_EXT_DLL_NAME_LEN];
} HSE_VERSION_INFO, *LPHSE_VERSION_INFO;
```

#### Parameters

*dwExtensionVersion*<br/>
The version number of the ISA.

*lpszExtensionDesc*<br/>
The text description of the ISA. The default implementation provides placeholder text; override `CHttpServer::GetExtensionVersion` to provide your own description.

## Requirements

**Header:** httpext.h

## See also

[Structures, Styles, Callbacks, and Message Maps](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)
