#pragma once

#include "scene/3d/node_3d.h"

#include <vector>

struct GravParticle
{
	GravParticle(const Vector3& position);

	Vector3 m_position;
};

class Gravar : public Node3D {
	GDCLASS(Gravar, Node3D);

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
