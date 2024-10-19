#pragma once
#include <stdio.h>

#include "SurfaceT.h"
#include "FixedVector.h"
#include "Any.h"

template<size_t N>
struct FixedRelationDB {
	FixedVector<SurfaceT<Any>,N> V;
};

template<size_t N> FixedRelationDB<N> ConstructFixedReletionDB<SurfaceT<Any>,N>();
template<size_t N>bool Free(FixedRelationDB<N>& In);
template<size_t N> bool FreeII(FixedRelationDB<N>& In);

template<size_t A,size_t B>
struct FixedRelationDBs {
	FixedVector<RelationDB<B>,A> V;
};

template<size_t A,size_t B> FixedRelationDBs<A> ConstructFixedReletionDBs<RelationDB<B>,A>();
template<size_t A,size_t B>bool Free(FixedRelationDBs<B>& In);
template<size_t N> bool FreeII(FixedRelationDBs<N>& In);