#pragma once

#include "scene/3d/spatial.h"

#include <vector>

struct GravParticle
{
	GravParticle(const Vector3& position);

	Vector3 m_position;
};

class Gravar : public Spatial {
	GDCLASS(Gravar, Spatial);

protected:
	static void _bind_methods();

public:

	Gravar();

	int GetParticleCount() const;
	void AddParticle(const Vector3 &position);
	void ReserveParticles(int count);
	void ClearParticles();
	template <typename Pred>
	void RemoveParticles(Pred pred, bool compress);

private:
	std::vector<GravParticle> m_particles;
};
