When writing documentation, follow the following guidelines:

- Follow the style of the [Microsoft Writing Style Guide](https://learn.microsoft.com/en-us/style-guide/welcome/).
- Headings should be in sentence case, not title case. Don't use gerunds in titles.
- Use the active voice whenever possible, and second person to address the reader directly.
- Use a conversational tone with contractions.
- Be concise.
- Break up long sentences.
- Use the present tense for instructions and descriptions. For example, "The method returns a value" instead of "The method will return a value."
- Don't use "we" or "our" to refer to the authors of the documentation.
- Use the imperative mood for instructions. For example, "Call the method" instead of "You should call the method."
- Use "might" instead of "may" to indicate possibility. For example, "This method might throw an exception" instead of "This method may throw an exception."
- Use the Oxford comma in lists of three or more items.
- Number ordered list items all as "1." instead of "1.", "2.", etc. Use bullets for unordered lists.
- Use **bold** when referring to UI elements. Use `code style` for file names and folders, custom types, and other text that should never be localized.
- Put raw URLs within angle brackets.
- When you are going to refer to another file or an article on the web, use a link. For example, "For more information, see [C++ language reference](../cpp/cpp-language-reference.md)." 
- Include links to related topics and resources where appropriate. Use relative links if the target file lives in this repo. If you add a link to another page on learn.microsoft.com that's not in this repo, remove https://learn.microsoft.com/en-us from the link.
- If you're adding a new Markdown file, it should be named in all lowercase with hyphens separating words. Also, omit any filler words such as "the" or "a" from the file name.
- If you're adding a new Markdown file, the following indicates where it should go the folder structure. If you aren't sure, ask. The following folder structure is how it looks on my hard drive. To map to GitHub, for example, C:\Users\twhitney\repos\cpp-docs-pr\docs\linux is docs/linux
    If the file is about Linux, put it in the C:\Users\twhitney\repos\cpp-docs-pr\docs\linux folder.
    If the file is about the C++ Standard Template Library (STL), put it in the C:\Users\twhitney\repos\cpp-docs-pr\docs\standard-library folder.
    If the file is about the C runtime, put it in the C:\Users\twhitney\repos\cpp-docs-pr\docs\c-runtime-library folder.
    If the file is about the C++ language, put it in the C:\Users\twhitney\repos\cpp-docs-pr\docs\cpp folder.
    If the file is about a C++ feature specific to the Visual Studio IDE, put it in the C:\Users\twhitney\repos\cpp-docs-pr\docs\ide folder.
    If the file is about the build process or modules, put it in the C:\Users\twhitney\repos\cpp-docs-pr\docs\build\reference folder.
    If the file is about Build Insights, put it in the C:\Users\twhitney\repos\cpp-docs-pr\docs\build-insights folder.