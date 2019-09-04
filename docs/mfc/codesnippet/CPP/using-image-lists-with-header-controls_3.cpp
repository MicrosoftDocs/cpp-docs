HDITEM curItem = {0};

pHeaderCtrl->SetImageList(&m_ListImageList);

curItem.mask = HDI_TEXT | HDI_FORMAT | HDI_WIDTH | HDI_IMAGE;
curItem.pszText = _T("Column 1");
curItem.cxy = 100;
curItem.iImage = 0;
curItem.fmt = HDF_LEFT | HDF_STRING | HDF_IMAGE;
pHeaderCtrl->InsertItem(0, &curItem);