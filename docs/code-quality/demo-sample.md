---
title: Sample C++ project for code analysis
description: "How to create a sample solution for use in the code analysis walkthrough for Microsoft C++ in Visual Studio."
ms.date: 04/14/2020
ms.topic: sample
helpviewer_keywords:
  - "demo sample [Visual Studio ALM]"
  - "code analysis, samples"
ms.assetid: 09e1b9f7-5916-4ed6-a001-5c2d7e710682
---
# Sample C++ project for code analysis

The following procedures show you how to create the sample for [Walkthrough: Analyze C/C++ code for defects](../code-quality/walkthrough-analyzing-c-cpp-code-for-defects.md). The procedures create:

- A Visual Studio solution named *CppDemo*.

- A static library project named *CodeDefects*.

- A static library project named *Annotations*.

The procedures also provide the code for the header and *.cpp* files for the static libraries.

## Create the CppDemo solution and the CodeDefects project

::: moniker range=">=msvc-160"

1. Open Visual Studio and select **Create a new project**

1. In the **Create a new project** dialog, change the language filter to **C++**.

1. Select **Windows Desktop Wizard** and choose the **Next** button.

1. On the **Configure your new project** page, in the **Project name** text box, enter *CodeDefects*.

1. In the **Solution name** text box, enter *CppDemo*.

1. Choose **Create**.

1. In the **Windows Desktop Project** dialog, change the **Application type** to **Static Library (.lib)**.

1. Under **Additional options**, select **Empty project**.

1. Choose **OK** to create the solution and project.

::: moniker-end

::: moniker range="msvc-150"

1. Open Visual Studio. On the menu bar, choose **File** > **New** > **Project**.

1. In the **New Project** dialog, select **Visual C++** > **Windows Desktop**.

1. Select **Windows Desktop Wizard**.

1. In the **Name** text box, enter *CodeDefects*.

1. In the **Solution name** text box, enter *CppDemo*.

1. Choose **OK**.

1. In the **Windows Desktop Project** dialog, change the **Application type** to **Static Library (.lib)**.

1. Under **Additional options**, select **Empty project**.

1. Choose **OK** to create the solution and project.

::: moniker-end

::: moniker range="msvc-140"

1. Open Visual Studio. On the menu bar, choose **File** > **New** > **Project**.

1. In the **New Project** dialog, select **Templates** > **Visual C++** > **Win32**.

1. Select **Win32 Console Application**.

1. In the **Name** text box, enter *CodeDefects*.

1. In the **Solution name** text box, enter *CppDemo*.

1. Choose **OK**.

1. In the **Win32 Application Wizard** dialog, choose the **Next** button.

1. Change the **Application type** to **Static library**.

1. Under **Additional options**, unselect **Precompiled header**.

1. Choose **Finish** to create the solution and project.

::: moniker-end

## Add the header and source file to the CodeDefects project

1. In Solution Explorer, expand **CodeDefects**.

1. Right-click to open the context menu for **Header Files**. Choose **Add** > **New Item**.

1. In the **Add New Item** dialog box, select **Visual C++** > **Code**, and then select **Header File (.h)**.

1. In the **Name** edit box, enter *Bug.h*, and then choose the **Add** button.

1. In the edit window for *Bug.h*, select and delete the contents.

1. Copy the following code and paste it into the *Bug.h* file in the editor.

    ```cpp
    #pragma once

    #include <windows.h>

    // Function prototypes
    bool CheckDomain(wchar_t const *);
    HRESULT ReadUserAccount();

    // These constants define the common sizes of the
    // user account information throughout the program
    const int USER_ACCOUNT_LEN = 256;
    const int ACCOUNT_DOMAIN_LEN = 128;
    ```

1. In Solution Explorer, right-click to open the context menu for **Source Files**. Choose **Add** > **New Item**.

1. In the **Add New Item** dialog box, select **C++ File (.cpp)**.

1. In the **Name** edit box, enter *Bug.cpp*, and then choose the **Add** button.

1. Copy the following code and paste it into the *Bug.cpp* file in the editor.

    ```cpp
    #include "Bug.h"

    // the user account
    wchar_t g_userAccount[USER_ACCOUNT_LEN] = { L"domain\\user" };
    int len = 0;

    bool CheckDomain(wchar_t const* domain)
    {
        return (wcsnlen_s(domain, USER_ACCOUNT_LEN) > 0);
    }

    HRESULT ReadUserAccount()
    {
        return S_OK;
    }

    bool ProcessDomain()
    {
        wchar_t* domain = new wchar_t[ACCOUNT_DOMAIN_LEN];
        // ReadUserAccount gets a 'domain\user' input from
        //the user into the global 'g_userAccount'
        if (ReadUserAccount())
        {
            // Copies part of the string prior to the '\'
            // character onto the 'domain' buffer
            for (len = 0; (len < ACCOUNT_DOMAIN_LEN) && (g_userAccount[len] != L'\0'); len++)
            {
                if (g_userAccount[len] == L'\\')
                {
                    // Stops copying on the domain and user separator ('\')
                    break;
                }
                domain[len] = g_userAccount[len];
            }
            if ((len = ACCOUNT_DOMAIN_LEN) || (g_userAccount[len] != L'\\'))
            {
                // '\' was not found. Invalid domain\user string.
                delete[] domain;
                return false;
            }
            else
            {
                domain[len] = L'\0';
            }
            // Process domain string
            bool result = CheckDomain(domain);

            delete[] domain;
            return result;
        }
        return false;
    }

    int path_dependent(int n)
    {
        int i;
        int j;
        if (n == 0)
            i = 1;
        else
            j = 1;
        return i + j;
    }
    ```

1. On the menu bar, choose **File** > **Save All**.

## Add the Annotations project and configure it as a static library

::: moniker range=">=msvc-160"

1. In Solution Explorer, right-click **CppDemo** to open the context menu. Choose **Add** > **New Project**.

1. In the **Add a new project** dialog box, select **Windows Desktop Wizard**, and then choose the **Next** button.

1. On the **Configure your new project** page, in the **Project name** text box, enter *Annotations*, and then choose **Create**.

1. In the **Windows Desktop Project** dialog, change the **Application type** to **Static Library (.lib)**.

1. Under **Additional options**, select **Empty project**.

1. Choose **OK** to create the project.

::: moniker-end

::: moniker range="msvc-150"

1. In Solution Explorer, right-click **CppDemo** to open the context menu. Choose **Add** > **New Project**.

1. In the **Add New Project** dialog, select **Visual C++** > **Windows Desktop**.

1. Select **Windows Desktop Wizard**.

1. In the **Name** text box, enter *Annotations*, and then choose **OK**.

1. In the **Windows Desktop Project** dialog, change the **Application type** to **Static Library (.lib)**.

1. Under **Additional options**, select **Empty project**.

1. Choose **OK** to create the project.

::: moniker-end

::: moniker range="msvc-140"

1. In Solution Explorer, right-click **CppDemo** to open the context menu. Choose **Add** > **New Project**.

1. In the **Add New Project** dialog, select **Visual C++** > **Win32**.

1. Select **Win32 Console Application**.

1. In the **Name** text box, enter *Annotations*.

1. Choose **OK**.

1. In the **Win32 Application Wizard** dialog, choose the **Next** button.

1. Change the **Application type** to **Static library**.

1. Under **Additional options**, unselect **Precompiled header**.

1. Choose **Finish** to create the project.

::: moniker-end

## Add the header file and source file to the Annotations project

1. In Solution Explorer, expand **Annotations**.

1. Right-click to open the context menu for **Header Files** under **Annotations**. Choose **Add** > **New Item**.

1. In the **Add New Item** dialog box, select **Visual C++** > **Code**, and then select **Header File (.h)**.

1. In the **Name** edit box, enter *annotations.h*, and then choose the **Add** button.

1. In the edit window for *annotations.h*, select and delete the contents.

1. Copy the following code and paste it into the *annotations.h* file in the editor.

    ```cpp
    #pragma once
    #include <sal.h>

    struct LinkedList
    {
        struct LinkedList* next;
        int data;
    };

    typedef struct LinkedList LinkedList;

    _Ret_maybenull_ LinkedList* AllocateNode();
    ```

1. In Solution Explorer, right-click to open the context menu for **Source Files** under **Annotations**. Choose **Add** > **New Item**.

1. In the **Add New Item** dialog box, select **C++ File (.cpp)**.

1. In the **Name** edit box, enter *annotations.cpp*, and then choose the **Add** button.

1. Copy the following code and paste it into the *annotations.cpp* file in the editor.

    ```cpp
    #include "annotations.h"
    #include <malloc.h>

    _Ret_maybenull_ LinkedList* AllocateNode()
    {
        LinkedList* result = static_cast<LinkedList*>(malloc(sizeof(LinkedList)));
        return result;
    }

    LinkedList* AddTail(LinkedList* node, int value)
    {
        // finds the last node
        while (node->next != nullptr)
        {
            node = node->next;
        }

        // appends the new node
        LinkedList* newNode = AllocateNode();
        newNode->data = value;
        newNode->next = 0;
        node->next = newNode;

        return newNode;
    }
    ```

1. On the menu bar, choose **File** > **Save All**.

The solution is now complete and should build without errors.

::: moniker range="msvc-150"

> [!NOTE]
> In Visual Studio 2017, you may see a spurious warning `E1097 unknown attribute "no_init_all"` in the IntelliSense engine. You can safely ignore this warning.

::: moniker-end
