---
description: "Learn more about: CWinTraitsOR Class"
title: "CWinTraitsOR Class"
ms.date: "11/04/2016"
f1_keywords: ["CWinTraitsOR", "ATLWIN/ATL::CWinTraitsOR", "ATLWIN/ATL::CWinTraitsOR::GetWndExStyle", "ATLWIN/ATL::CWinTraitsOR::GetWndStyle"]
helpviewer_keywords: ["CWinTraitsOR class", "window styles, default values for ATL"]
ms.assetid: 1eb7b1e8-a9bd-411b-a30a-35a8a10af989
---
# CWinTraitsOR Class

This class provides a method for standardizing the styles used when creating a window object.

> [!IMPORTANT]
> This class and its members cannot be used in applications that execute in the Windows Runtime.

## Syntax

```
template <DWORD t_dwStyle = 0,
          DWORD t_dwExStyle = 0,
          class TWinTraits = CControlWinTraits>
class CWinTraitsOR
```

#### Parameters

*t_dwStyle*<br/>
Default window styles.

*t_dwExStyle*<br/>
Default extended window styles.

## Members

### Public Methods

|Name|Description|
|----------|-----------------|
|[CWinTraitsOR::GetWndExStyle](#getwndexstyle)|Retrieves the extended styles for the `CWinTraitsOR` object.|
|[CWinTraitsOR::GetWndStyle](#getwndstyle)|Retrieves the standard styles for the `CWinTraitsOR` object.|

## Remarks

This [window traits](../../atl/understanding-window-traits.md) class provides a simple method for standardizing the styles used for the creation of an ATL window object. Use a specialization of this class as a template parameter to [CWindowImpl](../../atl/reference/cwindowimpl-class.md) or another of ATL's window classes to specify the minimum set of standard and extended styles to be used for instances of that window class.

Use a specialization of this template if you want to ensure that certain styles are set for all instances of the window class while permitting other styles to be set on a per-instance basis in the call to [CWindowImpl::Create](../../atl/reference/cwindowimpl-class.md#create).

If you want to provide default window styles that will be used only when no other styles are specified in the call to `CWindowImpl::Create`, use [CWinTraits](../../atl/reference/cwintraits-class.md) instead.

## Requirements

**Header:** atlwin.h

## <a name="getwndstyle"></a> CWinTraitsOR::GetWndStyle

Call this function to retrieve a combination (using the logical OR operator) of the standard styles of the `CWinTraits` object and the default styles specified by *t_dwStyle*.

```
static DWORD GetWndStyle(DWORD dwStyle);
```

### Parameters

*dwStyle*<br/>
Styles used for creation of a window.

### Return Value

A combination of styles that are passed in *dwStyle* and the default ones specified by `t_dwStyle`, using the logical OR operator.

## <a name="getwndexstyle"></a> CWinTraitsOR::GetWndExStyle

Call this function to retrieve a combination (using the logical OR operator) of the extended styles of the `CWinTraits` object and the default styles specified by `t_dwStyle`.

```
static DWORD GetWndExStyle(DWORD dwExStyle);
```

### Parameters

*dwExStyle*<br/>
Extended styles used for creation of a window.

### Return Value

A combination of extended styles that are passed in *dwExStyle* and default ones specified by `t_dwExStyle`, using the logical OR operator

## See also

[Class Overview](../../atl/atl-class-overview.md)<br/>
[Understanding Window Traits](../../atl/understanding-window-traits.md)
