#include "gravar.h"

void Gravar::add(int p_value) {
	count += p_value;
}

void Gravar::reset() {
	count = 0;
}

int Gravar::get_total() const {
	return count;
}

void Gravar::_bind_methods() {
	ClassDB::bind_method(D_METHOD("add", "value"), &Gravar::add);
	ClassDB::bind_method(D_METHOD("reset"), &Gravar::reset);
	ClassDB::bind_method(D_METHOD("get_total"), &Gravar::get_total);
}

Gravar::Gravar() {
	count = 0;
}
