            Property tabSize = propertiesList.Item("TabSize");
            short oldSize = (short)tabSize.Value;

            string message;
            if (oldSize != 4)
            {
                tabSize.Value = 4;
                message = string.Format(CultureInfo.CurrentUICulture,
                    "For Basic, the Text Editor had a tab size of {0}" +
                    " and now has a tab size of {1}.", oldSize, tabSize.Value);
            }
            else
            {
                message = string.Format(CultureInfo.CurrentUICulture,
                    "For Basic, the Text Editor has a tab size of {0}.", tabSize.Value);
            }

            MessageBox.Show(message, "Text Editor, Basic, Tab Size:",
                MessageBoxButtons.OK, MessageBoxIcon.Information,
                MessageBoxDefaultButton.Button1, 0);