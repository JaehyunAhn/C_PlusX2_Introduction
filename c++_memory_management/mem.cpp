// mem.cpp
#include <stddef.h> //  sometimes needed to overload new
#include <new.h>	// usually needed to overload new

/*
   1. devide the possible keys on which the sort is being done into a number of buckets
   2. read the data sequentially, putting each item directly into the right bucket
	(quick if you know the range of key values)
   3. write out the buckets sequetially to disk
*/
class Bucket_data;
class Bucket {
	public:
		void add_data (Bucket_data *new_data);
		Bucket_data *get_new();
		void recycle_old (Bucket_data *old_data);
	private:
		Data_list data, free_list; // some detail to work out
};

class Bucket_data {
	public:
		Bucket_data (Bucket *new_owner);
		static void * operator new (size_t size, Bucket &owner);
		static void operator delete (void *old_data, size_t size);
	private:
		Bucket *owner;
};

// implementation
#ifndef mem_inl
	#include <mem.inl>
#endif

int main () {
	Bucket_data *new_data = new (pail) Bucket_data (&pail);
	return 0;
}
