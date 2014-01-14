inline void* Bucket_data :: operator new (size_t size, Bucket &owner) {
	return owner.get_new();
}

inline void Bucket_data :: operator delete (void *old_data, size_t size) {
	((Bucket_data*) old_data)->owner->
		recycle_old((Bucket_data*) old_data);
	old_rata = NULL;
}
