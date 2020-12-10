---
description: "Learn more about: TN003: Mapping of Windows Handles to Objects"
title: "TN003: Mapping of Windows Handles to Objects"
ms.date: "11/04/2016"
f1_keywords: ["vc.mapping"]
helpviewer_keywords: ["TN003", "handle maps", "Windows handles to objects [MFC]", "mappings [MFC], Windows handles to objects"]
ms.assetid: fbea9f38-992c-4091-8dbc-f29e288617d6
---
# TN003: Mapping of Windows Handles to Objects

This note describes the MFC routines that support mapping Windows object handles to C++ objects.

## The Problem

Windows objects are typically represented by various [HANDLE](/windows/win32/WinProg/windows-data-types) objects The MFC classes wrap Windows object handles with C++ objects. The handle wrapping functions of the MFC class library let you find the C++ object that is wrapping the Windows object that has a particular handle. However, sometimes an object does not have a C++ wrapper object and at these times the system creates a temporary object to act as the C++ wrapper.

The Windows objects that use handle maps are as follows:

- HWND ([CWnd](../mfc/reference/cwnd-class.md) and `CWnd`-derived classes)

- HDC ([CDC](../mfc/reference/cdc-class.md) and `CDC`-derived classes)

- HMENU ([CMenu](../mfc/reference/cmenu-class.md))

- HPEN ([CGdiObject](../mfc/reference/cgdiobject-class.md))

- HBRUSH (`CGdiObject`)

- HFONT (`CGdiObject`)

- HBITMAP (`CGdiObject`)

- HPALETTE (`CGdiObject`)

- HRGN (`CGdiObject`)

- HIMAGELIST ([CImageList](../mfc/reference/cimagelist-class.md))

- SOCKET ([CSocket](../mfc/reference/csocket-class.md))

Given a handle to any one of these objects, you can find the MFC object that wraps the handle by calling the static method `FromHandle`. For example, given an HWND called *hWnd*, the following line will return a pointer to the `CWnd` that wraps *hWnd*:

```
CWnd::FromHandle(hWnd)
```

If *hWnd* does not have a specific wrapper object, a temporary `CWnd` is created to wrap *hWnd*. This makes it possible to obtain a valid C++ object from any handle.

After you have a wrapper object, you can retrieve its handle from a public member variable of the wrapper class. In the case of a `CWnd`, *m_hWnd* contains the HWND for that object.

## Attaching Handles to MFC Objects

Given a newly created handle-wrapper object and a handle to a Windows object, you can associate the two by calling the `Attach` function as in this example:

```
CWnd myWnd;
myWnd.Attach(hWnd);
```

This makes an entry in the permanent map associating *myWnd* and *hWnd*. Calling `CWnd::FromHandle(hWnd)` will now return a pointer to *myWnd*. When *myWnd* is deleted, the destructor will automatically destroy *hWnd* by calling the Windows [DestroyWindow](/windows/win32/api/winuser/nf-winuser-destroywindow) function. If this is not desired, *hWnd* must be detached from *myWnd* before *myWnd* is destroyed (normally when leaving the scope at which *myWnd* was defined). The `Detach` method does this.

```
myWnd.Detach();
```

## More About Temporary Objects

Temporary objects are created whenever `FromHandle` is given a handle that does not already have a wrapper object. These temporary objects are detached from their handle and deleted by the `DeleteTempMap` functions. By default [CWinThread::OnIdle](../mfc/reference/cwinthread-class.md#onidle) automatically calls `DeleteTempMap` for each class that supports temporary handle maps. This means that you cannot assume a pointer to a temporary object will be valid past the point of exit from the function where the pointer was obtained.

## Wrapper Objects and Multiple Threads

Both temporary and permanent objects are maintained on a per-thread basis. That is, one thread cannot access another thread's C++ wrapper objects, regardless of whether it is temporary or permanent.

To pass these objects from one thread to another, always send them as their native `HANDLE` type. Passing a C++ wrapper object from one thread to another will often cause unexpected results.

## See also

[Technical Notes by Number](../mfc/technical-notes-by-number.md)<br/>
[Technical Notes by Category](../mfc/technical-notes-by-category.md)
