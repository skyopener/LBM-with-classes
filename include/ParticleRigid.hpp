#ifndef PARTICLE_RIGID_HPP_
#define PARTICLE_RIGID_HPP_
#include "LatticeModel.hpp"
#include "Particle.hpp"

class ParticleRigid: public Particle {
 public:
  ParticleRigid(double stiffness
    , std::size_t num_nodes
    , double center_x
    , double center_y
    , LatticeModel &lm);

  ~ParticleRigid() = default;

  void ComputeForces();

 protected:
};

#endif  // PARTICLE_RIGID_HPP_
