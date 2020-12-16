#ifndef Sawrm_hpp
#define Sawrm_hpp

#include <stdio.h>
#include "Particle.hpp"

namespace caveofprogramming {

class Swarm {
public:
    const static int NPARTICLES = 5000;
private:
    Particle *m_pParticles;
    int lastTime;
public:
    Swarm();
    virtual ~Swarm();
    void update(int elapsed);
    const Particle * const getParticles() { return m_pParticles; };
        
};
    
}

#endif /* Sawrm_hpp */
