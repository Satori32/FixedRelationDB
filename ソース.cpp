#include "FixedReletionDB.h"

int main() {
	FixedRelationDB<4> F = ConstructFixedRelationDB<4>();
	Free(F);

	FixedRelationDBs<4> F2 = ConstructFixedRelationDBs<4>();
	Free(F2);
	return 0;
}