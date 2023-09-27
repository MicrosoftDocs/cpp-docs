---
title: int-naming-convention
description: "Reference for Visual Studio C++ IntelliSense Linter check int-naming-convention."
ms.date: 09/27/2023
f1_keywords: ["int-naming-convention"]
helpviewer_keywords: ["int-naming-convention"]
monikerRange: ">=msvc-170"
---
# `int-naming-convention`

Ensure that the naming convention for symbols aligns with the coding style specified in the project's `.editorconfig` file.

To enable this feature, add an `.editorconfig` file in the same directory as your project file. The `.editorconfig` specifies the naming conventions for symbols in your project. For an example `.editorconfig` that specifies the naming conventions for Unreal Engine projects, see [`.editorconfig` on ](https://raw.githubusercontent.com/microsoft/vc-ue-extensions/main/Source/.editorconfig).

Once you have the `.editorconfig` file in your project, turn on the `int-naming-convention` check with the **Naming Convention** setting in the C/C++ Code Style options. For information about how to change this setting, see [Configure the linter](cpp-linter-overview.md#configure-the-linter).

## Example

The For example, an `editorconfig` file that contains:

```cpp
class MyClass
{ 

public: 

  int getValue() { return value; }  // Flagged: ‘getValue’ doesn't modify the object's state. 

  void setValue(int newValue) { value = newValue; }  // OK: ‘setValue’ modifies the object's state.   

private: 

  int value = 42; 

}; 
``````

flags the following code:

```cpp
void example()
{
    bool myFlag = true; // flagged because it doesn't follow the naming convention specified in the .editorconfig
}
```

## How to fix the issue

Change the naming based on the code style specified in the `.editorconfig`. For example:

```cpp
void example()
{ 
    bool bMyFlag = true; // fixed to follow the code style specified in the .editorconfig
} 
```

The editor can make the change for you. Place the cursor on the flagged symbol, and choose **Show potential fixes** and then **Apply naming convention**:

:::image type="content" source="media/int-naming-convention-apply-naming-convention.png" :::
The code editor shows bool myFlag = true. With the cursor on that line of code, **Show potential fixes** appeared and was chosen. Now **Apply naming convention** is visible and it shows bool my Flag = true in red and the suggested change, bool b My Flag, in green. You can now choose **Apply naming convention** to change the flagged code to bool b My Flag = true.
:::image-end:::

## Remarks

The `int-naming-convention` linter check ensures that naming conventions align with naming conventions specified in the `editorconfig` file. This check check can be applied to any project that has an `editorconfig` file, and can customize your `.editorconfig` file to suit your project's coding style.

## See also

[Create portable, custom editor settings with EditorConfig](/visualstudio/ide/create-portable-custom-editor-options)\
[IntelliSense code linter for C++ overview](cpp-linter-overview.md)