PARAFORMAT pf;

// Modify the paragraph format so that the text is centered.
pf.cbSize = sizeof(PARAFORMAT);
pf.dwMask = PFM_ALIGNMENT;
pf.wAlignment = PFA_CENTER;
m_myRichEditCtrl.SetParaFormat(pf);

// Verify the settings are what is expected.
m_myRichEditCtrl.GetParaFormat(pf);
ASSERT(pf.dwMask &PFM_ALIGNMENT);
ASSERT(pf.wAlignment == PFA_CENTER);