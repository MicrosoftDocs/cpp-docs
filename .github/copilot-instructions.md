# Copilot Instructions for `cpp-docs-pr`

## Introduction

This document contains general and repository-specific instructions for GitHub Copilot when assisting with the `cpp-docs-pr` repository.

## Priority Levels

This document uses the following markers to indicate instruction priority:

- **[REQUIRED]** - Must be followed. May cause build failures or PR blocks if violated
- **[STYLE]** - Microsoft Writing Style Guide requirement for consistency
- **[C++-SPECIFIC]** - C++ documentation convention that overrides general guidance
- No marker - Best practice recommendation; use judgment based on context

## General Guidelines

### 1. Issue Handling
When creating a PR for an issue:
- [ ] Read the full issue and all linked references
  - [ ] **new-feature:** State which version introduced the feature
  - [ ] **bug:** Focus on correcting technical inaccuracies
- [ ] When you're assigned an issue, after you've completed your work and the workflows (status checks) have run, ensure there are no build warnings under the OpenPublishing.Build status check. If there are, open the build report (under View Details) and resolve any build warnings you introduced.
- [ ] When starting work on an issue, document your understanding in a comment: state the issue's purpose, expected outcome, and your implementation approach.

### 2. Issue Discussion Analysis
When working on an issue:
- [ ] **Read the complete issue discussion** - Don't rely solely on the initial issue description
- [ ] **Prioritize maintainer guidance** - Comments from repository maintainers (especially those with "MEMBER" association) should take precedence over the original issue description
- [ ] **Look for updated analysis** - Later comments may contain revised understanding, additional context, or modified resolution approaches
- [ ] **Check for explicit instructions** - Look for phrases like "Action required by GitHub Copilot" or direct "@copilot" mentions that provide specific guidance
- [ ] **Validate your understanding** - If the discussion seems to contradict the initial issue description, follow the most recent maintainer guidance

### 3. File Naming and Organization
**Naming conventions:**
- [ ] Name new Markdown files in all lowercase with hyphens separating words
- [ ] Omit filler words like "the" or "a" from file names

**Folder structure:**
- [ ] Linux topics → `docs/linux/`
- [ ] C++ STL → `docs/standard-library/`
- [ ] C runtime → `docs/c-runtime-library/`
- [ ] C++ language → `docs/cpp/`
- [ ] Visual Studio IDE features → `docs/ide/`
- [ ] Build process/modules → `docs/build/reference/`
- [ ] Build Insights → `docs/build-insights/`

### 4. Links and References
- [ ] Add links to related topics and resources where appropriate.
- [ ] Use relative links for files in this repo 
- [ ] **[REQUIRED]** Links to other documentation articles should be relative, not absolute. Start relative links with `/docs/` and include the `.md` suffix. If you add a link to another page on learn.microsoft.com that's not in this repo, remove https://learn.microsoft.com/en-us from the link.
- [ ] **[REQUIRED]** Links to bookmarks within the same article should be relative and start with `#`.
- [ ] **[REQUIRED]** Link descriptions should be descriptive and make sense on their own. Don't use "click here" or "this link" or "here".
- [ ] **[STYLE]** When you are going to refer to another file or an article on the web, use this format: "For more information, see [descriptive name of link](link path)." The exception to this is the See Also links at the end of an article. Those should be markdown links and contain the title of the article you link to as the descriptive portion of the link.
- [ ] For external links to non-Microsoft sites:
  - [ ] **[REQUIRED]** Use absolute URLs
  - [ ] **[REQUIRED]** Remove any language or culture segment from the URL path (such as `/en-us/`, `/fr-fr/`, `/en/`, etc.)
  - [ ] Example (MDN):  
    - [ ] Original: `https://developer.mozilla.org/en-US/docs/Web/API/Element/click_event`
    - [ ] Correct: `https://developer.mozilla.org/docs/Web/API/Element/click_event`

- [ ] For links to Microsoft Learn content in other repositories:
  - [ ] **[REQUIRED]** Use the relative URL starting with a forward slash
  - [ ] Don't include the scheme and the host (example: `https://learn.microsoft.com`) and don't include the locale (example: `en-us`)
  - [ ] Example: For the target Learn website URL `https://learn.microsoft.com/en-us/dotnet/core/introduction`, use the relative URL `/dotnet/core/introduction` for the link destination

## Repository-Specific Guidelines
- [ ] **[REQUIRED]** Follow the [Microsoft Writing Style Guide](https://learn.microsoft.com/en-us/style-guide/welcome/)
  - [ ] Use contractions following the guidance in [Use contractions](https://learn.microsoft.com/en-us/style-guide/word-choice/use-contractions)
- [ ] **Repository Exceptions**:
  - [ ] **[REQUIRED]** Use **bold** text for UI elements like menu items, dialog names, and names of text boxes.
  - [ ] **[REQUIRED]** Number ordered lists as "1." for every item (don't use sequential numbers)
  - [ ] **[REQUIRED]** Use backticks around content specifically for file names (`file.txt`), folders (`folder`), file paths (`folder/file.txt`), custom types (`myVariable`, `MyClass`), raw URLs in the text (`https://www.contoso.com`), file extensions (`.cpp`), and code like method names, property names, and language keywords. Also use for text that should never be localized.
  - [ ] **[REQUIRED]** Use `code style` for resource names (like virtual machine names) that shouldn't be localized.
  - [ ] **[C++-SPECIFIC]** Use `code style` for command-line commands. The style in some articles uses **bold** for command-line commands, but use `code style` instead. 
  - [ ] **[STYLE]** Use placeholders with braces in the format `{PLACEHOLDER NAME}` when used code examples and other contexts where placeholders are used. Use uppercase letters with spaces between words for the placeholder name inside the braces.
    - [ ] Wrong: "Launch the app and navigate to `https://localhost:<port>/openapi/v1.json` to view the generated OpenAPI document."
    - [ ] Correct: "Launch the app and navigate to `https://localhost:{PORT}/openapi/v1.json` to view the generated OpenAPI document, where the `{PORT}` placeholder is the port."
  - [ ] For any new or updated .md file added to the repository, ensure the following frontmatter (metadata) is included as specified in [Metadata for Microsoft Learn documentation.](https://learn.microsoft.com/en-us/contribute/content/metadata):
    - [ ] **[REQUIRED]** Metadata `ai-usage: ai-assisted` if any AI assistance was used.
    - [ ] **[REQUIRED]** When updating a topic that has the ms.assetid: metadata, remove the entire ms.assetid line.
    - [ ] **[REQUIRED]** Place the title metadata first, followed by the remaining metadata lines as shown in the following example:
**Example:**
  ```yaml
  ---
  title: "Understanding C++ modules"
  description: "Learn how to use C++ modules in Visual Studio"
  author: github-username
  ms.author: ms-alias
  ms.date: 12/11/2025
  ms.topic: conceptual
  ai-usage: ai-assisted
  ---
 ```

### 5. Content Writing Guidelines
- [ ] **[STYLE]** Get to the point fast. Be concise and clear.
- [ ] **[STYLE]** Talk like a person.
- [ ] **[STYLE]** Simpler is better.
- [ ] **[STYLE]** Be brief. Give customers just enough information to make decisions confidently. Prune excess words.
- [ ] **[STYLE]** Break up long sentences.
- [ ] **[STYLE]** Use present tense verbs (is, open) instead of past tense (was, opened). For example, "The method returns a value" instead of "The method will return a value."
- [ ] **[STYLE]** Write factual statements and direct commands. Avoid hypotheticals.
- [ ] **[STYLE]** Use active voice where the subject performs the action.
- [ ] **[STYLE]** Write in second person (you) to speak directly to readers.
- [ ] **[STYLE]** Use gender-neutral language.
- [ ] **[STYLE]** Avoid multiple -ing words that could create ambiguity.
- [ ] **[STYLE]** Keep prepositional phrases simple and clear.
- [ ] **[STYLE]** Place modifiers close to what they modify.
- [ ] **[STYLE]** Use a conversational tone with contractions.
- [ ] **[STYLE]** Don't use "we" or "our" to refer to the authors of the documentation.
- [ ] **[STYLE]** Use the imperative mood for instructions. For example, "Call the method" instead of "You should call the method."
- [ ] **[STYLE]** Use "might" instead of "may" to indicate possibility. For example, "This method might throw an exception" instead of "This method may throw an exception."
- [ ] **[STYLE]** Use the Oxford comma in lists of three or more items.
- [ ] Introductory paragraph:
  - [ ] When drafting the first paragraph of any new article, or when significantly updating an existing article:
  - [ ] Explain why and when the topic matters in practical C++ development scenarios.
  - [ ] Give a concise summary of what the article covers or enables, so readers know what to expect.
  - [ ] When significantly updating, revise the introductory paragraph to match the new scope and content.

### 6. PR Description Requirements
- [ ] ALWAYS include "Fixes #[issue-number]" in the PR description, at the first line of the description to link back to the original issue
- [ ] Include a clear summary of changes made
- [ ] List all files that were modified with brief descriptions

## Capitalization

- [ ] Use sentence-style capitalization for everything except proper nouns.
- [ ] Always capitalize proper nouns.
- [ ] Don’t capitalize the spelled-out form of an acronym unless it's a proper noun.
- [ ] Use title-style capitalization for product and service names.
- [ ] Don't use all uppercase for emphasis.

## Numbers

The following does NOT apply to step numbers but applies to all other numbers:
- [ ] Spell out numbers for zero through nine, unless space is limited. Use numerals for 10 and above.
- [ ] Spell out numbers at the beginning of a sentence.
- [ ] Spell out ordinal numbers such as first, second, and third. Don't add -ly to form adverbs from ordinal numbers.
- [ ] Number ordered list items all as 1. instead of sequentially as 1., 2., etc. Use bullets for unordered lists.

## Punctuation

- [ ] Use short, simple sentences.
- [ ] End all sentences with a period.
- [ ] Use one space after punctuation marks.
- [ ] After a colon, capitalize only proper nouns.
- [ ] Avoid semicolons - use separate sentences instead.
- [ ] Use question marks sparingly.
- [ ] Don't use slashes (/) - use "or" instead.

## Headings

- [ ] Headings should be in sentence case, not title case. Don't use gerunds in titles.
- [ ] Don't apply an inline style like italic, or bold to headings. But do use inline code style for headings that are code elements, like method names or property names.

## Alerts

- [ ] Alerts are a Markdown extension to create block quotes that render with colors and icons that indicate the significance of the content. The following alert types are supported:

    - [ ] `[!NOTE]` Information the user should notice even if skimming.
    - [ ] `[!TIP]` Optional information to help a user be more successful.
    - [ ] `[!IMPORTANT]` Essential information required for user success.
    - [ ] `[!CAUTION]` Negative potential consequences of an action.
    - [ ] `[!WARNING]` Dangerous certain consequences of an action.

## Images

- [ ] Use images only when they add value.
- [ ] Images have a descriptive and meaningful alt text that starts with "Screenshot showing" and ends with ".".
- [ ] Videos have a descriptive and meaningful alt text or title that starts with "Video showing" and ends with ".".

## Numbered steps

- [ ] Write complete sentences with capitalization and periods
- [ ] Use imperative verbs
- [ ] Clearly indicate where actions take place (UI location)
- [ ] For single steps, use a bullet instead of a number
- [ ] When allowed, use angle brackets for menu sequences (File > Open)

## Terminology

- [ ] Use "Select" instead of "Click" for UI elements like buttons, menu items, links, dropdowns, and checkboxes.