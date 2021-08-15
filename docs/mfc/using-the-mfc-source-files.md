---
description: "Learn more about: Using the MFC source files"
title: "Using the MFC source files"
ms.date: "08/19/2019"
helpviewer_keywords: ["public members", "source files", "MFC, source files", "MFC source files", "comments, MFC", "private member access", "protected member access", "source files, MFC"]
ms.assetid: 3230e8fb-3b69-4ddf-9538-365ac7ea5e72
---
# Using the MFC source files

The Microsoft Foundation Class (MFC) Library supplies full source code. Header files (.h) are in the *\atlmfc\include* directory. Implementation files (.cpp) are in the *\atlmfc\src\mfc* directory.

This article explains the conventions that MFC uses to comment the various parts of each class, what these comments mean, and what you should expect to find in each section. The Visual Studio wizards use similar conventions for the classes that they create for you, and you'll probably find these conventions useful for your own code.

You might be familiar with the **`public`**, **`protected`**, and **`private`** C++ keywords. In the MFC header files, you'll find each class may have several of each of them. For example, public member variables and functions might be under more than one **`public`** keyword. It's because MFC separates member variables and functions based on their use, not by the type of access allowed. MFC uses **`private`** sparingly. Even items considered implementation details are often **`protected`**, and many times are **`public`**. Although access to the implementation details is discouraged, MFC leaves the decision to you.

In both the MFC source files and the header files that the MFC Application Wizard creates, you'll find comments like these ones within class declarations (usually in this order):

`// Constructors`

`// Attributes`

`// Operations`

`// Overridables`

`// Implementation`

## <a name="an-example-of-the-comments"></a> An example of the comments

The following partial listing of class `CStdioFile` uses most of the standard comments that MFC employs in its classes to divide class members by the ways they're used:

```cpp
/*============================================================================*/
// STDIO file implementation

class CStdioFile : public CFile
{
    DECLARE_DYNAMIC(CStdioFile)

public:
// Constructors
    CStdioFile();

    // . . .

// Attributes
    FILE* m_pStream;    // stdio FILE
                        // m_hFile from base class is _fileno(m_pStream)

// Operations
    // reading and writing strings
    virtual void WriteString(LPCTSTR lpsz);
    virtual LPTSTR ReadString(_Out_writes_z_(nMax) LPTSTR lpsz, _In_ UINT nMax);
    virtual BOOL ReadString(CString& rString);

// Implementation
public:
    virtual ~CStdioFile();
#ifdef _DEBUG
    void Dump(CDumpContext& dc) const;
#endif
    virtual ULONGLONG GetPosition() const;
    virtual ULONGLONG GetLength() const;
    virtual BOOL Open(LPCTSTR lpszFileName, UINT nOpenFlags, CFileException* pError = NULL);

    // . . .

protected:
    void CommonBaseInit(FILE* pOpenStream, CAtlTransactionManager* pTM);
    void CommonInit(LPCTSTR lpszFileName, UINT nOpenFlags, CAtlTransactionManager* pTM);
};
```

These comments consistently mark sections of the class declaration that contain similar kinds of class members. Keep in mind that they're MFC conventions, not set rules.

## // Constructors comment

The `// Constructors` section of an MFC class declaration declares constructors (in the C++ sense) and any initialization functions required to really use the object. For example, `CWnd::Create` is in the constructors section because before you use the `CWnd` object, it must be "fully constructed" by first calling the C++ constructor and then calling the `Create` function. Typically, these members are public.

For example, class `CStdioFile` has five constructors, one of which is shown in the listing under [An example of the comments](#an-example-of-the-comments).

## // Attributes comment

The `// Attributes` section of an MFC class declaration contains the public attributes (or properties) of the object. Typically the attributes are member variables, or Get/Set functions. The "Get" and "Set" functions may or may not be virtual. The "Get" functions are often **`const`**, because in most cases they don't have side effects. These members are normally public. Protected and private attributes are typically found in the implementation section.

In the sample listing from class `CStdioFile`, under [An example of the comments](#an-example-of-the-comments), the list includes one member variable, *m_pStream*. Class `CDC` lists nearly 20 members under this comment.

> [!NOTE]
> Large classes, such as `CDC` and `CWnd`, may have so many members that simply listing all the attributes in one group would not add much to clarity. In such cases, the class library uses other comments as headings to further delineate the members. For example, `CDC` uses `// Device-Context Functions`, `// Drawing Tool Functions`, `// Drawing Attribute Functions`, and more. Groups that represent attributes will follow the usual syntax described above. Many OLE classes have an implementation section called `// Interface Maps`.

## // Operations comment

The `// Operations` section of an MFC class declaration contains member functions that you can call on the object to make it do things or take actions (perform operations). These functions are typically non-**`const`** because they usually have side effects. They may be virtual or nonvirtual depending on the needs of the class. Typically, these members are public.

In the sample listing from class `CStdioFile`, in [An example of the comments](#an-example-of-the-comments), the list includes three member functions under this comment: `WriteString` and two overloads of `ReadString`.

As with attributes, operations can be further subdivided.

## // Overridables comment

The `// Overridables` section of an MFC class declaration contains virtual functions that you can override in a derived class when you need to modify the base class behavior. They're typically named starting with "On", although it's not strictly necessary. Functions here are designed to be overridden, and often implement or provide some sort of "callback" or "hook." Typically, these members are protected.

In MFC itself, pure virtual functions are always placed in this section. A pure virtual function in C++ takes the form:

`virtual void OnDraw( ) = 0;`

In the sample listing from class `CStdioFile`, in [An example of the comments](#an-example-of-the-comments), the list includes no overridables section. Class `CDocument`, on the other hand, lists approximately 10 overridable member functions.

In some classes, you may also see the comment `// Advanced Overridables`. These functions are ones that only advanced programmers should attempt to override. You'll probably never need to override them.

> [!NOTE]
> The conventions described in this article also work well, in general, for Automation (formerly known as OLE Automation) methods and properties. Automation methods are similar to MFC operations. Automation properties are similar to MFC attributes. Automation events (supported for ActiveX controls, formerly known as OLE controls) are similar to MFC overridable member functions.

## // Implementation comment

The `// Implementation` section is the most important part of any MFC class declaration.

This section houses all implementation details. Both member variables and member functions can appear in this section. Everything below this line could change in a future release of MFC. Unless you can't avoid it, you shouldn't rely on details below the `// Implementation` line. In addition, members declared below the implementation line are undocumented, although some implementation is discussed in technical notes. Overrides of virtual functions in the base class reside in this section, regardless of which section the base class function is defined in. When a function overrides the base class implementation, it's considered an implementation detail. Typically, these members are protected, but not always.

In the `CStdioFile` listing under [An example of the comments](#an-example-of-the-comments), members declared below the `// Implementation` comment may be declared as **`public`**, **`protected`**, or **`private`**. Only use these members with caution, because they may change in the future. Declaring a group of members as **`public`** may be necessary for the class library implementation to work correctly. However, it doesn't mean that you may safely use the members so declared.

> [!NOTE]
> You may find comments of the remaining types either above or below the `// Implementation` comment. In either case, they describe the kinds of members declared below them. If they occur below the `// Implementation` comment, you should assume that the members may change in future versions of MFC.

## See also

[General MFC Topics](../mfc/general-mfc-topics.md)
