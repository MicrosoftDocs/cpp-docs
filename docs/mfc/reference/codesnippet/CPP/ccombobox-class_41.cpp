// My LCID to use.
LCID mylcid = MAKELCID(MAKELANGID(LANG_SPANISH, SUBLANG_SPANISH_MEXICAN),
                       SORT_DEFAULT);

// Force the list box to use my locale.
m_pComboBox->SetLocale(mylcid);
ASSERT(m_pComboBox->GetLocale() == mylcid);