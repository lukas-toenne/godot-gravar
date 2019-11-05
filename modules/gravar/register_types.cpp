#include "register_types.h"

#include "core/class_db.h"
#include "gravar.h"

void register_gravar_types() {
	ClassDB::register_class<Gravar>();
}

void unregister_gravar_types() {
	// Nothing to do here in this example.
}
