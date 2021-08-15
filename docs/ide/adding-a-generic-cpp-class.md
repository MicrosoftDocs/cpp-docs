---
description: "Learn more about: Add a generic C++ class"
title: "Add a generic C++ class"
ms.date: "11/09/2018"
f1_keywords: ["vc.codewiz.classes.adding.generic", "vc.codewiz.class.generic"]
helpviewer_keywords: ["Visual C++, classes", "generic classes, adding", "generic classes", "generic C++ class wizard [C++]"]
ms.assetid: e95a5a14-dbed-4edc-8551-344fe48613cb
---
# Add a generic C++ class

You can add a generic C++ class by using **Class View**. A generic C++ class is a class that you define or that is derived from a class that you define.

**To add a generic C++ class to a project:**

1. In **Class View**, right-click the project to which you want to add the new class, choose **Add**, and then choose **Class**.

1. In the [Add Class](./adding-a-class-visual-cpp.md#add-class-dialog-box) dialog box, in the templates pane, select **C++ Class**. Select **Add** to display the [generic C++ class wizard](#generic-c-class-wizard).

1. In the wizard, provide a class name, and then define settings or accept the defaults.

1. To close the wizard and view the new generic C++ class in the project, select **Finish**.

## In this section

- [Generic C++ class wizard](#generic-c-class-wizard)

## Generic C++ class wizard

Adds a generic C++ class to a project. The class doesn't inherit from ATL or MFC.

- **Class name**

  Sets the name of the new class.

- **.h file**

  Sets the name of the header file for the new class. By default, this name is based on the name you provide in **Class name**. To save the header file to the location of your choice, or to append the class declaration to an existing file, select the ellipsis button (**...**). If you specify an existing file and select **Finish**, the wizard prompts you to specify whether the class declaration should be appended to the file contents. To append the declaration, select **Yes**; to return to the wizard and specify another file name, select **No**.

- **.cpp file**

  Sets the name of the implementation file for the new class. By default, this name is based on the name you provide in **Class name**. To save the implementation file to the location of your choice, or to append the class definition to an existing file, select the ellipsis button (**...**). If you specify an existing file and select **Finish**, the wizard prompts you to specify whether the class definition should be appended to the file contents. To append the definition, select **Yes**; to return to the wizard and specify another file name, select **No**.

- **Base class**

  Sets the base class for the new class.

- **Access**

  Sets access to the base class members for the new class. Access modifiers are keywords that specify the level of access that other classes have to the class member functions. For more information about how to specify access, see [Member access control](../cpp/member-access-control-cpp.md). By default, the class access level is set to **`public`**.

  - **`public`**
  - **`protected`**
  - **`private`**
  - **Default** (No access modifier is generated.)

- **Virtual destructor**

  Specifies whether the class destructor is virtual. Use of a virtual destructor helps make sure that the correct destructor is called when instances of derived classes are deleted.

- **Inline**

  Generates both the class constructor and the class definition as inline functions in the header file.

- **Managed**

  When selected, adds a managed class and header file. When cleared, adds a native class and header file.
