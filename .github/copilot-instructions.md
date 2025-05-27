When writing documentation, follow these guidelines:

- Follow the style of the [Microsoft Writing Style Guide](https://learn.microsoft.com/style-guide/welcome/).
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
- When you are going to refer to another file or an article on the web, use this format: "For more information, see [C++ language reference](../cpp/cpp-language-reference.md)." The exception to this is the See Also links at the end of an article. Those should be markdown links and contain the title of the article you link to as the descriptive portion of the link.
- Include links to related topics and resources where appropriate. Use relative links if the target file lives in this repo. If you add a link to another page on learn.microsoft.com that's not in this repo, remove https://learn.microsoft.com/en-us from the link.
- If you're adding a new Markdown file, it should be named in all lowercase with hyphens separating words. Also, omit any filler words such as "the" or "a" from the file name.
- If you're adding a new Markdown file, the following indicates where it should go the folder structure. If you aren't sure, ask.
    If the new file is about Linux, put it in the docs/linux folder.
    If the new file is about the C++ Standard Template Library (STL), put it in the docs/standard-library folder.
    If the new file is about the C runtime, put it in the docs/c-runtime-library folder.
    If the new file is about the C++ language, put it in the docs/cpp folder.
    If the new file is about a C++ feature specific to the Visual Studio IDE, put it in the docs/ide folder.
    If the new file is about the build process or modules, put it in the docs/build\reference folder.
    If the new file is about Build Insights, put it in the docs/build-insights folder.