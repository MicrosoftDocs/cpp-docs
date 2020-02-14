---
title: Sample C++ project for code analysis
ms.date: 11/04/2016
ms.topic: sample
helpviewer_keywords:
  - "demo sample [Visual Studio ALM]"
  - "code analysis, samples"
ms.assetid: 09e1b9f7-5916-4ed6-a001-5c2d7e710682
---
# Sample C++ project for code analysis

This following procedures show you how to create the sample for [Walkthrough: Analyze C/C++ code for defects](../code-quality/walkthrough-analyzing-c-cpp-code-for-defects.md). The procedures create:

- A Visual Studio solution named CppDemo.

- A static library project named CodeDefects.

- A static library project named Annotations.

The procedures also provide the code for the header and *.cpp* files for the static libraries.

## Create the CppDemo solution and the CodeDefects project

1. Open Visual Studio and select **Create a new project**

1. Change language filter to **C++**

1. Select **Empty Project** and click **Next**

1. In the **Project Name** text box, type **CodeDefects**

1. In the **Solution name** text box, type **CppDemo**

1. Click **Create**

## Configure the CodeDefects project as a static library

1. In Solution Explorer, right-click **CodeDefects** and then click **Properties**.

1. Expand **Configuration Properties** and then click **General**.

1. In the **General** list, change **Configuration Type**, to **Static library (.lib)**.

1. In the **Advanced** list, change **Target File Extension** to **.lib**

## Add the header and source file to the CodeDefects project

1. In Solution Explorer, expand **CodeDefects**, right-click **Header Files**, click **Add**, and then click **New Item**.

1. In the **Add New Item** dialog box, click **Code**, and then click **Header File (.h)**.

1. In the **Name** box, type **Bug.h** and then click **Add**.

1. Copy the following code and paste it into the *Bug.h* file in the editor.

    ```cpp
    #pragma once

    #include <windows.h>

    // These functions are consumed by the sample
    // but are not defined. This project cannot be linked!
    bool CheckDomain(LPCTSTR);
    HRESULT ReadUserAccount();

    // These constants define the common sizes of the
    // user account information throughout the program
    const int USER_ACCOUNT_LEN = 256;
    const int ACCOUNT_DOMAIN_LEN = 128;
    ```

1. In Solution Explorer, right-click **Source Files**, point to **New**, and then click **New Item**.

1. In the **Add New Item** dialog box, click **C++ File (.cpp)**

1. In the **Name** box, type **Bug.cpp** and then click **Add**.

1. Copy the following code and paste it into the *Bug.cpp* file in the editor.

    ```cpp
    #include "Bug.h"

    // the user account
    TCHAR g_userAccount[USER_ACCOUNT_LEN] = {};
    int len = 0;

    bool ProcessDomain()
    {
        TCHAR* domain = new TCHAR[ACCOUNT_DOMAIN_LEN];
        // ReadUserAccount gets a 'domain\user' input from
        //the user into the global 'g_userAccount'
        if (ReadUserAccount())
        {
            // Copies part of the string prior to the '\'
            // character onto the 'domain' buffer
            for (len = 0; (len < ACCOUNT_DOMAIN_LEN) && (g_userAccount[len] != L'\0'); len++)
            {
                if (g_userAccount[len] == '\\')
                {
                    // Stops copying on the domain and user separator ('\')
                    break;
                }
                domain[len] = g_userAccount[len];
            }
            if ((len = ACCOUNT_DOMAIN_LEN) || (g_userAccount[len] != '\\'))
            {
                // '\' was not found. Invalid domain\user string.
                delete[] domain;
                return false;
            }
            else
            {
                domain[len] = '\0';
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

1. Click the **File** menu, and then click **Save All**.

## Add the Annotations project and configure it as a static library

1. In Solution Explorer, click **CppDemo**, point to **Add**, and then click **New Project**.

1. In the **Add a new project** dialog box, Change language filter to **C++** and select **Empty Project** then click **Next**.

1. In the **Project name** text box, type **Annotations**, and then click **Create**.

1. In Solution Explorer, right-click **Annotations** and then click **Properties**.

1. Expand **Configuration Properties** and then click **General**.

1. In the **General** list, change **Configuration Type**, to and then click **Static library (.lib)**.

1. In the **Advanced** list, select the text in the column next to **Target File extension**, and then type **.lib**.

## Add the header file and source file to the Annotations project

1. In Solution Explorer, expand **Annotations**, right-click **Header Files**, click **Add**, and then click **New Item**.

1. In the **Add New Item** dialog box, click **Header File (.h)**.

1. In the **Name** box, type **annotations.h** and then click **Add**.

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

1. In Solution Explorer, right-click **Source Files**, point to **New**, and then click **New Item**.

1. In the **Add New Item** dialog box, click **Code** and then click **C++ File (.cpp)**

1. In the **Name** box, type **annotations.cpp** and then click **Add**.

1. Copy the following code and paste it into the *annotations.cpp* file in the editor.

    ```cpp
    #include "annotations.h"

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

1. Click the **File** menu, and then click **Save All**.

The solution is now complete and should build without errors.
