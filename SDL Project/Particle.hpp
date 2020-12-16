#ifndef Particle_hpp
#define Particle_hpp

namespace caveofprogramming {
    
struct Particle {

    double m_x;
    double m_y;
private:
    double m_speed;
    double m_direction;
private:
    void init();
public:
    Particle();
    virtual ~Particle();
    void update(int interval);
        
};
    
}

#include <stdio.h>

#endif /* Particle_hpp */
