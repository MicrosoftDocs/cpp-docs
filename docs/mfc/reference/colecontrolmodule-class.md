---
description: "Learn more about: COleControlModule Class"
title: "COleControlModule Class"
ms.date: "11/04/2016"
f1_keywords: ["OleControlModule"]
helpviewer_keywords: ["OLE control modules [MFC]", "MFC ActiveX controls [MFC], OLE control modules", "COleControlModule class [MFC]", "control modules [MFC]"]
ms.assetid: 0721724d-d4af-4eda-ad34-5a2b27810dd4
---
# COleControlModule Class

The base class from which you derive an OLE control module object.

## Syntax

```
class COleControlModule : public CWinApp
```

## Remarks

This class provides member functions for initializing your control module. Each OLE control module that uses the Microsoft Foundation classes can only contain one object derived from `COleControlModule`. This object is constructed when other C++ global objects are constructed. Declare your derived `COleControlModule` object at the global level.

For more information on using the `COleControlModule` class, see the [CWinApp](../../mfc/reference/cwinapp-class.md) class and the article [ActiveX Controls](../../mfc/mfc-activex-controls.md).

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWinThread](../../mfc/reference/cwinthread-class.md)

[CWinApp](../../mfc/reference/cwinapp-class.md)

`COleControlModule`

## Requirements

**Header:** afxctl.h

## See also

[MFC Sample TESTHELP](../../overview/visual-cpp-samples.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)
