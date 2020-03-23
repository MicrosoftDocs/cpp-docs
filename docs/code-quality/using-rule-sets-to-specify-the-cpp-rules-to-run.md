---
title: Using Rule Sets to Specify the C++ Rules to Run
ms.date: 04/28/2018
ms.topic: "conceptual"
f1_keywords:
  - "vs.codeanalysis.rulesets.native"
---
# Use Rule Sets to Specify the C++ Rules to Run

In Visual Studio, you can create and modify a custom *rule set* to meet specific project needs associated with code analysis. The default rule sets are stored in `%VSINSTALLDIR%\Team Tools\Static Analysis Tools\Rule Sets`.

**Visual Studio 2017 version 15.7 and later:** You can create custom rule sets using any text editor and apply them in command line builds no matter what build system you are using. For more information, see [/analyze:ruleset](/cpp/build/reference/analyze-code-analysis).

To create a custom C++ rule set in Visual Studio, a C/C++ project must be open in the Visual Studio IDE. You then open a standard rule set in the rule set editor and then add or remove specific rules and optionally change the action that occurs when code analysis determines that a rule has been violated.

To create a new custom rule set, you save it by using a new file name. The custom rule set is automatically assigned to the project.

## To create a custom rule from a single existing rule set

1. In the Solution Explorer, open the shortcut menu for the project and then choose **Properties**.

1. On the **Properties** tab, choose **Code Analysis**.

1. In the **Rule Set** drop-down list, do one of the following:

   - Choose the rule set that you want to customize.

     \- or -

   - Choose **\<Browse...>** to specify an existing rule set that is not in the list.

1. Choose **Open** to display the rules in the rule set editor.

## To modify a rule set in the rule set editor

- To change the display name of the rule set, on the **View** menu, choose **Properties Window**. Enter the display name in the **Name** box. Notice that the display name can differ from the file name.

- To add all the rules of the group to a custom rule set, select the check box of the group. To remove all the rules of the group, clear the check box.

- To add a specific rule to the custom rule set, select the check box of the rule. To remove the rule from the rule set, clear the check box.

- To change the action taken when a rule is violated in a code analysis, choose the **Action** field for the rule and then choose one of the following values:

     **Warning** - generates a warning.

     **Error** - generates an error.

     **Info** - generates a message.

     **None** - disables the rule. This action is the same as removing the rule from the rule set.

## To group, filter, or change the fields in the rule set editor by using the rule set editor toolbar

- To expand the rules in all groups, choose **Expand All**.

- To collapse the rules in all groups, choose **Collapse All**.

- To change the field that rules are grouped by, choose the field from the **Group By** list. To display the rules ungrouped, choose **\<None>**.

- To add or remove fields in rule columns, choose **Column Options**.

- To hide rules that do not apply to the current solution, choose **Hide rules that do not apply to the current solution**.

- To switch between showing and hiding rules that are assigned the Error action, choose **Show rules that can generate Code Analysis errors**.

- To switch between showing and hiding rules that are assigned the Warning action, choose **Show rules that can generate Code Analysis warnings**.

- To switch between showing and hiding rules that are assigned the **None** action, choose **Show rules that are not enabled**.

- To add or remove Microsoft default rule sets to the current rule set, choose **Add or remove child rule sets**.

## To create a rule set in a text editor

You can create a custom rule set in a text editor, store it in any location with a `.ruleset` extension, and apply in with the [/analyze:ruleset](/cpp/build/reference/analyze-code-analysis) compiler option.

The following example shows a basic rule set file that you can use as a starting point:

::: moniker range="<=vs-2017"

```xml
<?xml version="1.0" encoding="utf-8"?>
<RuleSet Name="New Rule Set" Description=" " ToolsVersion="15.0">
  <Rules AnalyzerId="Microsoft.Analyzers.NativeCodeAnalysis" RuleNamespace="Microsoft.Rules.Native">
    <Rule Id="C6001" Action="Warning" />
    <Rule Id="C26494" Action="Warning" />
  </Rules>
</RuleSet>
```

::: moniker-end

::: moniker range=">=vs-2019"

```xml
<?xml version="1.0" encoding="utf-8"?>
<RuleSet Name="New Rule Set" Description=" " ToolsVersion="16.0">
  <Rules AnalyzerId="Microsoft.Analyzers.NativeCodeAnalysis" RuleNamespace="Microsoft.Rules.Native">
    <Rule Id="C6001" Action="Warning" />
    <Rule Id="C26494" Action="Warning" />
  </Rules>
</RuleSet>
```

::: moniker-end
