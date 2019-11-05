#pragma once

#include "scene/3d/spatial.h"

class Gravar : public Spatial {
	GDCLASS(Gravar, Spatial);

	int count;

protected:
	static void _bind_methods();

public:
	void add(int p_value);
	void reset();
	int get_total() const;

	Gravar();
};
