---
description: "Learn more about: ATL_URL_SCHEME"
title: "ATL_URL_SCHEME enumeration"
ms.date: "11/04/2016"
helpviewer_keywords: ["ATLUTIL/ATL::ATL_URL_SCHEME"]
ms.assetid: f4131046-8ba0-4ec1-8209-84203f05d20e
---
# ATL_URL_SCHEME

The members of this enumeration provide constants for the schemes understood by [CUrl](curl-class.md).

## Syntax

```cpp
enum ATL_URL_SCHEME{
   ATL_URL_SCHEME_UNKNOWN = -1,
   ATL_URL_SCHEME_FTP     = 0,
   ATL_URL_SCHEME_GOPHER  = 1,
   ATL_URL_SCHEME_HTTP    = 2,
   ATL_URL_SCHEME_HTTPS   = 3,
   ATL_URL_SCHEME_FILE    = 4,
   ATL_URL_SCHEME_NEWS    = 5,
   ATL_URL_SCHEME_MAILTO  = 6,
   ATL_URL_SCHEME_SOCKS   = 7
};
```

## Requirements

**Header:** atlutil.h

## See also

[Concepts](../active-template-library-atl-concepts.md)<br/>
[CUrl::SetScheme](curl-class.md#setscheme)<br/>
[CUrl::GetScheme](curl-class.md#getscheme)
