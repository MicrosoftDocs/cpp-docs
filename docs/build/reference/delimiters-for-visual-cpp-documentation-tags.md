---
description: "Learn more about: Delimiters for Visual C++ Documentation Tags"
title: "Delimiters for Visual C++ Documentation Tags"
ms.date: "11/04/2016"
helpviewer_keywords: ["XML documentation, delimiters"]
ms.assetid: debfbdd9-63fa-4c58-a18e-a4d203d241d7
---
# Delimiters for Visual C++ Documentation Tags

The use of documentation tags requires delimiters, which indicate to the compiler where a documentation comment begins and ends.

You can use the following kinds of delimiters with the XML documentation tags:

| Delimiter | Description |
|-|-|
| `///` | This is the form that is shown in documentation examples and used by the Visual Studio C++ project templates.  |
| `/** */`  | These are multiline delimiters.  |

There are some formatting rules when using the `/** */` delimiters:

- For the line that contains the `/**` delimiter, if the remainder of the line is white space, the line is not processed for comments. If the first character is white space, that white space character is ignored and the rest of the line is processed. Otherwise, the entire text of the line after the `/**` delimiter is processed as part of the comment.

- For the line that contains the `*/` delimiter, if there is only white space up to the `*/` delimiter, that line is ignored. Otherwise, the text on the line up to the `*/` delimiter is processed as part of the comment, subject to the pattern-matching rules described in the following bullet.

- For the lines after the one that begins with the `/**` delimiter, the compiler looks for a common pattern at the beginning of each line that consists of optional white space and an asterisk (`*`), followed by more optional white space. If the compiler finds a common set of characters at the beginning of each line, it will ignore that pattern for all lines after the `/**` delimiter, up to and possibly including the line that contains the `*/` delimiter.

Some examples:

- The only part of the following comment that will be processed is the line that begins with `<summary>`. The following two tag formats will produce the same comments:

    ```cpp
    /**
    <summary>text</summary>
    */
    /** <summary>text</summary> */
    ```

- The compiler applies a pattern of " \* " to ignore at the beginning of the second and third lines.

    ```cpp
    /**
     * <summary>
     *  text </summary>*/
    ```

- The compiler finds no pattern in this comment because there is no asterisk on the second line. Therefore, all text on the second and third lines, up till the `*/`, will be processed as part of the comment.

    ```cpp
    /**
     * <summary>
       text </summary>*/
    ```

- The compiler finds no pattern in this comment for two reasons. First, there is no line that begins with a consistent number of spaces before the asterisk. Second, the fifth line begins with a tab, which does not match spaces. Therefore, all text from the second line until the `*/` will be processed as part of the comment.

    ```cpp
    /**
      * <summary>
      * text
     *  text2
       *  </summary>
    */
    ```

## See also

[XML Documentation](xml-documentation-visual-cpp.md)
