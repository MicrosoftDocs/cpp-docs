---
description: "Learn more about: TN016: Using C++ Multiple Inheritance with MFC"
title: "TN016: Using C++ Multiple Inheritance with MFC"
ms.date: "06/28/2018"
f1_keywords: ["vc.inheritance"]
helpviewer_keywords: ["TN016", "MI (Multiple Inheritance)", "multiple inheritance, MFC support for"]
ms.assetid: 4ee27ae1-1410-43a5-b111-b6af9b84535d
---
# TN016: Using C++ Multiple Inheritance with MFC

This note describes how to use multiple inheritance (MI) with the Microsoft Foundation Classes. The use of MI is not required with MFC. MI is not used in any MFC classes and is not required to write a class library.

The following subtopics describe how MI affects the use of common MFC idioms as well as covering some of the restrictions of MI. Some of these restrictions are general C++ restrictions. Others are imposed by the MFC architecture.

At the end of this technical note you will find a complete MFC application that uses MI.

## CRuntimeClass

The persistence and dynamic object creation mechanisms of MFC use the [CRuntimeClass](../mfc/reference/cruntimeclass-structure.md) data structure to uniquely identify classes. MFC associates one of these structures with each dynamic and/or serializable class in your application. These structures are initialized when the application starts by using a special static object of type `AFX_CLASSINIT`.

The current implementation of `CRuntimeClass` does not support MI runtime type information. This does not mean you cannot use MI in your MFC application. However, you will have certain responsibilities when you work with objects that have more than one base class.

The [CObject::IsKindOf](../mfc/reference/cobject-class.md#iskindof) method will not correctly determine the type of an object if it has multiple base classes. Therefore, you cannot use [CObject](../mfc/reference/cobject-class.md) as a virtual base class, and all calls to `CObject` member functions such as [CObject::Serialize](../mfc/reference/cobject-class.md#serialize) and [CObject::operator new](../mfc/reference/cobject-class.md#operator_new) must have scope qualifiers so that C++ can disambiguate the appropriate function call. When a program uses MI within MFC, the class that contains the `CObject` base class needs to be the left-most class in the list of base classes.

An alternative is to use the **`dynamic_cast`** operator. Casting an object with MI to one of its base classes will force the compiler to use the functions in the supplied base class. For more information, see [dynamic_cast Operator](../cpp/dynamic-cast-operator.md).

## CObject - The Root of all Classes

All significant classes derive directly or indirectly from class `CObject`. `CObject` does not have any member data, but it does have some default functionality. When you use MI, you will typically inherit from two or more `CObject`-derived classes. The following example illustrates how a class can inherit from a [CFrameWnd](../mfc/reference/cframewnd-class.md) and a [CObList](../mfc/reference/coblist-class.md):

```cpp
class CListWnd : public CFrameWnd, public CObList
{
    // ...
};
CListWnd myListWnd;
```

In this case `CObject` is included two times. This means that you need a way to disambiguate any reference to `CObject` methods or operators. The **operator new** and [operator delete](../mfc/reference/cobject-class.md#operator_delete) are two operators that must be disambiguated. As another example, the following code causes an error at compile time:

```cpp
myListWnd.Dump(afxDump); // compile time error, CFrameWnd::Dump or CObList::Dump
```

## Reimplementing CObject Methods

When you create a new class that has two or more `CObject` derived base classes, you should reimplement the `CObject` methods that you want other people to use. Operators **`new`** and **`delete`** are mandatory and [Dump](../mfc/reference/cobject-class.md#dump) is recommended. The following example reimplements the **`new`** and **`delete`** operators and the `Dump` method:

```cpp
class CListWnd : public CFrameWnd, public CObList
{
public:
    void* operator new(size_t nSize)
    {
        return CFrameWnd:: operator new(nSize);
    }
    void operator delete(void* p)
    {
        CFrameWnd:: operator delete(p);
    }
    void Dump(CDumpContent& dc)
    {
        CFrameWnd::Dump(dc);
        CObList::Dump(dc);
    }
    // ...
};
```

## Virtual Inheritance of CObject

It might seem that virtually inheriting `CObject` would solve the problem of function ambiguity, but that is not the case. Because there is no member data in `CObject`, you do not need virtual inheritance to prevent multiple copies of a base class member data. In the first example that was shown earlier, the `Dump` virtual method is still ambiguous because it is implemented differently in `CFrameWnd` and `CObList`. The best way to remove ambiguity is to follow the recommendations presented in the previous section.

## CObject::IsKindOf and Run-Time Typing

The run-time typing mechanism supported by MFC in `CObject` uses the macros DECLARE_DYNAMIC, IMPLEMENT_DYNAMIC, DECLARE_DYNCREATE, IMPLEMENT_DYNCREATE, DECLARE_SERIAL and IMPLEMENT_SERIAL. These macros can perform a run-time type check to guarantee safe downcasts.

These macros support only a single base class and will work in a limited way for multiply inherited classes. The base class you specify in IMPLEMENT_DYNAMIC or IMPLEMENT_SERIAL should be the first (or left-most) base class. This placement will enable you to do type checking for the left-most base class only. The run-time type system will know nothing about additional base classes. In the following example, the run-time systems will do type checking against `CFrameWnd`, but will know nothing about `CObList`.

```cpp
class CListWnd : public CFrameWnd, public CObList
{
    DECLARE_DYNAMIC(CListWnd)
    // ...
};
IMPLEMENT_DYNAMIC(CListWnd, CFrameWnd)
```

## CWnd and Message Maps

For the MFC message map system to work correctly, there are two additional requirements:

- There must be only one `CWnd`-derived base class.

- The `CWnd`-derived base class must be the first (or left-most) base class.

Here are some examples that will not work:

```cpp
class CTwoWindows : public CFrameWnd, public CEdit
{ /* ... */ }; // error : two copies of CWnd

class CListEdit : public CObList, public CEdit
{ /* ... */ }; // error : CEdit (derived from CWnd) must be first
```

## A Sample Program using MI

The following sample is a stand-alone application that consists of one class derived from `CFrameWnd` and [CWinApp](../mfc/reference/cwinapp-class.md). We do not recommend that you structure an application in this manner, but this is an example of the smallest MFC application that has one class.

```cpp
#include <afxwin.h>

class CHelloAppAndFrame : public CFrameWnd, public CWinApp
{
public:
    CHelloAppAndFrame() {}

    // Necessary because of MI disambiguity
    void* operator new(size_t nSize)
        { return CFrameWnd::operator new(nSize); }
    void operator delete(void* p)
        { CFrameWnd::operator delete(p); }

    // Implementation
    // CWinApp overrides
    virtual BOOL InitInstance();
    // CFrameWnd overrides
    virtual void PostNcDestroy();
    afx_msg void OnPaint();

    DECLARE_MESSAGE_MAP()
};

BEGIN_MESSAGE_MAP(CHelloAppAndFrame, CFrameWnd)
    ON_WM_PAINT()
END_MESSAGE_MAP()

// because the frame window is not allocated on the heap, we must
// override PostNCDestroy not to delete the frame object
void CHelloAppAndFrame::PostNcDestroy()
{
    // do nothing (do not call base class)
}

void CHelloAppAndFrame::OnPaint()
{
    CPaintDC dc(this);
    CRect rect;
    GetClientRect(rect);

    CString s = "Hello, Windows!";
    dc.SetTextAlign(TA_BASELINE | TA_CENTER);
    dc.SetTextColor(::GetSysColor(COLOR_WINDOWTEXT));
    dc.SetBkMode(TRANSPARENT);
    dc.TextOut(rect.right / 2, rect.bottom / 2, s);
}

// Application initialization
BOOL CHelloAppAndFrame::InitInstance()
{
    // first create the main frame
    if (!CFrameWnd::Create(NULL, "Multiple Inheritance Sample",
        WS_OVERLAPPEDWINDOW, rectDefault))
        return FALSE;

    // the application object is also a frame window
    m_pMainWnd = this;
    ShowWindow(m_nCmdShow);
    return TRUE;
}

CHelloAppAndFrame theHelloAppAndFrame;
```

## See also

[Technical Notes by Number](../mfc/technical-notes-by-number.md)<br/>
[Technical Notes by Category](../mfc/technical-notes-by-category.md)
