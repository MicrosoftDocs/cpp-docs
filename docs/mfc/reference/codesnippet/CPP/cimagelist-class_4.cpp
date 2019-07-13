CImageList myImageList2;
myImageList2.Create(32, 32, ILC_COLOR8, 0, 4);

// Copy the first image from myImageList2 and make it
// the first image of m_myImageList.
m_myImageList.Copy(0, &myImageList2, 0, ILCF_MOVE);

// Recopy the image to make it also the last image in m_myImageList.
m_myImageList.Copy(m_myImageList.GetImageCount() - 1, (int)0,
                   (UINT)ILCF_MOVE);