---
title: lnt-naming-convention
description: "Reference for Visual Studio C++ IntelliSense Linter check lnt-naming-convention."
ms.date: 09/28/2023
f1_keywords: ["lnt-naming-convention"]
helpviewer_keywords: ["lnt-naming-convention"]
monikerRange: ">=msvc-170"
---
# `lnt-naming-convention`

Ensure that the naming convention for symbols aligns with your coding style, as specified in the project's `.editorconfig` file.

To enable this feature, add an `.editorconfig` file in the same directory as your project file. The `.editorconfig` specifies the naming conventions for symbols in your project. As an example, the naming conventions for Unreal Engine projects are specified in an `.editorconfig` on [GitHub](https://raw.githubusercontent.com/microsoft/vc-ue-extensions/main/Source/.editorconfig).

Once you have the `.editorconfig` file in your project, turn on the `lnt-naming-convention` check with the **Naming Convention** setting in the C/C++ Code Style options. For information about how to change this setting, see [Configure the linter](cpp-linter-overview.md#configure-the-linter).

## Example

Suppose that you have an `.editorconfig` file that contains:

```
cpp_naming_style.boolean_style.capitalization = pascal_case
cpp_naming_style.boolean_style.required_prefix = b
```

The linter flags the following code because it isn't prefixed with 'b' and because it isn't Pascal case, as specified in the `.editorconfig` file:

```cpp
void example()
{
    bool myFlag = true; // flagged because it doesn't follow the naming convention specified in the .editorconfig
}
```

## How to fix the issue

Change the naming to match the style specified in the `.editorconfig`:

```cpp
void example()
{ 
    bool bMyFlag = true; // fixed to follow the code style specified in the .editorconfig
} 
```

The editor can make the change for you. Place the cursor on the flagged symbol. Choose **Show potential fixes** and then **Apply naming convention**:

:::image type="complex" source="media/lnt-apply-naming-convention.png" alt-text="Screenshot of the IDE suggesting applying naming convention.":::
The code editor shows bool myFlag = true. With the cursor on that line of code, **Show potential fixes** appeared and was chosen. Now **Apply naming convention** is visible and it shows bool my Flag = true in red and the suggested change, bool b My Flag, in green. You can now choose **Apply naming convention** to change the flagged code to bool b My Flag = true.
:::image-end:::

## Remarks

Introduced in Visual Studio 2022 17.7, the `lnt-naming-convention` linter check ensures that naming conventions align with those specified in the `.editorconfig` file. You can apply this check to any project that has an `.editorconfig` file. You can also customize your `.editorconfig` file to suit your project's coding style.

## See also

[Create portable, custom editor settings with EditorConfig](/visualstudio/ide/create-portable-custom-editor-options)\
[IntelliSense code linter for C++ overview](cpp-linter-overview.md)