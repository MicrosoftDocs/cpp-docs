// The new image list of the header control.
m_HeaderImages.Create(16, 16, ILC_COLOR, 2, 2);
m_HeaderImages.Add(AfxGetApp()->LoadIcon(IDI_ICON1));
m_HeaderImages.Add(AfxGetApp()->LoadIcon(IDI_ICON2));
m_HeaderImages.Add(AfxGetApp()->LoadIcon(IDI_ICON3));

ASSERT(m_myHeaderCtrl.GetImageList() == NULL);

m_myHeaderCtrl.SetImageList(&m_HeaderImages);
ASSERT(m_myHeaderCtrl.GetImageList() == &m_HeaderImages);