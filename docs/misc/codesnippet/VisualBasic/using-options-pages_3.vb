        Dim tabSize As [Property] = propertiesList.Item("TabSize")
        Dim oldSize As Short = CShort(tabSize.Value)

        Dim message As String
        If oldSize <> 4 Then
            tabSize.Value = 4
            message = String.Format(CultureInfo.CurrentUICulture, "For Basic, the Text Editor had a tab size of {0}" & " and now has a tab size of {1}.", oldSize, tabSize.Value)
        Else
            message = String.Format(CultureInfo.CurrentUICulture, "For Basic, the Text Editor has a tab size of {0}.", tabSize.Value)
        End If
