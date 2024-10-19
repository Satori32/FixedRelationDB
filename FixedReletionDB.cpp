#include "ReletionDB.h"

template<size_t N>
FixedRelationDB<N> ConstructFixedReletionDB() {
	RelationDB<N> R;
	R.V = ConstructFixedVector<SurfaceT<Any>,N>(;

	return R;
}
template <size_t N>
bool Free(FixedRelationDB<N>& In) {
	Free(In.V);

	return true;
}
template<size_t N>
bool FreeII(FixedRelationDB<N>& In) {
	for (size_t i = 0; i < Size(In.V); i++) {
		if (Index(In.V, i) == NULL) { return false; }
		Free(*Index(In.V, i));
	}
	Free(In.V);

	return true;
}
template<size_t A,size_t B>
RelationDB<A,B> ConstructFixedReletionDBs() {
	FixedRelationDBs<A,B> R;
	R.V = ConstructFixedVector<SurfaceT<Any>,N>(;

	return R;
}
template <size_t A,size_t B>
bool Free(RelationDBs<A,B>& In) {
	Free(In.V);

	return true;
}
template<size_t A,size_t B>
bool FreeII(RelationDBs<A,B>& In) {
	for (size_t i = 0; i < Size(In.V); i++) {
		if (Index(In.V, i) == NULL) { return false; }
		Free(*Index(In.V, i));
	}
	Free(In.V);

	return true;
}