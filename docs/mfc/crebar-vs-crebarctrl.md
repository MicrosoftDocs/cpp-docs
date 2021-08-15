---
description: "Learn more about: CReBar vs. CReBarCtrl"
title: "CReBar vs. CReBarCtrl"
ms.date: "11/04/2016"
helpviewer_keywords: ["CReBar class [MFC], vs. CReBarCtrl", "rebar controls [MFC], CReBarCtrl class [MFC]", "GetReBarCtrl class [MFC]"]
ms.assetid: 7f9c1d7e-5d5f-4956-843c-69ed3df688d0
---
# CReBar vs. CReBarCtrl

MFC provides two classes to create rebars: [CReBar](reference/crebar-class.md) and [CReBarCtrl](reference/crebarctrl-class.md) (which wraps the Windows common control API). `CReBar` provides all of the functionality of the rebar common control, and it handles many of the required common control settings and structures for you.

`CReBarCtrl` is a wrapper class for the Win32 rebar control, and therefore may be easier to implement if you do not intend to integrate the rebar into the MFC architecture. If you plan to use `CReBarCtrl` and integrate the rebar into the MFC architecture, you must take additional care to communicate rebar control manipulations to MFC. This communication is not difficult; however, it is additional work that is unneeded when you use `CReBar`.

Visual C++ provides two ways to take advantage of the rebar common control.

- Create the rebar using `CReBar`, and then call [CReBar::GetReBarCtrl](reference/crebar-class.md#getrebarctrl) to get access to the `CReBarCtrl` member functions.

    > [!NOTE]
    >  `CReBar::GetReBarCtrl` is an inline member function that casts the **`this`** pointer of the rebar object. This means that, at run time, the function call has no overhead.

- Create the rebar using [CReBarCtrl](reference/crebarctrl-class.md)'s constructor.

Either method will give you access to the member functions of the rebar control. When you call `CReBar::GetReBarCtrl`, it returns a reference to a `CReBarCtrl` object so you can use either set of member functions. See [CReBar](reference/crebar-class.md) for information on constructing and creating a rebar using `CReBar`.

## See also

[Using CReBarCtrl](using-crebarctrl.md)<br/>
[Controls](controls-mfc.md)
