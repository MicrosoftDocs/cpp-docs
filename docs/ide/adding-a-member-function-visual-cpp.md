---
description: "Learn more about: Add a member function"
title: "Add a member function"
ms.date: "11/09/2018"
f1_keywords: ["vc.codewiz.classes.member.function", "vc.codewiz.function.overview"]
helpviewer_keywords: ["member functions, adding to classes", "classes [C++], adding members", "add member function wizard [C++]"]
ms.assetid: 55b25ddb-541d-44ed-957c-974ef91cfc85
---
# Add a member function

In **Class View**, you can add a member function to any class. When you do this, a declaration is added to the header file, and a stub member-function body is added to the class's implementation file, which you can then modify.

**To add a member function to a class:**

1. In **Class View**, expand the project node to display the classes in the project. (To open **Class View**, on the menu bar, choose **View**, **Class View**.)

1. Open the shortcut menu for the class you want to add a member function to, and then choose **Add**, **Add Function**.

1. Provide the appropriate details about the member function. For more information, see [Add member function wizard](#add-member-function-wizard).

1. Choose the **Finish** button to generate the member function code.

## In this section

- [Add member function wizard](#add-member-function-wizard)

## Add member function wizard

This wizard adds a member function declaration to the header file. It also adds a stub member function implementation to the implementation file for the selected class.

Once you've added the member function using the wizard, you can edit the code in the development environment.

- **Return type**

  Sets the return type for the member function you're adding. You can provide your own return type, or you can select from the list of available types. For information about the types, see [Fundamental types](../cpp/fundamental-types-cpp.md).

:::row:::
   :::column span="":::
      **`char`**\
      **`double`**\
      **`float`**\
      **`int`**
   :::column-end:::
   :::column span="":::
      **`long`**\
      **`short`**\
      **`unsigned char`**\
      **`unsigned int`**
   :::column-end:::
   :::column span="":::
      **`unsigned long`**\
      **`void`**\
      `HRESULT`
   :::column-end:::
:::row-end:::

- **Function name**

  Sets the name of the member function you're adding.

- **Parameter type**

  Sets the type of parameter you're adding for the member function, if the member function has parameters. You can provide your own parameter type, or you can select from the list of available types.

:::row:::
   :::column span="":::
      **`char`**\
      **`double`**\
      **`float`**
   :::column-end:::
   :::column span="":::
      **`int`**\
      **`long`**\
      **`short`**
   :::column-end:::
   :::column span="":::
      **`unsigned char`**\
      **`unsigned int`**\
      **`unsigned long`**
   :::column-end:::
:::row-end:::

- **Parameter name**

  Sets the name of a parameter you're adding for the member function, if the member function has parameters.

- **Parameter list**

  Displays a list of parameters you've added to the member function. To add a parameter to the list, provide a type and name in the **Parameter type** and **Parameter name** boxes and select **Add**. To remove a parameter from the list, select the parameter and select **Remove**.

- **Access**

  Sets the access to the member function. Access modifiers are keywords that specify the access other classes have to the member function. For more information about specifying access, see [Member-access control](../cpp/member-access-control-cpp.md). The member function access level is set to **`public`** by default.

  - [public](../cpp/public-cpp.md)
  - [protected](../cpp/protected-cpp.md)
  - [private](../cpp/private-cpp.md)

  Check whether the new member function is static or virtual, and whether it's inline or pure. If you set the member function to be pure, the **Virtual** check box is selected, and the **Inline** check box becomes unavailable. The default is a nonstatic, nonvirtual member function.

  | Option | Description |
  |--------|-------------|
  | [Static](../cpp/storage-classes-cpp.md) |  Specifies that the function acts like a global and can be called outside of the class, even without class instantiation. The member function has no access to non-static members. A member function specified as `Static` can't be virtual. |
  | [Virtual](../cpp/virtual-cpp.md) | Makes sure that the correct member function is called for an object, regardless of the expression used to make the member function call. A member function specified as `Virtual` can't be static. |
  | **Pure** | Indicates that no implementation is supplied for the virtual member function being declared. **Pure** can be specified only on virtual member functions. A class that contains at least one pure virtual member function is considered an abstract class. Classes derived from the abstract class must implement the pure virtual member function or they, too, are abstract classes. |
  | [Inline](../cpp/inline-functions-cpp.md) | Instructs the compiler to insert a copy of the member function body into each place the member function is called. A member function specified as **Inline** can't be pure. |

- **.cpp file**

  Sets the file location where the stub member function implementation is written. By default, it's written to the .cpp file for the class to which the member function is added. Select the ellipsis button to change the file name. The member function implementation is added to the contents of the selected file.

- **Comment**

  Provides a comment in the header file for the member function.

- **Function signature**

  Displays the member function verbatim from the code when you select **Finish**. You can't edit the text in this box. To change the member function, change the appropriate boxes in the wizard.
