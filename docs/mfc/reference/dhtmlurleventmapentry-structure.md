---
description: "Learn more about: DHtmlUrlEventMapEntry Structure"
title: "DHtmlUrlEventMapEntry Structure"
ms.date: "11/04/2016"
f1_keywords: ["DHtmlUrlEventMapEntry"]
helpviewer_keywords: ["DHtmlUrlEventMapEntry structure [MFC]"]
ms.assetid: 43117c1f-1a51-406c-aa2f-fea647080049
---
# DHtmlUrlEventMapEntry Structure

The `DHtmlUrlEventMapEntry` structure provides multi-URL event map support.

## Syntax

```
struct DHtmlUrlEventMapEntry
{
LPCTSTR szUrl;
const DHtmlEventMapEntry *pEventMap;
};
```

#### Parameters

*szUrl*<br/>
The URL.

*pEventMap*<br/>
The event map associated with the URL.

## Requirements

**Header:** afxdhtml.h

## See also

[Structures, Styles, Callbacks, and Message Maps](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)
