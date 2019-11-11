#include "gravar.h"

GravParticle::GravParticle(const Vector3& position)
	: m_position(std::move(position))
{
}


int Gravar::GetParticleCount() const
{
	return (int)m_particles.size();
}

void Gravar::ReserveParticles(int count)
{
	m_particles.reserve(m_particles.size() + count);
}

void Gravar::AddParticle(const Vector3 &position)
{
	m_particles.emplace_back(position);
}

void Gravar::ClearParticles()
{
	m_particles.clear();
}

template <typename Pred>
void Gravar::RemoveParticles(Pred pred, bool compress)
{

}

void Gravar::_bind_methods()
{
	ClassDB::bind_method(D_METHOD("get_particle_count", "value"), &Gravar::GetParticleCount);
	ClassDB::bind_method(D_METHOD("reserve_particles", "count"), &Gravar::ReserveParticles);
	ClassDB::bind_method(D_METHOD("add_particle", "position"), &Gravar::AddParticle);
	ClassDB::bind_method(D_METHOD("clear_particles", "count"), &Gravar::ClearParticles);
	//ClassDB::bind_method(D_METHOD("remove_particles"), &Gravar::RemoveParticles);
}

Gravar::Gravar()
{
}
