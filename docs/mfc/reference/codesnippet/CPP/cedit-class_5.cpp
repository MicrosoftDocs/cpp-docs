// dynamically create an edit control
CEdit *pEdit = new CEdit;
pEdit->Create(ES_MULTILINE | WS_CHILD | WS_VISIBLE | WS_TABSTOP | WS_BORDER,
              CRect(10, 10, 100, 100), this, 1);