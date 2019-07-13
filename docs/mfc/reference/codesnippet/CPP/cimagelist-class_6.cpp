// Delete the image list and verify.
myImageList2.DeleteImageList();
ASSERT(myImageList2.GetSafeHandle() == NULL);